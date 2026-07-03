`include "day35_test.sv"
module testbench;

    logic clk;
    logic reset;

    //Clock generation
     // Generate clock
    always begin
      clk = 1'b0;
      #5;
      clk = 1'b1;
      #5;
    end

    day35_if intf(clk, reset);
    DFF dut (
        .clk(clk),
        .reset(reset),
        .d_i(intf.d),
        .q_norst_o(intf.q_norst),
        .q_syncrst_o(intf.q_syncrst),
        .q_asyncrst_o(intf.q_asyncrst)
    );

     // Reset sequence
  initial begin
    reset = 1'b1;
    repeat(3) @(posedge clk);
    reset = 1'b0;
  end

    day35_test test;
  
  initial begin
    test = new;
      // Attach the interface instance to the environment and its subcomponents
  // Attach the interface instance to the environment and its subcomponents
    test.env.set_vif(intf);

  // Let test.run() start env.run() internally — do NOT call env.run() here
    test.run();
    $finish();
  end

endmodule