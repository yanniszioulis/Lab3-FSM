module f1_fsm (
    input   logic           clk,        // input clock
    input   logic           rst,        // reset
    input   logic           en,         // enable
    output  logic   [7:0]   data_out   // output data
);

    logic   [8:1]   sreg;               // state register

    always_ff @( posedge clk )
        if (rst)
            sreg <= 8'b0;
        else if (en)
            if (sreg == 8'hFF)
                sreg <= 8'b0;
            else
                sreg <= {sreg[7:1], 1'b1}; 
    assign data_out = {sreg[8:1]};
endmodule
