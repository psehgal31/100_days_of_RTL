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
  
  task run ();
    // Drive APB Slave via virtual intf
    vif.psel = 0;
    vif.penable = 0;
    
    $display("Starting stimulus now...");
    repeat(5) @(posedge vif.clk);
    
    forever begin
      vif.psel 	= 1; // APB Setup
      @(posedge vif.clk);
      vif.penable	= 1'b1; // APB Access
      vif.paddr[9:0]= 10'h3EC;
      vif.pwrite	= $urandom_range(0, 10)%2;
      vif.pwdata	= $urandom_range(0, 1023);
      // Wait for pready
      wait (vif.pready);
      @(posedge vif.clk);
      vif.psel = 0;
      vif.penable = 0;
      repeat (2) @(posedge vif.clk);
    end
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
  slave_main apb_slave_inst (
    .clk		(clk),
    .reset		(reset),
    .apb_if		(apb_if.apb_slave)
  );

    // Create object and pass interface handle to virtual interface
  initial begin
    DRIVER = new(apb_if.apb_master);
    DRIVER.run();
  end
  
  // Generate reset
  initial begin
    reset <= 1'b1;
    repeat (3) @(posedge clk);
    reset <= 1'b0;
    repeat (150) @(posedge clk);
    $finish();
  end

  // Dump VCD
  initial begin
    $dumpfile("day19.vcd");
    $dumpvars(0, day19_tb);
    $dumpvars(0, apb_if); 
  end

  
endmodule