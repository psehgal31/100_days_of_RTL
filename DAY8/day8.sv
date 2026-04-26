//sequence detector , sequence: 1110_1101_1011
module day8 (

input     wire        clk,
input     wire        reset,
input     wire        x_i,    //-> Serial input

output    wire        det_o   //-> Output asserted when sequence is detected
);

logic [11:0] shift_reg,next_shift; // Shift register to hold the last 12 bits of input
always_ff @( posedge clk or posedge reset ) begin : blockName
    if(reset) begin
        shift_reg <= 12'b0;
    end else begin
        shift_reg <= next_shift;
    end
end


assign next_shift = {shift_reg[10:0], x_i};

assign det_o = (shift_reg == 12'b111011011011) ? 1'b1 : 1'b0; // Example sequence detection
endmodule