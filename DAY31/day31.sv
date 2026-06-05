// A simple DPI example

module day31 ();
  
  import "DPI-C" function int factorial(int);
  
  initial begin
    for (int i=1; i<11; i++) begin
      $display("Factorial is %.8d", factorial(i));
    end
  end
  
endmodule