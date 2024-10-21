#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]

B Option_5071ED__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_ACDB63: return T;
    case TSome_2EFA7D: return T;
    default: return F;
  }
}

Option_5071ED Option_5071ED__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_ACDB63: break;
    case TSome_2EFA7D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.FanCmd.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_5071ED) this;
}

void Option_5071ED_string_(STACK_FRAME String result, Option_5071ED this);

tc_TempControlMixedSeL4CAmKES_FanCmd_Type Option_5071ED_get_(STACK_FRAME Option_5071ED this) {
  switch (this->type) {
    case TNone_ACDB63: return None_ACDB63_get_(CALLER (None_ACDB63) this);
    case TSome_2EFA7D: return Some_2EFA7D_get_(CALLER (Some_2EFA7D) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}