#include <all.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]

B Some_B14D88__eq(Some_B14D88 this, Some_B14D88 other) {
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__ne((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_B14D88__equiv(Some_B14D88 this, Some_B14D88 other) {
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__inequiv((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &this->value, (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_B14D88__ne(Some_B14D88 this, Some_B14D88 other);
B Some_B14D88__inequiv(Some_B14D88 this, Some_B14D88 other);

void Some_B14D88_string_(STACK_FRAME String result, Some_B14D88 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_B14D88_cprint(Some_B14D88 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Some("), isOut);
  tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_cprint((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_B14D88__is(STACK_FRAME void* this);
Some_B14D88 Some_B14D88__as(STACK_FRAME void *this);

void Some_B14D88_apply(STACK_FRAME Some_B14D88 this, tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_B14D88", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api));
}