// Virtual interface

class driver;
  
  rand logic [31:0] paddr;
  rand logic pwrite;
  rand logic [31:0] pwdata;

  virtual INTF.apb_master vif;

  function new(virtual INTF.apb_master vif);
    this.vif = vif;
  endfunction

   logic[31:0] addrQ[$];

    task run ();
    // Drive APB Slave via virtual intf
    vif.psel = 1'b0;
    vif.penable = 1'b0;
    
    $display("Starting stimulus now...");
    repeat(5) @(posedge vif.clk);
    
    forever begin
      // Randomise paddr, pwdata and pwrite for every transaction
      void'(randomize(pwrite));
      void'(randomize(pwdata));
      void'(randomize(paddr));
      // First access should always be a write to avoid X-prop
      if (addrQ.size() == 0) begin
        pwrite = 1;
      end else begin
        // Use random address for a write but pick one from queue for a read
        addrQ.shuffle();
        if (~pwrite) begin
          paddr = addrQ[0];
        end
      end
      // Push paddr to the queue
      addrQ.push_back(paddr);
      vif.psel 		= 1'b1; // APB Setup
      @(posedge vif.clk);
      vif.penable	= 1'b1; // APB Access
      vif.paddr[9:0]= paddr;
      vif.pwrite	= pwrite;
      vif.pwdata	= pwdata;
      // Wait for pready
      wait (vif.pready);
      @(posedge vif.clk);
      vif.psel = 1'b0;
      vif.penable = 1'b0;
      repeat (2) @(posedge vif.clk);
    end
  endtask

endclass

module tb ();
  
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
    reset = 1'b1;
    repeat (3) @(posedge clk);
    reset = 1'b0;
    repeat (150) @(posedge clk);
    $finish();
  end

  // Dump VCD
  initial begin
    $dumpfile("day20.vcd");
    $dumpvars(0, tb);
   
  end

endmodule