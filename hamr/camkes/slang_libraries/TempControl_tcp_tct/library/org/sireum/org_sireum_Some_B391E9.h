#ifndef SIREUM_H_org_sireum_Some_B391E9
#define SIREUM_H_org_sireum_Some_B391E9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.SetPoint]

#define Some_B391E9_value_(this) ((tc_TempControlMixedSeL4CAmKES_SetPoint) &(this)->value)

B Some_B391E9__eq(Some_B391E9 this, Some_B391E9 other);
inline B Some_B391E9__ne(Some_B391E9 this, Some_B391E9 other) {
  return !Some_B391E9__eq(this, other);
};
B Some_B391E9__equiv(Some_B391E9 this, Some_B391E9 other);
inline B Some_B391E9__inequiv(Some_B391E9 this, Some_B391E9 other) {
  return !Some_B391E9__equiv(this, other);
};
void Some_B391E9_string_(STACK_FRAME String result, Some_B391E9 this);
void Some_B391E9_cprint(Some_B391E9 this, B isOut);

inline B Some_B391E9__is(STACK_FRAME void* this) {
  return ((Some_B391E9) this)->type == TSome_B391E9;
}

inline Some_B391E9 Some_B391E9__as(STACK_FRAME void *this) {
  if (Some_B391E9__is(CALLER this)) return (Some_B391E9) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.SetPoint].");
  abort();
}

void Some_B391E9_apply(STACK_FRAME Some_B391E9 this, tc_TempControlMixedSeL4CAmKES_SetPoint value);

#ifdef __cplusplus
}
#endif

#endif