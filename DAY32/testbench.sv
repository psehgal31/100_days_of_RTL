`include "day1_test.sv"
module testbench_day32();
  
  // Instantiate the interface
  day1_if intf();
  
  // Instantiate the RTL
  mux2to1 DAY1 (
    .a_i		(intf.a),
    .b_i		(intf.b),
    .sel_i		(intf.sel),
    .y_o		(intf.y)
  );
  
  // Create the test class
  day1_test test;
  
  initial begin
    test = new;
    test.env.vif = intf;
    test.run();
    $finish();
  end
  

endmodule