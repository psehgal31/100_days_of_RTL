module day13 (
  input       wire        clk,
  input       wire        reset,

  input       wire        req_i,       // -> Valid request input remains asserted until ready is seen
  input       wire        req_rnw_i,    // -> Read-not-write (1-read, 0-write)
  input       wire[3:0]   req_addr_i,   // -> 4-bit Memory address
  input       wire[31:0]  req_wdata_i,  // -> 32-bit write data
  output      wire        req_ready_o,  // -> Ready output when request accepted
  output      wire[31:0]  req_rdata_o   // -> Read data from memory
);

  // Memory array
`ifdef FORMAL
  logic [31:0] mem[15:0];
`else
  logic [15:0][31:0] mem;
`endif

  logic mem_rd,mem_wr; // Internal signals for read/write operations
  logic [3:0] count_ff;    // Counter for tracking operations
  logic[3:0] nxt_count;    // Next state of the counter
  logic req_rising_edge; // Signal to detect rising edge of req_i
  logic [3:0] lfsr_val; // LFSR value for random load generation
  logic [3:0] count;


  assign mem_rd = req_i && req_rnw_i; // Read operation when req_i is high and req_rnw_i is 1
  assign mem_wr = req_i && !req_rnw_i; // Write operation when req_i is high and req_rnw_i is 0

   // Detect rising edge of req_i
  // Detect a rising edge on the req_i
  day3 DAY3 (
    .clk            (clk),
    .reset          (reset),
    .a_i            (req_i),
    .rising_edge_o  (req_rising_edge),
    .falling_edge_o (/* Not needed */)
  );

 // Generate a random load value
  day7 DAY7 (
    .clk            (clk),
    .reset          (reset),
    .lfsr_o         (lfsr_val)
  );
  always_ff @(posedge clk or posedge reset)
    if (reset)
      count_ff <= 4'h0;
    else
      count_ff <= nxt_count;

assign nxt_count = req_rising_edge ? lfsr_val : count_ff + 4'h1; // Increment counter on read/write
assign count = count_ff; // Output current count value

  // Handle memory read/write operations
  always_ff @(posedge clk) begin
    if (mem_wr & ~|count) // Write to memory on write operation when count is zero
      mem[req_addr_i] <= req_wdata_i; // Write data to memory on write operation
  end

  assign req_ready_o = ~|count; // Ready when a new request is accepted
  assign req_rdata_o = mem[req_addr_i] & {32{mem_rd}}; // Output read data from memory


endmodule


module day3 (
  input     wire    clk,
  input     wire    reset,

  input     wire    a_i,

  output    wire    rising_edge_o,
  output    wire    falling_edge_o
);

  logic a_ff;

  always_ff @(posedge clk or posedge reset)
    if (reset)
      a_ff <= 1'b0;
    else
      a_ff <= a_i;

  // Rising edge when delayed signal is 0 but current is 1
  assign rising_edge_o = ~a_ff & a_i;

  // Falling edge when delayed signal is 1 but current is 0
  assign falling_edge_o = a_ff & ~a_i;

endmodule

// LFSR
module day7 (
  input     wire      clk,
  input     wire      reset,

  output    wire[3:0] lfsr_o
);

  logic [3:0] lfsr_ff;
  logic [3:0] nxt_lfsr;

  always_ff @(posedge clk or posedge reset)
    if (reset)
      lfsr_ff <= 4'hE;
    else
      lfsr_ff <= nxt_lfsr;

  assign nxt_lfsr = {lfsr_ff[2:0], lfsr_ff[1] ^ lfsr_ff[3]};

  assign lfsr_o = lfsr_ff;

endmodule