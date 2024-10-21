#include <all.h>

// Option[tc.Isolette_Data_Model.Monitor_Mode.Type]

B Option_38D338__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_BE2C3F: return T;
    case TSome_455777: return T;
    default: return F;
  }
}

Option_38D338 Option_38D338__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_BE2C3F: break;
    case TSome_455777: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.Isolette_Data_Model.Monitor_Mode.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_38D338) this;
}

void Option_38D338_string_(STACK_FRAME String result, Option_38D338 this);

tc_Isolette_Data_Model_Monitor_Mode_Type Option_38D338_get_(STACK_FRAME Option_38D338 this) {
  switch (this->type) {
    case TNone_BE2C3F: return None_BE2C3F_get_(CALLER (None_BE2C3F) this);
    case TSome_455777: return Some_455777_get_(CALLER (Some_455777) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}