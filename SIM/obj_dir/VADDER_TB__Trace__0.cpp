// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VADDER_TB__Syms.h"


void VADDER_TB___024root__trace_chg_0_sub_0(VADDER_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VADDER_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_chg_0\n"); );
    // Init
    VADDER_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VADDER_TB___024root*>(voidSelf);
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VADDER_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VADDER_TB___024root__trace_chg_0_sub_0(VADDER_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->ADDER_TB__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelf->ADDER_TB__DOT__b),32);
        bufp->chgBit(oldp+2,((vlSelf->ADDER_TB__DOT__a 
                              >> 0x1fU)));
        bufp->chgBit(oldp+3,((vlSelf->ADDER_TB__DOT__b 
                              >> 0x1fU)));
        bufp->chgCData(oldp+4,((0xffU & (vlSelf->ADDER_TB__DOT__a 
                                         >> 0x17U))),8);
        bufp->chgCData(oldp+5,((0xffU & (vlSelf->ADDER_TB__DOT__b 
                                         >> 0x17U))),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+6,(vlSelf->ADDER_TB__DOT__uut__DOT__MAN_A),24);
        bufp->chgIData(oldp+7,(vlSelf->ADDER_TB__DOT__uut__DOT__MAN_B),24);
        bufp->chgCData(oldp+8,(vlSelf->ADDER_TB__DOT__uut__DOT__EXP_D),8);
        bufp->chgIData(oldp+9,(vlSelf->ADDER_TB__DOT__uut__DOT__AL_MA),24);
        bufp->chgIData(oldp+10,(vlSelf->ADDER_TB__DOT__uut__DOT__AL_MB),24);
        bufp->chgCData(oldp+11,(vlSelf->ADDER_TB__DOT__uut__DOT__L_EXP),8);
        bufp->chgIData(oldp+12,(vlSelf->ADDER_TB__DOT__uut__DOT__MAN_S),25);
        bufp->chgIData(oldp+13,(((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                                  ? vlSelf->ADDER_TB__DOT__uut__DOT__AL_MA
                                  : vlSelf->ADDER_TB__DOT__uut__DOT__AL_MB)),25);
        bufp->chgIData(oldp+14,(((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                                  ? vlSelf->ADDER_TB__DOT__uut__DOT__AL_MB
                                  : vlSelf->ADDER_TB__DOT__uut__DOT__AL_MA)),25);
        bufp->chgCData(oldp+15,(vlSelf->ADDER_TB__DOT__uut__DOT__R_EXP),8);
        bufp->chgIData(oldp+16,(vlSelf->ADDER_TB__DOT__uut__DOT__R_MAN),24);
        bufp->chgIData(oldp+17,(vlSelf->ADDER_TB__DOT__uut__DOT__S_COU),32);
    }
    bufp->chgIData(oldp+18,(((0U == (0x7fffffffU & vlSelf->ADDER_TB__DOT__a))
                              ? vlSelf->ADDER_TB__DOT__b
                              : ((0U == (0x7fffffffU 
                                         & vlSelf->ADDER_TB__DOT__b))
                                  ? vlSelf->ADDER_TB__DOT__a
                                  : ((((0U == vlSelf->ADDER_TB__DOT__uut__DOT__MAN_S)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                                                    ? 
                                                   (vlSelf->ADDER_TB__DOT__a 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelf->ADDER_TB__DOT__b 
                                                    >> 0x1fU)))) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->ADDER_TB__DOT__uut__DOT__R_EXP) 
                                                    << 0x17U) 
                                                   | (0x7fffffU 
                                                      & vlSelf->ADDER_TB__DOT__uut__DOT__R_MAN)))))),32);
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                                  ? (vlSelf->ADDER_TB__DOT__a 
                                     >> 0x1fU) : (vlSelf->ADDER_TB__DOT__b 
                                                  >> 0x1fU)))));
    bufp->chgBit(oldp+20,(((0U == vlSelf->ADDER_TB__DOT__uut__DOT__MAN_S)
                            ? 0U : (1U & ((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                                           ? (vlSelf->ADDER_TB__DOT__a 
                                              >> 0x1fU)
                                           : (vlSelf->ADDER_TB__DOT__b 
                                              >> 0x1fU))))));
}

void VADDER_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_cleanup\n"); );
    // Init
    VADDER_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VADDER_TB___024root*>(voidSelf);
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
