#ifndef SIREUM_H_org_sireum_Some_FBE41D
#define SIREUM_H_org_sireum_Some_FBE41D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]

#define Some_FBE41D_value_(this) ((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &(this)->value)

B Some_FBE41D__eq(Some_FBE41D this, Some_FBE41D other);
inline B Some_FBE41D__ne(Some_FBE41D this, Some_FBE41D other) {
  return !Some_FBE41D__eq(this, other);
};
B Some_FBE41D__equiv(Some_FBE41D this, Some_FBE41D other);
inline B Some_FBE41D__inequiv(Some_FBE41D this, Some_FBE41D other) {
  return !Some_FBE41D__equiv(this, other);
};
void Some_FBE41D_string_(STACK_FRAME String result, Some_FBE41D this);
void Some_FBE41D_cprint(Some_FBE41D this, B isOut);

inline B Some_FBE41D__is(STACK_FRAME void* this) {
  return ((Some_FBE41D) this)->type == TSome_FBE41D;
}

inline Some_FBE41D Some_FBE41D__as(STACK_FRAME void *this) {
  if (Some_FBE41D__is(CALLER this)) return (Some_FBE41D) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api].");
  abort();
}

void Some_FBE41D_apply(STACK_FRAME Some_FBE41D this, tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif