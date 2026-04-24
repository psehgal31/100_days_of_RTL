module day2_tb;
    logic         clk;
  logic         reset;
  logic         x_i;
  logic [3:0]   sr_o;

  day2 DAY2 (.*);

  // generate clock
  always begin
    clk = 1'b1;
    #5;
    clk = 1'b0;
    #5;
  end

  // Stimulus
  initial begin
    reset <= 1'b1;
    x_i <= 1'b0;
    @(posedge clk);
    reset <= 1'b0;
    @(posedge clk);
    for (int i=0; i<16; i=i+1) begin
      x_i <= $random%2;
      @(posedge clk);
    end
    $finish();
  end

  // Dump VCD
  initial begin
    $dumpfile("day2.vcd");
    $dumpvars(2, day2_tb);
  end


endmodule