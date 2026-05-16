interface INTF(input logic clk,input logic reset);

logic psel;
logic penable;  
logic [31:0] paddr;
logic pwrite;   
logic [31:0] pwdata;
logic [31:0] prdata;
logic pready;
    

modport apb_slave (
  input psel,
  input penable,
  input paddr,
  input pwrite,
  input pwdata,
  output prdata,
  output pready
);

modport apb_master (
  output psel,
  output penable,
  output paddr,
  output pwrite,
  output pwdata,
  input prdata,
  input pready
);
endinterface 