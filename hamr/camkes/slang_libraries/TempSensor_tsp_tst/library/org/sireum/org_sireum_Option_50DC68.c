#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]

B Option_50DC68__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_79FC20: return T;
    case TSome_FBE41D: return T;
    default: return F;
  }
}

Option_50DC68 Option_50DC68__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_79FC20: break;
    case TSome_FBE41D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_50DC68) this;
}

void Option_50DC68_string_(STACK_FRAME String result, Option_50DC68 this);

void Option_50DC68_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api result, Option_50DC68 this) {
  switch (this->type) {
    case TNone_79FC20: None_79FC20_get_(CALLER (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) result, (None_79FC20) this); return;
    case TSome_FBE41D: Some_FBE41D_get_(CALLER (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) result, (Some_FBE41D) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}