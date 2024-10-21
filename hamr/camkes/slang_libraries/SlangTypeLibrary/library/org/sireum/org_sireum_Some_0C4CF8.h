#ifndef SIREUM_H_org_sireum_Some_0C4CF8
#define SIREUM_H_org_sireum_Some_0C4CF8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]

#define Some_0C4CF8_value_(this) ((this)->value)

B Some_0C4CF8__eq(Some_0C4CF8 this, Some_0C4CF8 other);
inline B Some_0C4CF8__ne(Some_0C4CF8 this, Some_0C4CF8 other) {
  return !Some_0C4CF8__eq(this, other);
};
B Some_0C4CF8__equiv(Some_0C4CF8 this, Some_0C4CF8 other);
inline B Some_0C4CF8__inequiv(Some_0C4CF8 this, Some_0C4CF8 other) {
  return !Some_0C4CF8__equiv(this, other);
};
void Some_0C4CF8_string_(STACK_FRAME String result, Some_0C4CF8 this);
void Some_0C4CF8_cprint(Some_0C4CF8 this, B isOut);

inline B Some_0C4CF8__is(STACK_FRAME void* this) {
  return ((Some_0C4CF8) this)->type == TSome_0C4CF8;
}

inline Some_0C4CF8 Some_0C4CF8__as(STACK_FRAME void *this) {
  if (Some_0C4CF8__is(CALLER this)) return (Some_0C4CF8) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type].");
  abort();
}

void Some_0C4CF8_apply(STACK_FRAME Some_0C4CF8 this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type value);

#ifdef __cplusplus
}
#endif

#endif