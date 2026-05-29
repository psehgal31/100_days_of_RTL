class Driver;
  
  rand bit[15:0] req_addr;
  rand bit[7:0]  req_wdata;
  
endclass

module Assoc_mem_tb();
  
  logic        clk;
  logic        reset;
  logic        req_i;
  logic        req_rnw_i;
  logic[15:0]  req_addr_i;
  logic[7:0]   req_wdata_i;
  logic        req_ready_o;
  logic[7:0]   req_rdata_o;
  
  Driver driver_inst;

  // Decalare memory as an associative array
  byte mem_tb[bit[15:0]];
  
  //Dynamic Queue for Addresses
  bit [15:0] addr_list[$];
  
  // Instatiate the RTL
  mem_intf DAY17 (.*);
  
  
  // Generate the clock
  always begin
    clk = 1'b1;
    #5;
    clk = 1'b0;
    #5;
  end
  
  // Generate stimulus
  initial begin
    driver_inst = new();
    reset <= 1'b1;
    req_i <= 1'b0;
    @(posedge clk);
    reset <= 1'b0;
    @(posedge clk);
    for (int txn=0; txn<10; txn++) begin
      @(posedge clk);
      // Write 10 transactions
      req_i       <= 1'b1;
      req_rnw_i   <= 0;
      void'(driver_inst.randomize());
      req_addr_i  <= driver_inst.req_addr;
      req_wdata_i <= driver_inst.req_wdata;
      // Update TB memory
      mem_tb[driver_inst.req_addr] = driver_inst.req_wdata;
      addr_list.push_back(driver_inst.req_addr);
      // Wait for ready
      while (~req_ready_o) begin
        @(posedge clk);
      end
      req_i <= 1'b0;
    end
    repeat(3) @(posedge clk);
    for (int txn=0; txn<10; txn++) begin
      // Read 10 transactions
      req_i       <= 1'b1;
      req_rnw_i   <= 1;
      addr_list.shuffle();
      void'(driver_inst.randomize());
      req_addr_i  <= addr_list[0];
      req_wdata_i <= driver_inst.req_wdata;
      // Wait for ready
      while (~req_ready_o) begin
        @(posedge clk);
      end
      // Check rdata
      if (req_rdata_o !== mem_tb[addr_list[0]]) begin
        $fatal(1, "Read data doesn't match. Expected: 0x%8x Got: 0x%8x", mem_tb[addr_list[0]], req_rdata_o);
      end
      req_i <= 1'b0;
      @(posedge clk);
    end
    $display("TEST PASSED");
    $finish();
  end

  
endmodule