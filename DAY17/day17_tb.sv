// Construct the class in TB

module day17_tb();

  day17 DAY17;

  initial begin
    DAY17 = new();
    DAY17.print_hello();
    $finish();
  end

endmodule