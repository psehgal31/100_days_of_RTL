// Monitor

`ifndef DAY35_MONITOR
`define DAY35_MONITOR

`include "day35_item.sv"
class day35_monitor;
  
  // Item
  day35_item item;
  // Virtual interface
  virtual day35_if vif;
  // Mailbox to send transactions to scoreboard
  mailbox sb_mx;

  task run();
    $display("%t [MONITOR] Starting now....", $time);

    forever begin
      
      // Wait for some time before sampling from the virtual interface
      @(posedge vif.clk);
      item = new;
      // Read the signals - d is testbench-driven (read directly), outputs use clocking block
      item.d    		= vif.d;
      item.q_norst  	= vif.cb.q_norst;
      item.q_syncrst	= vif.cb.q_syncrst;
      item.q_asyncrst	= vif.cb.q_asyncrst;
      $display("%t [MONITOR] sampled: d=%b q_norst=%b q_syncrst=%b q_asyncrst=%b reset=%b",
         $time, item.d, item.q_norst, item.q_syncrst, item.q_asyncrst, vif.reset);
      // Print the item
      item.print("MONITOR");
      // Put the item in the mailbox
      if (!vif.reset) begin
        sb_mx.put(item);
      end
    end

  endtask

endclass

`endif