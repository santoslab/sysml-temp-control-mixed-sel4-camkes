#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]

B Option_262EA2__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B66650: return T;
    case TSome_B14D88: return T;
    default: return F;
  }
}

Option_262EA2 Option_262EA2__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B66650: break;
    case TSome_B14D88: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_262EA2) this;
}

void Option_262EA2_string_(STACK_FRAME String result, Option_262EA2 this);

void Option_262EA2_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api result, Option_262EA2 this) {
  switch (this->type) {
    case TNone_B66650: None_B66650_get_(CALLER (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) result, (None_B66650) this); return;
    case TSome_B14D88: Some_B14D88_get_(CALLER (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) result, (Some_B14D88) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}