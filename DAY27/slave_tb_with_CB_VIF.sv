// Clocking blocks
// Virtual Interface

class DRIVER;
  
  //virtual day23 vif;
  virtual INTF_APB vif;

  function new(virtual INTF_APB vif);
    this.vif = vif;
  endfunction
  
  task run ();
    // Drive APB Slave via virtual intf
    vif.cb.psel <= 1'b0;
    vif.cb.penable <= 1'b0;
    
    $display("Starting stimulus now...");
    repeat(5) @(posedge vif.clk);
    
    forever begin
      vif.cb.psel 		<= 1'b1; // APB Setup
      @(posedge vif.clk);
      vif.cb.penable	<= 1'b1; // APB Access
      vif.cb.paddr[9:0]<= 10'h3EC;
      vif.cb.pwrite	<= $urandom_range(0, 10)%2;
      vif.cb.pwdata	<= $urandom_range(0, 1023);
      // Wait for pready
      wait (vif.cb.pready);
      @(posedge vif.clk);
      vif.cb.psel <= 1'b0;
      vif.cb.penable <= 1'b0;
      repeat (2) @(posedge vif.clk);
    end
  endtask
  
  // Task to check the output
  task check ();
    
    bit[31:0] last_wdata;
    $display("Starting checker now...");
    
    forever begin
      // Capture the write data on a succesful write
      if (vif.penable & vif.cb.pready & vif.pwrite) begin
        last_wdata = vif.pwdata;
      end
      // Check read data against the last written data
      if (vif.penable & vif.cb.pready & ~vif.pwrite) begin
        if (last_wdata !== vif.cb.prdata) begin
          $display("%t Last write data doesn't match. Expected: 0x%8x Got: 0x%8x", $time, last_wdata, vif.cb.prdata);
        end
      end
      @(posedge vif.clk);
    end
    
  endtask
  
endclass

module driver_tb ();
  
  logic		clk;
  logic		reset;
  
  DRIVER driver_inst;
  
  // Instantiate the interface
  INTF_APB apb_if (
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
    driver_inst = new(apb_if);
    fork
      driver_inst.run();
      driver_inst.check();
    join
  end
  
  
  // Generate clock
  always begin
    clk = 1'b0;
    #5;
    clk = 1'b1;
    #5;
  end
  
  // Generate reset
  initial begin
    reset <= 1'b1;
    repeat (3) @(posedge clk);
    reset <= 1'b0;
    repeat (150) @(posedge clk);
    $finish();
  end



  
endmodule
