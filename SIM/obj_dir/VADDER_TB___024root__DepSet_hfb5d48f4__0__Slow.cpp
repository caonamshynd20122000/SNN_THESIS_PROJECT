// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VADDER_TB.h for the primary calling header

#include "VADDER_TB__pch.h"
#include "VADDER_TB__Syms.h"
#include "VADDER_TB___024root.h"

VL_ATTR_COLD void VADDER_TB___024root___eval_initial__TOP(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    __Vtemp_1[3U] = 0x4c54532fU;
    __Vtemp_1[4U] = 0x52455355U;
    __Vtemp_1[5U] = 0x2e2e2fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VADDER_TB___024root___dump_triggers__stl(VADDER_TB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VADDER_TB___024root___eval_triggers__stl(VADDER_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VADDER_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VADDER_TB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VADDER_TB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
