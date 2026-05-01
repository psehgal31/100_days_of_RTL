//APB Master interface with a simple state machine to handle read and write operations based on cmd_i input.
// APB Master

// TB should drive a cmd_i input decoded as:
//  - 2'b00 - No-op
//  - 2'b01 - Read from address 0xDEAD_CAFE
//  - 2'b10 - Increment the previously read data and store it to 0xDEAD_CAFE


  input       wire        clk,
  input       wire        reset,
  input       wire[31:0]  prdata_i
  input       wire[1:0]   cmd_i,
  input       wire        pready_i,

  output      wire        psel_o,
  output      wire        penable_o,
  output      wire[31:0]  paddr_o,
  output      wire        pwrite_o,
  output      wire[31:0]  pwdata_o,
  

"cmd_i": will be driven by the testbench to simulate different APB transactions. The APB Master will respond to these commands by performing the appropriate read or write operations on the APB bus. The state machine will ensure that the correct sequence of signals is generated for each command, and the testbench will verify that the master behaves as expected under various conditions.

pready_i: will be driven by the testbench to simulate the ready signal from the APB slave. The APB Master will wait for this signal to be asserted before proceeding with the next step in the transaction, ensuring that it correctly handles the timing of the APB protocol. The testbench can introduce random delays in asserting pready_i to test the master's ability to handle variable response times from the slave.


prdata_i: will be driven by the testbench to simulate the data read from the APB slave during a read transaction. The APB Master will use this data to perform operations such as incrementing it and writing it back to the slave. The testbench can provide different values for prdata_i to verify that the master correctly processes the read data and performs the expected operations based on the commands received through cmd_i.

There are three main states in the APB Master state machine: IDELE, SETUP, and ACCESS.



READ APB spec for more info.
