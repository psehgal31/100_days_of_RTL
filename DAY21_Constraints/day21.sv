class day21 #(parameter N = 4);

    randc bit [N-1:0] pattern;
    bit [N-1:0] num_ones;

    function void pre_randomize();
        if(num_ones < N) begin
            num_ones++;
        end else begin
            num_ones = 1;
        end
    endfunction


    constraint gen_pattern {
        foreach (pattern[i]){
            if(i < num_ones) begin
                pattern[N-1-i] == 1;
            end else begin
                pattern[N-1-i] == 0;
            end
        }
    };


endclass

module day21_tb();

  // Instantiate the DUT
  day21 #(.N(8)) byte_pattern;
  day21 #(.N(32)) word_pattern;

  
initial begin
    byte_pattern=new();
    word_pattern=new();
    repeat(8) begin
        byte_pattern.randomize();
        $display("Byte pattern: %b", byte_pattern.pattern);
    end
    repeat(32) begin
        word_pattern.randomize();
        $display("Word pattern: %b", word_pattern.pattern);
    end
  end

  endmodule