#include <all.h>

// Option[tc.Isolette_Data_Model.Status.Type]

B Option_C9A4D6__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A45A41: return T;
    case TSome_140719: return T;
    default: return F;
  }
}

Option_C9A4D6 Option_C9A4D6__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A45A41: break;
    case TSome_140719: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.Isolette_Data_Model.Status.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_C9A4D6) this;
}

void Option_C9A4D6_string_(STACK_FRAME String result, Option_C9A4D6 this);

tc_Isolette_Data_Model_Status_Type Option_C9A4D6_get_(STACK_FRAME Option_C9A4D6 this) {
  switch (this->type) {
    case TNone_A45A41: return None_A45A41_get_(CALLER (None_A45A41) this);
    case TSome_140719: return Some_140719_get_(CALLER (Some_140719) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}