#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api]

B Option_9C9ECC__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_F8CCDD: return T;
    case TSome_4F31FE: return T;
    default: return F;
  }
}

Option_9C9ECC Option_9C9ECC__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_F8CCDD: break;
    case TSome_4F31FE: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_9C9ECC) this;
}

void Option_9C9ECC_string_(STACK_FRAME String result, Option_9C9ECC this);

void Option_9C9ECC_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api result, Option_9C9ECC this) {
  switch (this->type) {
    case TNone_F8CCDD: None_F8CCDD_get_(CALLER (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) result, (None_F8CCDD) this); return;
    case TSome_4F31FE: Some_4F31FE_get_(CALLER (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) result, (Some_4F31FE) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}