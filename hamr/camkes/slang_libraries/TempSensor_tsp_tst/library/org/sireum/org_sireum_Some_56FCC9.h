#ifndef SIREUM_H_org_sireum_Some_56FCC9
#define SIREUM_H_org_sireum_Some_56FCC9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlPeriodic.TempUnit.Type]

#define Some_56FCC9_value_(this) ((this)->value)

B Some_56FCC9__eq(Some_56FCC9 this, Some_56FCC9 other);
inline B Some_56FCC9__ne(Some_56FCC9 this, Some_56FCC9 other) {
  return !Some_56FCC9__eq(this, other);
};
B Some_56FCC9__equiv(Some_56FCC9 this, Some_56FCC9 other);
inline B Some_56FCC9__inequiv(Some_56FCC9 this, Some_56FCC9 other) {
  return !Some_56FCC9__equiv(this, other);
};
void Some_56FCC9_string_(STACK_FRAME String result, Some_56FCC9 this);
void Some_56FCC9_cprint(Some_56FCC9 this, B isOut);

inline B Some_56FCC9__is(STACK_FRAME void* this) {
  return ((Some_56FCC9) this)->type == TSome_56FCC9;
}

inline Some_56FCC9 Some_56FCC9__as(STACK_FRAME void *this) {
  if (Some_56FCC9__is(CALLER this)) return (Some_56FCC9) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlPeriodic.TempUnit.Type].");
  abort();
}

void Some_56FCC9_apply(STACK_FRAME Some_56FCC9 this, tc_TempControlPeriodic_TempUnit_Type value);

#ifdef __cplusplus
}
#endif

#endif