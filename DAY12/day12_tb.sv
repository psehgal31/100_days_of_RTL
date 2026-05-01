module day12_tb;
  logic clk;
    logic reset;
    logic [1:0] cmd_i;
    wire psel_o;
    wire penable_o;
    wire [31:0] paddr_o;
    wire pwrite_o;
    wire [31:0] pwdata_o;
    logic pready_i;
    logic [31:0] prdata_i;
    day12 dut (
        .clk(clk),
        .reset(reset),
        .cmd_i(cmd_i),
        .psel_o(psel_o),
        .penable_o(penable_o),
        .paddr_o(paddr_o),
        .pwrite_o(pwrite_o),
        .pwdata_o(pwdata_o),
        .pready_i(pready_i),
        .prdata_i(prdata_i)
    );

    always begin
        clk = 1'b0;
        #5;
        clk = 1'b1;
        #5;
    end

    int wait_cycles;
    initial begin
        // Initialize signals
        pready_i = 1'b0;
        wait_cycles = $urandom_range(1, 10); // Random wait cycles between 1 and 10
        while(wait_cycles > 0) begin
            @(posedge clk);
            wait_cycles--;
        end
        pready_i = 1'b1; // Simulate ready signal after random delay
        @(posedge clk);
       
    end

    initial begin
        reset <= 1'b1;
        cmd_i <= 2'b00; // No command
        prdata_i <= 32'h0; // Sample data to be read
        @(posedge clk);
        reset <= 1'b0; // Deassert reset
        @(posedge clk);
        @(posedge clk);
        for(int i = 0; i < 10; i++) begin
            cmd_i <= i%2 ? 2'b01 : 2'b10; // Send different commands
            prdata_i <= $urandom_range(0, 32'hF); // Change read data for each command
            @(posedge clk);
            // Wait for pready to be asserted
            while (~pready_i | ~psel_o) @(posedge clk);
            @(posedge clk);
        end
        $finish();
    end

    //VCD
    initial begin
        $dumpfile("day12.vcd");
        $dumpvars(0, day12_tb);
    end
endmodule