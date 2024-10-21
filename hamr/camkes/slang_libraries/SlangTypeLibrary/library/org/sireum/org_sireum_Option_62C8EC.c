#include <all.h>

// Option[tc.TempControlPeriodic.FanCmd.Type]

B Option_62C8EC__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_037804: return T;
    case TSome_C0DBA9: return T;
    default: return F;
  }
}

Option_62C8EC Option_62C8EC__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_037804: break;
    case TSome_C0DBA9: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlPeriodic.FanCmd.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_62C8EC) this;
}

void Option_62C8EC_string_(STACK_FRAME String result, Option_62C8EC this);

tc_TempControlPeriodic_FanCmd_Type Option_62C8EC_get_(STACK_FRAME Option_62C8EC this) {
  switch (this->type) {
    case TNone_037804: return None_037804_get_(CALLER (None_037804) this);
    case TSome_C0DBA9: return Some_C0DBA9_get_(CALLER (Some_C0DBA9) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}