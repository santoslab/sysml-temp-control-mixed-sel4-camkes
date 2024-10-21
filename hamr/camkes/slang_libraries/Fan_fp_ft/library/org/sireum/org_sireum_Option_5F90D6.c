#include <all.h>

// Option[tc.TempControlMixed.TempUnit.Type]

B Option_5F90D6__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_121724: return T;
    case TSome_0E3FBA: return T;
    default: return F;
  }
}

Option_5F90D6 Option_5F90D6__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_121724: break;
    case TSome_0E3FBA: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixed.TempUnit.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_5F90D6) this;
}

void Option_5F90D6_string_(STACK_FRAME String result, Option_5F90D6 this);

tc_TempControlMixed_TempUnit_Type Option_5F90D6_get_(STACK_FRAME Option_5F90D6 this) {
  switch (this->type) {
    case TNone_121724: return None_121724_get_(CALLER (None_121724) this);
    case TSome_0E3FBA: return Some_0E3FBA_get_(CALLER (Some_0E3FBA) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}