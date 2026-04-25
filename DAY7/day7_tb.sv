module day7_tb;
  logic          clk;
  logic          reset;
  logic[3:0]     parallel_i;

  logic          empty_o;
  logic          serial_o;
  logic          valid_o;

  day7 DAY7 (.*);

  // Clock
  always begin
    clk = 1'b1;
    #5;
    clk = 1'b0;
    #5;
  end

  initial begin
    reset <= 1'b1;
    parallel_i <= 4'h0;
    @(negedge clk);
    reset <= 1'b0;
    @(posedge clk);
    for (int i=0; i<32; i=i+1) begin
      parallel_i <= $urandom_range(0, 4'hF); // random value between 0 and 15
      @(posedge clk);
    end
    $finish();
  end

  initial begin
    $dumpfile("day7.vcd");
    $dumpvars(2, day7_tb);
  end

  endmodule