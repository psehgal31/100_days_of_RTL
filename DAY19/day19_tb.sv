// Virtual Interface

class driver;
  
  logic psel;
  logic penable;
  logic [31:0] paddr;
  logic pwrite;
  logic [31:0] pwdata;

  virtual INTF.apb_master vif;

  function new(virtual INTF.apb_master vif);
    this.vif = vif;
  endfunction
  
  task init();
    vif.psel = 0;
    vif.pwrite = 0;
    vif.penable = 0;
    vif.paddr = 0;
    vif.pwdata = 0;
  endtask

  task write(input logic [31:0] addr, input logic [31:0] data);
    // Populate the class fields
    psel = 1;
    pwrite = 1;
    penable = 0;
    paddr = addr;
    pwdata = data;

    //setup phase
    @(posedge vif.clk);
    vif.psel = psel;
    vif.pwrite = pwrite;
    vif.penable = penable;
    vif.paddr = paddr;
    vif.pwdata = pwdata;
    //access phase
    @(posedge vif.clk);
    vif.penable = 1;

    // Wait for pready
    @(posedge vif.clk);
    while (!vif.pready) begin
      @(posedge vif.clk);
    end

    $display("[DRIVER] WRITE addr=0x%0h data=0x%0h",addr,data);

    // De-assert signals
    vif.psel = 0;
    vif.penable = 0;

  endtask

  task read(input logic [31:0] addr, output logic [31:0] rdata);
    // Populate the class fields
    psel = 1;
    pwrite = 0;
    penable = 0;
    paddr = addr;
    pwdata = 0;

      //setup phase
    @(posedge vif.clk);
    vif.psel = psel;
    vif.pwrite = pwrite;
    vif.penable = penable;
    vif.paddr = paddr;
    vif.pwdata = pwdata;
 //access phase
    @(posedge vif.clk);
    vif.penable = 1;

    // Wait for pready
    @(posedge vif.clk);
    while (!vif.pready) begin
      @(posedge vif.clk);
    end

    rdata = vif.prdata;
    $display("[DRIVER] READ addr=0x%0h rdata=0x%0h",addr,rdata);

    // De-assert signals
    vif.psel = 0;
    vif.penable = 0;

endtask


endclass

module day19_tb ();
  
  logic		clk;
  logic		reset;

// Clock generation
  initial clk =0;
  always #5 clk = ~clk;

  driver DRIVER;
  
  // Instantiate the interface
  INTF apb_if (
    .clk		(clk),
    .reset		(reset)
  );


  // Instantiate APB slave RTL
  day19 apb_slave_inst (
    .clk		(clk),
    .reset		(reset),
    .apb_if		(apb_if.apb_slave)
  );
    logic [31:0] rdata;

  initial begin
    reset=1;
    apb_if.psel = 1'b0;
    apb_if.penable = 1'b0;
    apb_if.pwrite = 1'b0;
    apb_if.paddr = 32'h0;
    apb_if.pwdata = 32'h0;
    repeat(4) @(posedge clk);
    reset=0;
    repeat(2) @(posedge clk);

    DRIVER = new(apb_if.apb_master);
    DRIVER.init();

    // Write transactions
    DRIVER.write(32'h00000004, 32'hDEAD_BEEF);
    DRIVER.write(32'h00000008, 32'hCAFE_BABE);
    DRIVER.write(32'h0000000C, 32'h1234_5678);

    // Read transactions
    DRIVER.read(32'h00000004, rdata);
    DRIVER.read(32'h00000008, rdata);
    DRIVER.read(32'h0000000C, rdata);

    repeat(5) @(posedge clk);
    $display("Test completed. Check waveforms for details.");
    $finish;

  end

  // Dump VCD
  initial begin
    $dumpfile("day19.vcd");
    $dumpvars(0, day19_tb);
    $dumpvars(0, apb_if); 
  end

  
endmodule