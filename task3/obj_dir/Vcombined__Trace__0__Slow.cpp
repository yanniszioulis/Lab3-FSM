// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcombined__Syms.h"


VL_ATTR_COLD void Vcombined___024root__trace_init_sub__TOP__0(Vcombined___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+7,"N", false,-1, 15,0);
    tracep->declBus(c+8,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("combined ");
    tracep->declBus(c+9,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+7,"N", false,-1, 15,0);
    tracep->declBus(c+8,"dout", false,-1, 7,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->pushNamePrefix("myclktick ");
    tracep->declBus(c+9,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+7,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+2,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myf1_fsm ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+8,"data_out", false,-1, 7,0);
    tracep->declBus(c+3,"sreg", false,-1, 8,1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcombined___024root__trace_init_top(Vcombined___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root__trace_init_top\n"); );
    // Body
    Vcombined___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcombined___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcombined___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcombined___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcombined___024root__trace_register(Vcombined___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcombined___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcombined___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcombined___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcombined___024root__trace_full_sub_0(Vcombined___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcombined___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root__trace_full_top_0\n"); );
    // Init
    Vcombined___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcombined___024root*>(voidSelf);
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcombined___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcombined___024root__trace_full_sub_0(Vcombined___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcombined__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcombined___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->combined__DOT__tick));
    bufp->fullSData(oldp+2,(vlSelf->combined__DOT__myclktick__DOT__count),16);
    bufp->fullCData(oldp+3,(vlSelf->combined__DOT__myf1_fsm__DOT__sreg),8);
    bufp->fullBit(oldp+4,(vlSelf->clk));
    bufp->fullBit(oldp+5,(vlSelf->rst));
    bufp->fullBit(oldp+6,(vlSelf->en));
    bufp->fullSData(oldp+7,(vlSelf->N),16);
    bufp->fullCData(oldp+8,(vlSelf->dout),8);
    bufp->fullIData(oldp+9,(0x10U),32);
}
