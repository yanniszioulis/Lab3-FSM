module lfsr (
    input   logic           clk,        // input clock
    input   logic           rst,        // reset
    input   logic           en,         // enable
    output  logic   [6:0]   data_out   // output data
);

    logic   [7:1]   sreg;               // shift reg

    always_ff @( posedge clk )
        if (rst)
            sreg <= 7'b1;
        else if (en)
            sreg <= {sreg[6:1], sreg[3] ^ sreg[7]};
    assign data_out = {sreg[7:1]};
endmodule
