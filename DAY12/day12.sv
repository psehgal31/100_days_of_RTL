//APB Master interface with a simple state machine to handle read and write operations based on cmd_i input.
// APB Master

// TB should drive a cmd_i input decoded as:
//  - 2'b00 - No-op
//  - 2'b01 - Read from address 0xDEAD_CAFE
//  - 2'b10 - Increment the previously read data and store it to 0xDEAD_CAFE

module day12 (
  input       wire        clk,
  input       wire        reset,

  input       wire[1:0]   cmd_i,

  output      wire        psel_o,
  output      wire        penable_o,
  output      wire[31:0]  paddr_o,
  output      wire        pwrite_o,
  output      wire[31:0]  pwdata_o,
  input       wire        pready_i,
  input       wire[31:0]  prdata_i
);

typedef enum logic [1:0] {IDLE=2'b00,SETUP=2'b01,ACCESS=2'b10} apb_state_t;

apb_state_t nxt_state, state_q;

logic [31:0] rdata_q;

always_ff @( posedge clk or posedge reset ) begin 
    if(reset) begin
        state_q <= IDLE;
        rdata_q <= 32'b0;
    end else begin
        state_q <= nxt_state;
        if(state_q == ACCESS && pready_i)
            rdata_q <= prdata_i; // Capture read data when ready
    end
end

always_comb begin 
    nxt_state = state_q;
    case(state_q)
    IDLE: begin
        if(cmd_i != 2'b00) // If there's a command, move to SETUP
            nxt_state = SETUP;
    end
    SETUP: begin
        nxt_state = ACCESS; // Move to ACCESS in the next cycle
    end
    ACCESS: begin
        if(pready_i) // Once the transaction is ready, go back to IDLE
            nxt_state = IDLE;
    end
endcase
end


 
  assign   psel_o = (state_q == SETUP || state_q == ACCESS);
  assign   penable_o = (state_q == ACCESS);
  assign   paddr_o = 32'hDEAD_CAFE;
  assign   pwrite_o = cmd_i[1];
  assign   pwdata_o = rdata_q + 32'h1; // For write operations, send incremented data


endmodule