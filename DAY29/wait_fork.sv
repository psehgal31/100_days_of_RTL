// Wait fork

module wait_fork();
  
  initial begin
    // Spawn multiple threads using a for loop
    fork
      begin
        for (int i=0; i<8; i++) begin
          fork
            begin
              print(i);
            end
          join_none
        end
        wait fork;
      end
    join
    $display("****After wait work*****");
  end
      
  task print(input int a);
	automatic int rand_delay;
    rand_delay = $urandom_range(1, 10);
    #rand_delay;
    $display("%t Thread[%0d] finished", $time,a);
  endtask
  
  
endmodule
