#include <all.h>

tc_TempControlMixedSeL4CAmKES_TempUnit_Type Some_0C4CF8_get_(STACK_FRAME Some_0C4CF8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type _r_;
  {
    _r_ = Some_0C4CF8_value_(this);
  }
  return _r_;
}

tc_TempControlMixedSeL4CAmKES_FanCmd_Type Some_2EFA7D_get_(STACK_FRAME Some_2EFA7D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  tc_TempControlMixedSeL4CAmKES_FanCmd_Type _r_;
  {
    _r_ = Some_2EFA7D_value_(this);
  }
  return _r_;
}

tc_TempControlMixedSeL4CAmKES_FanAck_Type Some_D85467_get_(STACK_FRAME Some_D85467 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  tc_TempControlMixedSeL4CAmKES_FanAck_Type _r_;
  {
    _r_ = Some_D85467_value_(this);
  }
  return _r_;
}

void Some_6EABEC_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api result, Some_6EABEC this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api _r_;
  _r_ = (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) Some_6EABEC_value_(this);
  Type_assign(result, _r_, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api));
  return;
}

void Some_BE25AD_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api result, Some_BE25AD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api _r_;
  _r_ = (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) Some_BE25AD_value_(this);
  Type_assign(result, _r_, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api));
  return;
}

void Some_76E303_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature result, Some_76E303 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  tc_TempControlMixedSeL4CAmKES_Temperature _r_;
  _r_ = (tc_TempControlMixedSeL4CAmKES_Temperature) Some_76E303_value_(this);
  Type_assign(result, _r_, sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
  return;
}

B Some_D29615_nonEmpty_(STACK_FRAME Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "nonEmpty", 0);

  sfUpdateLoc(198);
  B _r_;
  {
    _r_ = T;
  }
  return _r_;
}

void Some_D29615_get_(STACK_FRAME art_DataContent result, Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);

  sfUpdateLoc(230);
  art_DataContent _r_;
  _r_ = (art_DataContent) Some_D29615_value_(this);
  Type_assign(result, _r_, sizeof(union art_DataContent));
  return;
}