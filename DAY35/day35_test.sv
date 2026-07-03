// Test
`ifndef DAY35_TEST
`define DAY35_TEST

`include "INTF.sv"
`include "day35_env.sv"

class day35_test;

    mailbox drv_mx;
    day35_env env;
    
    function new();
        env = new;
        drv_mx = new();
    endfunction
    
    task run();
         env.drv.drv_mx = drv_mx;
        // Test sequence
        fork
            env.run();
        join_none
        gen_stimulus();
    endtask

task gen_stimulus();
    day35_item item;

    // Wait for reset to be deasserted
	@(negedge env.vif.reset);
    @(posedge env.vif.clk);
    for (int i=0; i<512; i++) begin
      $display("%t [TEST] Starting stimulus...", $time);
      // Wait for some time before starting next item
      @(posedge env.vif.clk);
      item = new;
      // Randomize the transaction
      void'(item.randomize());
      // Send the transaction to driver
      drv_mx.put(item);
    end
    // Test passed if we reach here
    $display("TEST PASSED!");
    
  endtask

endclass

`endif