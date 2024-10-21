#include <all.h>

// Option[tc.Isolette_Data_Model.On_Off.Type]

B Option_C6954F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_BE24EA: return T;
    case TSome_F1808D: return T;
    default: return F;
  }
}

Option_C6954F Option_C6954F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_BE24EA: break;
    case TSome_F1808D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.Isolette_Data_Model.On_Off.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_C6954F) this;
}

void Option_C6954F_string_(STACK_FRAME String result, Option_C6954F this);

tc_Isolette_Data_Model_On_Off_Type Option_C6954F_get_(STACK_FRAME Option_C6954F this) {
  switch (this->type) {
    case TNone_BE24EA: return None_BE24EA_get_(CALLER (None_BE24EA) this);
    case TSome_F1808D: return Some_F1808D_get_(CALLER (Some_F1808D) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}