#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api]

B Option_CA19CB__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B1BC55: return T;
    case TSome_568CC9: return T;
    default: return F;
  }
}

Option_CA19CB Option_CA19CB__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B1BC55: break;
    case TSome_568CC9: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_CA19CB) this;
}

void Option_CA19CB_string_(STACK_FRAME String result, Option_CA19CB this);

void Option_CA19CB_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api result, Option_CA19CB this) {
  switch (this->type) {
    case TNone_B1BC55: None_B1BC55_get_(CALLER (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) result, (None_B1BC55) this); return;
    case TSome_568CC9: Some_568CC9_get_(CALLER (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) result, (Some_568CC9) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}