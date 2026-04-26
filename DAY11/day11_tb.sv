module day11_tb;

logic clk, reset;
logic [3:0] req_i;
logic [3:0] gnt_o;

day11 dut (
  .clk(clk),
  .reset(reset),
  .req_i(req_i),
  .gnt_o(gnt_o)
);

always begin
    clk = 1;
    #5;
    clk = 0;
    #5;
end

initial begin
    reset <= 1;
    req_i <= 4'b0000;
    @( posedge clk );
    reset <= 0;
    @( posedge clk );
    @( posedge clk );
    for(int i=0; i<32;i++) begin
        req_i <= $urandom_range(0,4'hF);
        @( posedge clk );
    end

    $finish();
end


//VCD dump
initial begin
    $dumpfile("day11.vcd");
    $dumpvars(0, day11_tb);
end

endmodule