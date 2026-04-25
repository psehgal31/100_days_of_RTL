//Counter

module day6 (
input     wire          clk,
input     wire          reset,
input     wire          load_i,    
input     wire[3:0]     load_val_i,

output    wire[3:0]     count_o    
);  

logic [3:0] count_ff,load_ff;

always_ff @( posedge clk or posedge reset ) begin
    if (reset)
        load_ff <= 4'b0;
    else
        load_ff <= load_i ? load_val_i : load_ff;
end

always_ff @( posedge clk or posedge reset ) begin 
    if (reset)
        count_ff <= 4'b0;
    else
        count_ff <= load_i ? load_val_i : (count_ff == 4'hF) ? load_ff : count_ff + 1;
end

assign count_o = count_ff;

endmodule