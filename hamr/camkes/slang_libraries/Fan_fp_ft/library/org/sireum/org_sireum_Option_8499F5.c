#include <all.h>

// Option[tc.TempControlMixed.FanCmd.Type]

B Option_8499F5__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1AEC2C: return T;
    case TSome_776961: return T;
    default: return F;
  }
}

Option_8499F5 Option_8499F5__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1AEC2C: break;
    case TSome_776961: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[tc.TempControlMixed.FanCmd.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_8499F5) this;
}

void Option_8499F5_string_(STACK_FRAME String result, Option_8499F5 this);

tc_TempControlMixed_FanCmd_Type Option_8499F5_get_(STACK_FRAME Option_8499F5 this) {
  switch (this->type) {
    case TNone_1AEC2C: return None_1AEC2C_get_(CALLER (None_1AEC2C) this);
    case TSome_776961: return Some_776961_get_(CALLER (Some_776961) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}