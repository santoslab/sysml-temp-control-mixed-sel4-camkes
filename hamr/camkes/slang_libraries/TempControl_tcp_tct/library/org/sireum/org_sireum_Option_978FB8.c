#include <all.h>

// Option[tc.TempControlPeriodic.TempUnit.Type]

B Option_978FB8__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_4E7E94: return T;
    case TSome_56FCC9: return T;
    default: return F;
  }
}

Option_978FB8 Option_978FB8__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_4E7E94: break;
    case TSome_56FCC9: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlPeriodic.TempUnit.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_978FB8) this;
}

void Option_978FB8_string_(STACK_FRAME String result, Option_978FB8 this);

tc_TempControlPeriodic_TempUnit_Type Option_978FB8_get_(STACK_FRAME Option_978FB8 this) {
  switch (this->type) {
    case TNone_4E7E94: return None_4E7E94_get_(CALLER (None_4E7E94) this);
    case TSome_56FCC9: return Some_56FCC9_get_(CALLER (Some_56FCC9) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}