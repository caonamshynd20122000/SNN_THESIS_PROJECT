// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VADDER_TB__Syms.h"


VL_ATTR_COLD void VADDER_TB___024root__trace_init_sub__TOP__0(VADDER_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ADDER_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"SUM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"SIGN_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"SIGB_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"EXP_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"EXP_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"MAN_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+8,0,"MAN_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+9,0,"EXP_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"AL_MA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+11,0,"AL_MB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+12,0,"L_EXP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"MAN_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+14,0,"ABS_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+15,0,"ABS_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+20,0,"OP_SI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"R_EXP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"R_MAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+21,0,"R_SIG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"S_COU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VADDER_TB___024root__trace_init_top(VADDER_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_init_top\n"); );
    // Body
    VADDER_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VADDER_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VADDER_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VADDER_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VADDER_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VADDER_TB___024root__trace_register(VADDER_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VADDER_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VADDER_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VADDER_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VADDER_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VADDER_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_const_0\n"); );
    // Init
    VADDER_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VADDER_TB___024root*>(voidSelf);
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VADDER_TB___024root__trace_full_0_sub_0(VADDER_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VADDER_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_full_0\n"); );
    // Init
    VADDER_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VADDER_TB___024root*>(voidSelf);
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VADDER_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VADDER_TB___024root__trace_full_0_sub_0(VADDER_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ADDER_TB__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelf->ADDER_TB__DOT__b),32);
    bufp->fullBit(oldp+3,((vlSelf->ADDER_TB__DOT__a 
                           >> 0x1fU)));
    bufp->fullBit(oldp+4,((vlSelf->ADDER_TB__DOT__b 
                           >> 0x1fU)));
    bufp->fullCData(oldp+5,((0xffU & (vlSelf->ADDER_TB__DOT__a 
                                      >> 0x17U))),8);
    bufp->fullCData(oldp+6,((0xffU & (vlSelf->ADDER_TB__DOT__b 
                                      >> 0x17U))),8);
    bufp->fullIData(oldp+7,(vlSelf->ADDER_TB__DOT__uut__DOT__MAN_A),24);
    bufp->fullIData(oldp+8,(vlSelf->ADDER_TB__DOT__uut__DOT__MAN_B),24);
    bufp->fullCData(oldp+9,(vlSelf->ADDER_TB__DOT__uut__DOT__EXP_D),8);
    bufp->fullIData(oldp+10,(vlSelf->ADDER_TB__DOT__uut__DOT__AL_MA),24);
    bufp->fullIData(oldp+11,(vlSelf->ADDER_TB__DOT__uut__DOT__AL_MB),24);
    bufp->fullCData(oldp+12,(vlSelf->ADDER_TB__DOT__uut__DOT__L_EXP),8);
    bufp->fullIData(oldp+13,(vlSelf->ADDER_TB__DOT__uut__DOT__MAN_S),25);
    bufp->fullIData(oldp+14,(((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                               ? vlSelf->ADDER_TB__DOT__uut__DOT__AL_MA
                               : vlSelf->ADDER_TB__DOT__uut__DOT__AL_MB)),25);
    bufp->fullIData(oldp+15,(((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                               ? vlSelf->ADDER_TB__DOT__uut__DOT__AL_MB
                               : vlSelf->ADDER_TB__DOT__uut__DOT__AL_MA)),25);
    bufp->fullCData(oldp+16,(vlSelf->ADDER_TB__DOT__uut__DOT__R_EXP),8);
    bufp->fullIData(oldp+17,(vlSelf->ADDER_TB__DOT__uut__DOT__R_MAN),24);
    bufp->fullIData(oldp+18,(vlSelf->ADDER_TB__DOT__uut__DOT__S_COU),32);
    bufp->fullIData(oldp+19,(((0U == (0x7fffffffU & vlSelf->ADDER_TB__DOT__a))
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
                                       << 0x1fU) | 
                                      (((IData)(vlSelf->ADDER_TB__DOT__uut__DOT__R_EXP) 
                                        << 0x17U) | 
                                       (0x7fffffU & vlSelf->ADDER_TB__DOT__uut__DOT__R_MAN)))))),32);
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                                   ? (vlSelf->ADDER_TB__DOT__a 
                                      >> 0x1fU) : (vlSelf->ADDER_TB__DOT__b 
                                                   >> 0x1fU)))));
    bufp->fullBit(oldp+21,(((0U == vlSelf->ADDER_TB__DOT__uut__DOT__MAN_S)
                             ? 0U : (1U & ((IData)(vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0)
                                            ? (vlSelf->ADDER_TB__DOT__a 
                                               >> 0x1fU)
                                            : (vlSelf->ADDER_TB__DOT__b 
                                               >> 0x1fU))))));
}
