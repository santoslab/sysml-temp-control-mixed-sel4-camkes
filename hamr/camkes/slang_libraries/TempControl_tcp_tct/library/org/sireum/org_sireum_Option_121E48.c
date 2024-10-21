#include <all.h>

// Option[tc.TempControlPeriodic.FanAck.Type]

B Option_121E48__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D4B208: return T;
    case TSome_C3173C: return T;
    default: return F;
  }
}

Option_121E48 Option_121E48__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D4B208: break;
    case TSome_C3173C: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlPeriodic.FanAck.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_121E48) this;
}

void Option_121E48_string_(STACK_FRAME String result, Option_121E48 this);

tc_TempControlPeriodic_FanAck_Type Option_121E48_get_(STACK_FRAME Option_121E48 this) {
  switch (this->type) {
    case TNone_D4B208: return None_D4B208_get_(CALLER (None_D4B208) this);
    case TSome_C3173C: return Some_C3173C_get_(CALLER (Some_C3173C) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}