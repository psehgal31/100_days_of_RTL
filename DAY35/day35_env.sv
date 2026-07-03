`ifndef DAY35_ENV
`define DAY35_ENV

`include "day35_driver.sv"
`include "day35_monitor.sv"
`include "day35_sb.sv"

class day35_env;

  // Subcomponents
  day35_driver  drv;
  day35_monitor mon;
  day35_sb      sb;

  // Mailboxes (owned by env)
  mailbox drv_mx;
  mailbox sb_mx;

  // Virtual interface handle (set by testbench)
  virtual day35_if vif;

  // Constructor: create objects and mailboxes, wire mailboxes to components
  function new();
    // create subcomponents
    drv = new;
    mon = new;
    sb  = new;

    // create mailboxes
    drv_mx = new();
    sb_mx  = new();

    // connect mailboxes to components
    drv.drv_mx = drv_mx;   // driver receives transactions from test via this mailbox
    mon.sb_mx  = sb_mx;    // monitor will put items here
    sb.sb_mx   = sb_mx;    // scoreboard will get items from same mailbox
  endfunction

  // Helper to attach the interface to all subcomponents
  function void set_vif(virtual day35_if vif_h);
    vif = vif_h;
    // propagate to subcomponents
    drv.vif = vif;
    mon.vif = vif;
    sb.vif  = vif;
  endfunction

  // Start all subcomponent run tasks
    task run();
    if (started) begin
      $display("%t [ENV] run() already started; ignoring duplicate call.", $time);
      return;
    end
    started = 1;

    // start driver, monitor and scoreboard in parallel
    fork
      drv.run();
      mon.run();
      sb.run();
    join_none
  endtask

endclass

`endif
