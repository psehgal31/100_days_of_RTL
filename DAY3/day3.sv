//LFSR

module day3 (
input     wire      clk,
input     wire      reset,

output    wire[3:0] lfsr_o
);
logic [3:0] lfsr_r;
logic [3:0] lfsr_next;

always_ff @( posedge clk or posedge reset ) begin : blockName
    if(reset) begin
        lfsr_r <= 4'hE;
    end else begin
        lfsr_r <= lfsr_next;
    end
end

assign lfsr_next = {lfsr_r[2:0],lfsr_r[1] ^ lfsr_r[3]};

assign lfsr_o = lfsr_r;

endmodule
