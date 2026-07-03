interface day35_if (
	input	wire		clk,
  	input	wire		reset
);

	//logic      d;

	logic      q_norst;
	logic      q_syncrst;
	logic      q_asyncrst;
    logic d = 0;                // <--- initialize to 0
  // Clocking block
  clocking cb @(posedge clk);
    output #1step d;
    input  #0 q_norst;
    input  #0 q_syncrst;
    input  #0 q_asyncrst;
  endclocking

endinterface