#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.Temperature]

B Option_DEC797__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_40E880: return T;
    case TSome_76E303: return T;
    default: return F;
  }
}

Option_DEC797 Option_DEC797__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_40E880: break;
    case TSome_76E303: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.Temperature].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_DEC797) this;
}

void Option_DEC797_string_(STACK_FRAME String result, Option_DEC797 this);

void Option_DEC797_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature result, Option_DEC797 this) {
  switch (this->type) {
    case TNone_40E880: None_40E880_get_(CALLER (tc_TempControlMixedSeL4CAmKES_Temperature) result, (None_40E880) this); return;
    case TSome_76E303: Some_76E303_get_(CALLER (tc_TempControlMixedSeL4CAmKES_Temperature) result, (Some_76E303) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}