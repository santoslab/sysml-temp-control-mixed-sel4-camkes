#include <all.h>

B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_initialized_ = F;

struct Random_Gen64Impl _tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_rand;
Z _tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_errorRate;

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_init(STACK_FRAME_ONLY) {
  if (tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_initialized_) return;
  tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_initialized_ = T;
  DeclNewStackFrame(caller, "Fan_fp_ft.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft", "<init>", 0);
  tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_init_rand(SF_LAST);
  tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_init_errorRate(SF_LAST);
}

Random_Gen64Impl tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_rand(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_init(CALLER_LAST);
  return (Random_Gen64Impl) &_tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_rand;
}

Z tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_errorRate(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_init(CALLER_LAST);
  return _tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_errorRate;
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_initialise(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api api) {
  DeclNewStackFrame(caller, "Fan_fp_ft.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft", "initialise", 0);
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_handle_fanCmd(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api api, tc_TempControlMixedSeL4CAmKES_FanCmd_Type value) {
  DeclNewStackFrame(caller, "Fan_fp_ft.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft", "handle_fanCmd", 0);

  sfUpdateLoc(23);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string("Received fanCmd "));
    tc_TempControlMixedSeL4CAmKES_FanCmd_Type_string_(SF (String) &t_0, value);
    String_string_(SF (String) &t_0, string(""));
    tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_logInfo_(SF api, (String) ((String) &t_0));
  }

  sfUpdateLoc(26);
  tc_TempControlMixedSeL4CAmKES_FanAck_Type ackVal;
  {
    Z t_1 = Random_Gen64Impl_nextZBetween_(SF tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_rand(SF_LAST), Z_C(0), Z_C(99));
    tc_TempControlMixedSeL4CAmKES_FanAck_Type t_2;
    if (Z__lt(t_1, Z__sub(Z_C(100), tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_errorRate(SF_LAST)))) {
      t_2 = tc_TempControlMixedSeL4CAmKES_FanAck_Type_Ok;
    } else {
      t_2 = tc_TempControlMixedSeL4CAmKES_FanAck_Type_Error;
    }
    ackVal = t_2;
  }

  sfUpdateLoc(38);
  {
    tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_put_fanAck_(SF api, ackVal);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_finalise(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api api) {
  DeclNewStackFrame(caller, "Fan_fp_ft.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft", "finalise", 0);
}

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_init_rand(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  DeclNewRandom_Impl_Xoshiro256(t_1);
  Random_Impl_Xoshiro256_create(SF (Random_Impl_Xoshiro256) &t_1);
  DeclNewRandom_Gen64Impl(t_0);
  Random_Gen64Impl_apply(SF &t_0, (Random_Impl_Xoshiro256) ((Random_Impl_Xoshiro256) &t_1));
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_rand, (&t_0), sizeof(struct Random_Gen64Impl));
};

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_init_errorRate(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  _tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_errorRate = Z_C(35);
};