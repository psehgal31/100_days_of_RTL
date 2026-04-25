module day5_tb;
  localparam WIDTH = 5;
  logic [WIDTH-1:0] bin_i;
    logic [WIDTH-1:0] gray_o;

  day5 #(WIDTH) DAY5 (.*);

  // Stimulus
  initial begin
    for (int i=0; i<16; i=i+1) begin
      bin_i <= $random % (2 ** WIDTH);
      #10;
    end
    $finish();
  end

  // Dump VCD
  initial begin
    $dumpfile("day5.vcd");
    $dumpvars(2, day5_tb);
  end

  endmodule