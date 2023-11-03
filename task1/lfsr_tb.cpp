#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vlfsr* top = new Vlfsr;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("lfsr.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T1:LFSR");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation input 
  top->clk = 1;
  top->rst = 0;
  top->en = 1;
  

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    if (simcyc < 2){
        top->rst = 1;
    }
    else{
        top->rst = 0;
    }

    // if(top->data_out > 1){
    //    top->en = 1;
    // }
    // else{
    top->en = vbdFlag(); // i thought i had to make it cycle through every value each time
    // }

    vbdCycle(simcyc);

    vbdHex(2, (int(top->data_out) >> 4) & 0xF);
    vbdHex(1, int(top->data_out) & 0xF); // 2 hex digits needed

    vbdBar(top->data_out & 0xFF); // vbdBar() takes an unsigned 8-bit integer parameter, so data_out must be masked with 0xFF.

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}
