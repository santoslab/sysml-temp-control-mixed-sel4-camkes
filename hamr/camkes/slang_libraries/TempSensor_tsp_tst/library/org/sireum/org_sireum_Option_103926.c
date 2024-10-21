#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]

B Option_103926__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_86BF24: return T;
    case TSome_0C4CF8: return T;
    default: return F;
  }
}

Option_103926 Option_103926__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_86BF24: break;
    case TSome_0C4CF8: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.TempUnit.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_103926) this;
}

void Option_103926_string_(STACK_FRAME String result, Option_103926 this);

tc_TempControlMixedSeL4CAmKES_TempUnit_Type Option_103926_get_(STACK_FRAME Option_103926 this) {
  switch (this->type) {
    case TNone_86BF24: return None_86BF24_get_(CALLER (None_86BF24) this);
    case TSome_0C4CF8: return Some_0C4CF8_get_(CALLER (Some_0C4CF8) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}