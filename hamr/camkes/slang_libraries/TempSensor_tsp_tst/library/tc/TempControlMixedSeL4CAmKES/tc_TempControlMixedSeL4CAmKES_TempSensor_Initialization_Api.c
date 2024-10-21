#include <all.h>

// tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api

B tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__eq(tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (art_Art_PortId__ne(this->tempChanged_Id, other->tempChanged_Id)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__equiv(tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (art_Art_PortId__inequiv(this->tempChanged_Id, other->tempChanged_Id)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__ne(tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api other);
B tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__inequiv(tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api other);

void tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api", "string", 0);
  String_string_(SF result, string("TempSensor_Initialization_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->currentTemp_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->tempChanged_Id);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_cprint(tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("TempSensor_Initialization_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->tempChanged_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, art_Art_BridgeId id, art_Art_PortId currentTemp_Id, art_Art_PortId tempChanged_Id) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api", "apply", 0);
  this->id = id;
  this->currentTemp_Id = currentTemp_Id;
  this->tempChanged_Id = tempChanged_Id;
}