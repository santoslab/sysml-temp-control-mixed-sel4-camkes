#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]

B Option_889345__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_E88024: return T;
    case TSome_BE25AD: return T;
    default: return F;
  }
}

Option_889345 Option_889345__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_E88024: break;
    case TSome_BE25AD: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_889345) this;
}

void Option_889345_string_(STACK_FRAME String result, Option_889345 this);

void Option_889345_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api result, Option_889345 this) {
  switch (this->type) {
    case TNone_E88024: None_E88024_get_(CALLER (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) result, (None_E88024) this); return;
    case TSome_BE25AD: Some_BE25AD_get_(CALLER (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) result, (Some_BE25AD) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}