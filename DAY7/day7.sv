module day7 (
    input     wire      clk,
    input     wire      reset,

    output    wire      empty_o, 
    input     wire[3:0] parallel_i, 
    
    output    wire      serial_o,  
    output    wire      valid_o     
);

logic [3:0] ff,ff_next;
logic [2:0] count,count_next;

always_ff @ (posedge clk or posedge reset) begin
    if (reset) begin
        ff <= 4'h0;
        count <= 3'h0;
    end else begin
        ff <= ff_next;
        count <= count_next;
    end
end

assign valid_o = |count; // valid when count is not zero
assign serial_o = ff[0];
assign empty_o = (count == 3'h0);
assign ff_next = (empty_o) ? parallel_i : {1'b0, ff[3:1]};
assign count_next = (count == 3'h4) ? 3'h0 : count + 3'h1;
endmodule