#include <TempControl_tcp_tct_adapter.h>

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct_adapter.c", "", "tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_adapter_initialiseArchitecture", 0);

  tc_TempControl_tcp_tct_tct_initialiseArchitecture(SF_LAST);
}

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct_adapter.c", "", "tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_adapter_initialiseEntryPoint", 0);

  tc_TempControl_tcp_tct_tct_initialiseEntryPoint(SF_LAST);
}

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct_adapter.c", "", "tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_adapter_computeEntryPoint", 0);

  tc_TempControl_tcp_tct_tct_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct_adapter.c", "", "tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_adapter_entryPoints", 0);

  return tc_TempControl_tcp_tct_tct_entryPoints(SF_LAST);
}
