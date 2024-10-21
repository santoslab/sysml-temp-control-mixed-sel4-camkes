#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]

B Option_098837__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_BB3A66: return T;
    case TSome_6EABEC: return T;
    default: return F;
  }
}

Option_098837 Option_098837__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_BB3A66: break;
    case TSome_6EABEC: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_098837) this;
}

void Option_098837_string_(STACK_FRAME String result, Option_098837 this);

void Option_098837_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api result, Option_098837 this) {
  switch (this->type) {
    case TNone_BB3A66: None_BB3A66_get_(CALLER (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) result, (None_BB3A66) this); return;
    case TSome_6EABEC: Some_6EABEC_get_(CALLER (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) result, (Some_6EABEC) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}