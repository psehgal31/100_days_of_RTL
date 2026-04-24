module day4_tb ();
    localparam BIN_W = 4;
    localparam ONE_HOT_W = 16;
    logic [BIN_W-1:0] bin_i;
    logic [ONE_HOT_W-1:0] one_hot_o;

    day4 #(
        .BIN_W(BIN_W),
        .ONE_HOT_W(ONE_HOT_W)
    ) day4_inst (.*);

    // Stimulus
    initial begin
        for (int i=0; i<32; i=i+1) begin
            bin_i <= $urandom_range(0, 4'hF); // Generate random binary input
            #5;
    end
    $finish();
  end

  initial begin
    $dumpfile("day4.vcd");
    $dumpvars(2, day4_tb);
  end


endmodule