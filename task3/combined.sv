module combined #(
	parameter WIDTH = 16
)(
  // interface signals
  input  logic             clk,      // clock 
  input  logic             rst,      // reset
  input  logic             en,       // enable signal
  input  logic [WIDTH-1:0] N,     	 // clock divided by N+1
  output logic [7:0] 		   dout      // data out
);

clktick myclktick (
    .clk (clk),
    .rst (rst),
    .en (en),
    .N (N),
    .tick (tick)
);

f1_fsm myf1_fsm(
    .clk (clk),
    .en (tick),
    .rst (rst),
    .data_out (dout)
);

endmodule
