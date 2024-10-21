#include <all.h>

// Option[tc.Isolette_Data_Model.Regulator_Mode.Type]

B Option_A2275D__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3C78E7: return T;
    case TSome_C790DA: return T;
    default: return F;
  }
}

Option_A2275D Option_A2275D__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3C78E7: break;
    case TSome_C790DA: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.Isolette_Data_Model.Regulator_Mode.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_A2275D) this;
}

void Option_A2275D_string_(STACK_FRAME String result, Option_A2275D this);

tc_Isolette_Data_Model_Regulator_Mode_Type Option_A2275D_get_(STACK_FRAME Option_A2275D this) {
  switch (this->type) {
    case TNone_3C78E7: return None_3C78E7_get_(CALLER (None_3C78E7) this);
    case TSome_C790DA: return Some_C790DA_get_(CALLER (Some_C790DA) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}