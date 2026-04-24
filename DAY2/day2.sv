//SIPO

module day2 (
input     wire        clk,
input     wire        reset,
input     wire        x_i,

output    wire[3:0]   sr_o);

logic [3:0] ff,ff_nxt;

always_ff @( posedge clk or posedge reset ) begin : blockName
    if (reset) begin
        ff <= 4'b0000;
    end else begin
        ff <= ff_nxt;
    end 
end

assign ff_nxt = {ff[2:0], x_i}; 
assign sr_o = ff;  

endmodule