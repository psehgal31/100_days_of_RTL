module day10_tb;
    parameter NUM_PORTS=8;
    logic [NUM_PORTS-1:0] req_i;
    wire [NUM_PORTS-1:0] gnt_o;

    day10 #(NUM_PORTS) day10_inst (.*);

    initial begin
    for (int i=0; i<32; i=i+1) begin
      req_i = $urandom_range(0, 2**NUM_PORTS-1);
      #5;
    end
    end


     // Dump VCD
    initial begin
        $dumpfile("day10.vcd");
        $dumpvars(0, day10_tb);
    end

endmodule