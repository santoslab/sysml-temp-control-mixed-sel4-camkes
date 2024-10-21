#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]

B Some_FBE41D__eq(Some_FBE41D this, Some_FBE41D other) {
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api__ne((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &other->value)) return F;
  return T;
}

B Some_FBE41D__equiv(Some_FBE41D this, Some_FBE41D other) {
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api__inequiv((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &other->value)) return F;
  return T;
}

B Some_FBE41D__ne(Some_FBE41D this, Some_FBE41D other);
B Some_FBE41D__inequiv(Some_FBE41D this, Some_FBE41D other);

void Some_FBE41D_string_(STACK_FRAME String result, Some_FBE41D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_FBE41D_cprint(Some_FBE41D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_cprint((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_FBE41D__is(STACK_FRAME void* this);
Some_FBE41D Some_FBE41D__as(STACK_FRAME void *this);

void Some_FBE41D_apply(STACK_FRAME Some_FBE41D this, tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_FBE41D", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api));
}