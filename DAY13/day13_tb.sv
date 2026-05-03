module day13_tb();
    logic clk;
    logic reset;
    
    logic req_i;
    logic req_rnw_i;
    logic [9:0] req_addr_i;
    logic [31:0] req_wdata_i;
    wire req_ready_o;
    wire [31:0] req_rdata_o;
    
    day13 dut (.*);
    
  logic [9:0] [9:0] addr_list;


    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 100MHz clock

  // Generate stimulus
  initial begin
    reset <= 1'b1;
    req_i <= 1'b0;
    @(posedge clk);
    reset <= 1'b0;
    @(posedge clk);
    for(int txn=0; txn<10; txn++) begin
      // Write 10 random transactions
      req_i <= 1'b1; // Assert request
      req_rnw_i <= 0; // Write operation
      req_addr_i <= $urandom_range(0, 1023); // Random address between 0 and 1023
      addr_list[txn] <= req_addr_i; // Store address for later read
      req_wdata_i <= $urandom_range(0,32'hFFFF);
      // Wait for ready signal
      while(!req_ready_o) @(posedge clk);
      req_i <= 1'b0; // Deassert request
      @(posedge clk);
    end
    for(int txn=0; txn<10; txn++) begin
      // Read back the 10 transactions
      req_i <= 1'b1; // Assert request
      req_rnw_i <= 1; // Read operation
      req_addr_i <= addr_list[txn]; // Use stored address
      req_wdata_i <= $urandom_range(0,32'hFFFF); // Random data for read (not used)
      // Wait for ready signal
      while(!req_ready_o) @(posedge clk);
      req_i <= 1'b0; // Deassert request
      @(posedge clk);
    end
    $finish;
  end

      // Dump VCD
  initial begin
    $dumpfile("day13.vcd");
    $dumpvars(0, day13_tb);
  end

endmodule