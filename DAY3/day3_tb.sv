module day3_tb;
    logic         clk;
  logic         reset;
  logic [3:0]   lfsr_o;

  day3 LFSR (.*);

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
    @(posedge clk);
    reset <= 1'b0;
    @(posedge clk);
    for (int i=0; i<16; i=i+1) begin
      @(posedge clk);
    end
    $finish();
  end

  // Dump VCD
  initial begin
    $dumpfile("day3.vcd");
    $dumpvars(2, day3_tb);
  end

  endmodule
