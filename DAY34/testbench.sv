`include "day14_test.sv"
module day34_tb();
  
  // Instantiate the interface
  day14_if intf();
  
  // Instantiate the RTL
  FP_Arbiter #(.NUM_PORTS(4)) DAY14 (
    .req_i		(intf.req),
    .gnt_o		(intf.gnt)
  );
  
  // Create the test class
  day14_test test;
  
  initial begin
    test = new;
    test.env.vif = intf;
    test.run();
    $finish();
  end
  

  
endmodule