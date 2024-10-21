#ifndef SIREUM_H_org_sireum_Some_BE25AD
#define SIREUM_H_org_sireum_Some_BE25AD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]

#define Some_BE25AD_value_(this) ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &(this)->value)

B Some_BE25AD__eq(Some_BE25AD this, Some_BE25AD other);
inline B Some_BE25AD__ne(Some_BE25AD this, Some_BE25AD other) {
  return !Some_BE25AD__eq(this, other);
};
B Some_BE25AD__equiv(Some_BE25AD this, Some_BE25AD other);
inline B Some_BE25AD__inequiv(Some_BE25AD this, Some_BE25AD other) {
  return !Some_BE25AD__equiv(this, other);
};
void Some_BE25AD_string_(STACK_FRAME String result, Some_BE25AD this);
void Some_BE25AD_cprint(Some_BE25AD this, B isOut);

inline B Some_BE25AD__is(STACK_FRAME void* this) {
  return ((Some_BE25AD) this)->type == TSome_BE25AD;
}

inline Some_BE25AD Some_BE25AD__as(STACK_FRAME void *this) {
  if (Some_BE25AD__is(CALLER this)) return (Some_BE25AD) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api].");
  abort();
}

void Some_BE25AD_apply(STACK_FRAME Some_BE25AD this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif