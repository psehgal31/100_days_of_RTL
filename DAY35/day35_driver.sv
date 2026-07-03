// Driver

`ifndef DAY35_DRIVER
`define DAY35_DRIVER

`include "day35_item.sv"
class day35_driver;

  // Virtual interface
  virtual day35_if vif;

  // Mailbox to get the randomized transaction
  mailbox drv_mx;

  // Task to drive transactions
  task run();
    $display("%t [DRIVER] Starting now...", $time);
	vif.cb.d <= '0;
    // Always try to send transaction to the interface
    forever begin
      // Item object
      day35_item item;
      // Wait for some time before sending the next transaction
      @(posedge vif.clk);

      $display("%t [DRIVER] Waiting for the item", $time);
      drv_mx.get(item);
      // Print the received item
      item.print("DRIVER");
      // Drive the transaction
      // Use the clocking block output so DUT sees stable data at next posedge
      @(posedge vif.clk);
      vif.cb.d   <= item.d;
      $display("%t [DRIVER] drove d <= %b (item.d=%b)", $time, vif.d, item.d);
    end
  endtask

endclass

`endif