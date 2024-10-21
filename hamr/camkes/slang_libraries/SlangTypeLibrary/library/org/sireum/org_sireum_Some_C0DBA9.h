#ifndef SIREUM_H_org_sireum_Some_C0DBA9
#define SIREUM_H_org_sireum_Some_C0DBA9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlPeriodic.FanCmd.Type]

#define Some_C0DBA9_value_(this) ((this)->value)

B Some_C0DBA9__eq(Some_C0DBA9 this, Some_C0DBA9 other);
inline B Some_C0DBA9__ne(Some_C0DBA9 this, Some_C0DBA9 other) {
  return !Some_C0DBA9__eq(this, other);
};
B Some_C0DBA9__equiv(Some_C0DBA9 this, Some_C0DBA9 other);
inline B Some_C0DBA9__inequiv(Some_C0DBA9 this, Some_C0DBA9 other) {
  return !Some_C0DBA9__equiv(this, other);
};
void Some_C0DBA9_string_(STACK_FRAME String result, Some_C0DBA9 this);
void Some_C0DBA9_cprint(Some_C0DBA9 this, B isOut);

inline B Some_C0DBA9__is(STACK_FRAME void* this) {
  return ((Some_C0DBA9) this)->type == TSome_C0DBA9;
}

inline Some_C0DBA9 Some_C0DBA9__as(STACK_FRAME void *this) {
  if (Some_C0DBA9__is(CALLER this)) return (Some_C0DBA9) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlPeriodic.FanCmd.Type].");
  abort();
}

void Some_C0DBA9_apply(STACK_FRAME Some_C0DBA9 this, tc_TempControlPeriodic_FanCmd_Type value);

#ifdef __cplusplus
}
#endif

#endif