// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VADDER_TB.h for the primary calling header

#include "VADDER_TB__pch.h"
#include "VADDER_TB___024root.h"

VL_ATTR_COLD void VADDER_TB___024root___eval_initial__TOP(VADDER_TB___024root* vlSelf);
VlCoroutine VADDER_TB___024root___eval_initial__TOP__Vtiming__0(VADDER_TB___024root* vlSelf);

void VADDER_TB___024root___eval_initial(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_initial\n"); );
    // Body
    VADDER_TB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VADDER_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void VADDER_TB___024root___act_sequent__TOP__0(VADDER_TB___024root* vlSelf);

void VADDER_TB___024root___eval_act(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VADDER_TB___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void VADDER_TB___024root___eval_nba(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VADDER_TB___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void VADDER_TB___024root___timing_resume(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VADDER_TB___024root___eval_triggers__act(VADDER_TB___024root* vlSelf);

bool VADDER_TB___024root___eval_phase__act(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VADDER_TB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VADDER_TB___024root___timing_resume(vlSelf);
        VADDER_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VADDER_TB___024root___eval_phase__nba(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VADDER_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VADDER_TB___024root___dump_triggers__nba(VADDER_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VADDER_TB___024root___dump_triggers__act(VADDER_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VADDER_TB___024root___eval(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VADDER_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/caonam/SNN_THESIS_PROJECT/TB/ADDER_TB.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VADDER_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/caonam/SNN_THESIS_PROJECT/TB/ADDER_TB.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VADDER_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VADDER_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VADDER_TB___024root___eval_debug_assertions(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
