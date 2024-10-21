#ifndef SIREUM_H_org_sireum_Some_568CC9
#define SIREUM_H_org_sireum_Some_568CC9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api]

#define Some_568CC9_value_(this) ((tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &(this)->value)

B Some_568CC9__eq(Some_568CC9 this, Some_568CC9 other);
inline B Some_568CC9__ne(Some_568CC9 this, Some_568CC9 other) {
  return !Some_568CC9__eq(this, other);
};
B Some_568CC9__equiv(Some_568CC9 this, Some_568CC9 other);
inline B Some_568CC9__inequiv(Some_568CC9 this, Some_568CC9 other) {
  return !Some_568CC9__equiv(this, other);
};
void Some_568CC9_string_(STACK_FRAME String result, Some_568CC9 this);
void Some_568CC9_cprint(Some_568CC9 this, B isOut);

inline B Some_568CC9__is(STACK_FRAME void* this) {
  return ((Some_568CC9) this)->type == TSome_568CC9;
}

inline Some_568CC9 Some_568CC9__as(STACK_FRAME void *this) {
  if (Some_568CC9__is(CALLER this)) return (Some_568CC9) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api].");
  abort();
}

void Some_568CC9_apply(STACK_FRAME Some_568CC9 this, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif