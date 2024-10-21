#include <all.h>

// Option[tc.TempControlMixed.FanAck.Type]

B Option_AAF24B__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B4A4FA: return T;
    case TSome_270A8B: return T;
    default: return F;
  }
}

Option_AAF24B Option_AAF24B__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B4A4FA: break;
    case TSome_270A8B: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixed.FanAck.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_AAF24B) this;
}

void Option_AAF24B_string_(STACK_FRAME String result, Option_AAF24B this);

tc_TempControlMixed_FanAck_Type Option_AAF24B_get_(STACK_FRAME Option_AAF24B this) {
  switch (this->type) {
    case TNone_B4A4FA: return None_B4A4FA_get_(CALLER (None_B4A4FA) this);
    case TSome_270A8B: return Some_270A8B_get_(CALLER (Some_270A8B) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}