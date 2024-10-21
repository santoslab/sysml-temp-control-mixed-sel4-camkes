#ifndef SIREUM_H_org_sireum_Some_C3173C
#define SIREUM_H_org_sireum_Some_C3173C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlPeriodic.FanAck.Type]

#define Some_C3173C_value_(this) ((this)->value)

B Some_C3173C__eq(Some_C3173C this, Some_C3173C other);
inline B Some_C3173C__ne(Some_C3173C this, Some_C3173C other) {
  return !Some_C3173C__eq(this, other);
};
B Some_C3173C__equiv(Some_C3173C this, Some_C3173C other);
inline B Some_C3173C__inequiv(Some_C3173C this, Some_C3173C other) {
  return !Some_C3173C__equiv(this, other);
};
void Some_C3173C_string_(STACK_FRAME String result, Some_C3173C this);
void Some_C3173C_cprint(Some_C3173C this, B isOut);

inline B Some_C3173C__is(STACK_FRAME void* this) {
  return ((Some_C3173C) this)->type == TSome_C3173C;
}

inline Some_C3173C Some_C3173C__as(STACK_FRAME void *this) {
  if (Some_C3173C__is(CALLER this)) return (Some_C3173C) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlPeriodic.FanAck.Type].");
  abort();
}

void Some_C3173C_apply(STACK_FRAME Some_C3173C this, tc_TempControlPeriodic_FanAck_Type value);

#ifdef __cplusplus
}
#endif

#endif