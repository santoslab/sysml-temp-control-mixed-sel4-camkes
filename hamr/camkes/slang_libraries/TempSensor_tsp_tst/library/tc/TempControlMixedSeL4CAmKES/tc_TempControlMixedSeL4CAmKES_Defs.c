#include <all.h>

B tc_TempControlMixedSeL4CAmKES_Defs_initialized_ = F;

struct tc_TempControlMixedSeL4CAmKES_SetPoint _tc_TempControlMixedSeL4CAmKES_Defs_defaultSetPoint;

void tc_TempControlMixedSeL4CAmKES_Defs_init(STACK_FRAME_ONLY) {
  if (tc_TempControlMixedSeL4CAmKES_Defs_initialized_) return;
  tc_TempControlMixedSeL4CAmKES_Defs_initialized_ = T;
  DeclNewStackFrame(caller, "Defs.scala", "tc.TempControlMixedSeL4CAmKES.Defs", "<init>", 0);
  tc_TempControlMixedSeL4CAmKES_Defs_init_defaultSetPoint(SF_LAST);
}

tc_TempControlMixedSeL4CAmKES_SetPoint tc_TempControlMixedSeL4CAmKES_Defs_defaultSetPoint(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_Defs_init(CALLER_LAST);
  return (tc_TempControlMixedSeL4CAmKES_SetPoint) &_tc_TempControlMixedSeL4CAmKES_Defs_defaultSetPoint;
}

void tc_TempControlMixedSeL4CAmKES_Defs_init_defaultSetPoint(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(9);
  DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_1);
  tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_1, 70.0F, tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit);
  DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_2);
  tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_2, 90.0F, tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit);
  DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint(t_0);
  tc_TempControlMixedSeL4CAmKES_SetPoint_apply(SF &t_0, (tc_TempControlMixedSeL4CAmKES_Temperature) (&t_1), (tc_TempControlMixedSeL4CAmKES_Temperature) (&t_2));
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_Defs_defaultSetPoint, (&t_0), sizeof(struct tc_TempControlMixedSeL4CAmKES_SetPoint));
};