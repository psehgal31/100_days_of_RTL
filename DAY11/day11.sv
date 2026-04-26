module day11 (
  input     wire        clk,
  input     wire        reset,

  input     wire[3:0]   req_i,
  output    logic[3:0]  gnt_o
);

logic [3:0] next_mask, mask_q;

always_ff @( posedge clk or posedge reset ) begin : blockName
    if(reset)
        mask_q <= 'hF;
    else
        mask_q <= next_mask;
end



always_comb begin
     next_mask = mask_q;
    if(gnt_o[0]) next_mask = 4'b1110;
    else if(gnt_o[1]) next_mask = 4'b1100;
    else if(gnt_o[2]) next_mask = 4'b1000;
    else if(gnt_o[3]) next_mask = 4'b0000;
end

logic [3:0] masked_req;
assign masked_req = req_i & mask_q;

logic [3:0] mask_grant,raw_grant;
  // Generate grants for req and masked req
  day10 #(4) maskedGnt (.req_i (masked_req), .gnt_o (mask_grant));
  day10 #(4) rawGnt    (.req_i (req_i),    .gnt_o (raw_grant));

assign gnt_o = |masked_req ? mask_grant : raw_grant;

endmodule

module day10 #(
  parameter NUM_PORTS = 4
)(
    input       wire[NUM_PORTS-1:0] req_i,
    output      wire[NUM_PORTS-1:0] gnt_o   // One-hot grant signal
);

assign gnt_o[0] = req_i[0]; // Highest priority

generate
  for (genvar i=1; i<NUM_PORTS; i=i+1) begin
    assign gnt_o[i]=req_i[i] & ~(|gnt_o[i-1:0]);
  end
endgenerate


endmodule