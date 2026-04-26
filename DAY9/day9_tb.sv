module day9_tb;

    logic [3:0] a_i;
    logic [3:0] sel_i;
    wire y_ter_o;
    wire y_case_o;
    wire y_ifelse_o;
    wire y_loop_o;
    wire y_aor_o;
    day9 day9 (*);

     // Dump VCD
    initial begin
        $dumpfile("day9.vcd");
        $dumpvars(2, day9_tb);
    end

    initial begin
        a_i = 4'b1010;
        sel_i = 4'b0001; #10;
        sel_i = 4'b0010; #10;
        sel_i = 4'b0100; #10;
        sel_i = 4'b1000; #10;
        $finish();
    end
    
endmodule