#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.SetPoint]

B Option_3BF471__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_30CA2A: return T;
    case TSome_B391E9: return T;
    default: return F;
  }
}

Option_3BF471 Option_3BF471__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_30CA2A: break;
    case TSome_B391E9: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.SetPoint].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_3BF471) this;
}

void Option_3BF471_string_(STACK_FRAME String result, Option_3BF471 this);