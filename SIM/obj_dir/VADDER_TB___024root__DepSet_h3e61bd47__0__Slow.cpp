// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VADDER_TB.h for the primary calling header

#include "VADDER_TB__pch.h"
#include "VADDER_TB___024root.h"

VL_ATTR_COLD void VADDER_TB___024root___eval_static(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VADDER_TB___024root___eval_final(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VADDER_TB___024root___dump_triggers__stl(VADDER_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VADDER_TB___024root___eval_phase__stl(VADDER_TB___024root* vlSelf);

VL_ATTR_COLD void VADDER_TB___024root___eval_settle(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VADDER_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/caonam/SNN_THESIS_PROJECT/TB/ADDER_TB.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VADDER_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VADDER_TB___024root___dump_triggers__stl(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VADDER_TB___024root___act_sequent__TOP__0(VADDER_TB___024root* vlSelf);

VL_ATTR_COLD void VADDER_TB___024root___eval_stl(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VADDER_TB___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VADDER_TB___024root___eval_triggers__stl(VADDER_TB___024root* vlSelf);

VL_ATTR_COLD bool VADDER_TB___024root___eval_phase__stl(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VADDER_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VADDER_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VADDER_TB___024root___dump_triggers__act(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VADDER_TB___024root___dump_triggers__nba(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VADDER_TB___024root___ctor_var_reset(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ADDER_TB__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ADDER_TB__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ADDER_TB__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ADDER_TB__DOT__uut__DOT__MAN_A = VL_RAND_RESET_I(24);
    vlSelf->ADDER_TB__DOT__uut__DOT__MAN_B = VL_RAND_RESET_I(24);
    vlSelf->ADDER_TB__DOT__uut__DOT__EXP_D = VL_RAND_RESET_I(8);
    vlSelf->ADDER_TB__DOT__uut__DOT__AL_MA = VL_RAND_RESET_I(24);
    vlSelf->ADDER_TB__DOT__uut__DOT__AL_MB = VL_RAND_RESET_I(24);
    vlSelf->ADDER_TB__DOT__uut__DOT__L_EXP = VL_RAND_RESET_I(8);
    vlSelf->ADDER_TB__DOT__uut__DOT__MAN_S = VL_RAND_RESET_I(25);
    vlSelf->ADDER_TB__DOT__uut__DOT__R_EXP = VL_RAND_RESET_I(8);
    vlSelf->ADDER_TB__DOT__uut__DOT__R_MAN = VL_RAND_RESET_I(24);
    vlSelf->ADDER_TB__DOT__uut__DOT__S_COU = VL_RAND_RESET_I(32);
    vlSelf->ADDER_TB__DOT__uut__DOT____VdfgExtracted_h58feaccd__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
