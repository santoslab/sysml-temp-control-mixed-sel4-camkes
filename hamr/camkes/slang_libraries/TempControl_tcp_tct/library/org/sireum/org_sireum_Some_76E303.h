#ifndef SIREUM_H_org_sireum_Some_76E303
#define SIREUM_H_org_sireum_Some_76E303

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.Temperature]

#define Some_76E303_value_(this) ((tc_TempControlMixedSeL4CAmKES_Temperature) &(this)->value)

B Some_76E303__eq(Some_76E303 this, Some_76E303 other);
inline B Some_76E303__ne(Some_76E303 this, Some_76E303 other) {
  return !Some_76E303__eq(this, other);
};
B Some_76E303__equiv(Some_76E303 this, Some_76E303 other);
inline B Some_76E303__inequiv(Some_76E303 this, Some_76E303 other) {
  return !Some_76E303__equiv(this, other);
};
void Some_76E303_string_(STACK_FRAME String result, Some_76E303 this);
void Some_76E303_cprint(Some_76E303 this, B isOut);

inline B Some_76E303__is(STACK_FRAME void* this) {
  return ((Some_76E303) this)->type == TSome_76E303;
}

inline Some_76E303 Some_76E303__as(STACK_FRAME void *this) {
  if (Some_76E303__is(CALLER this)) return (Some_76E303) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.Temperature].");
  abort();
}

void Some_76E303_apply(STACK_FRAME Some_76E303 this, tc_TempControlMixedSeL4CAmKES_Temperature value);

#ifdef __cplusplus
}
#endif

#endif