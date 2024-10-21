#include <all.h>

// Option[tc.TempControlMixedSeL4CAmKES.FanAck.Type]

B Option_36021E__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A70CEE: return T;
    case TSome_D85467: return T;
    default: return F;
  }
}

Option_36021E Option_36021E__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A70CEE: break;
    case TSome_D85467: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixedSeL4CAmKES.FanAck.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_36021E) this;
}

void Option_36021E_string_(STACK_FRAME String result, Option_36021E this);

tc_TempControlMixedSeL4CAmKES_FanAck_Type Option_36021E_get_(STACK_FRAME Option_36021E this) {
  switch (this->type) {
    case TNone_A70CEE: return None_A70CEE_get_(CALLER (None_A70CEE) this);
    case TSome_D85467: return Some_D85467_get_(CALLER (Some_D85467) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}