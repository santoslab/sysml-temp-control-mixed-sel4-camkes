#include <all.h>

// Option[tc.Isolette_Data_Model.ValueStatus.Type]

B Option_570179__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A23E58: return T;
    case TSome_21C1E5: return T;
    default: return F;
  }
}

Option_570179 Option_570179__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A23E58: break;
    case TSome_21C1E5: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.Isolette_Data_Model.ValueStatus.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_570179) this;
}

void Option_570179_string_(STACK_FRAME String result, Option_570179 this);

tc_Isolette_Data_Model_ValueStatus_Type Option_570179_get_(STACK_FRAME Option_570179 this) {
  switch (this->type) {
    case TNone_A23E58: return None_A23E58_get_(CALLER (None_A23E58) this);
    case TSome_21C1E5: return Some_21C1E5_get_(CALLER (Some_21C1E5) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}