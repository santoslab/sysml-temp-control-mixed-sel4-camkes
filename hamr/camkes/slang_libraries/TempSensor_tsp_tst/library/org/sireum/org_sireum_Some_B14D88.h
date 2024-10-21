#ifndef SIREUM_H_org_sireum_Some_B14D88
#define SIREUM_H_org_sireum_Some_B14D88

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]

#define Some_B14D88_value_(this) ((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &(this)->value)

B Some_B14D88__eq(Some_B14D88 this, Some_B14D88 other);
inline B Some_B14D88__ne(Some_B14D88 this, Some_B14D88 other) {
  return !Some_B14D88__eq(this, other);
};
B Some_B14D88__equiv(Some_B14D88 this, Some_B14D88 other);
inline B Some_B14D88__inequiv(Some_B14D88 this, Some_B14D88 other) {
  return !Some_B14D88__equiv(this, other);
};
void Some_B14D88_string_(STACK_FRAME String result, Some_B14D88 this);
void Some_B14D88_cprint(Some_B14D88 this, B isOut);

inline B Some_B14D88__is(STACK_FRAME void* this) {
  return ((Some_B14D88) this)->type == TSome_B14D88;
}

inline Some_B14D88 Some_B14D88__as(STACK_FRAME void *this) {
  if (Some_B14D88__is(CALLER this)) return (Some_B14D88) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api].");
  abort();
}

void Some_B14D88_apply(STACK_FRAME Some_B14D88 this, tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif