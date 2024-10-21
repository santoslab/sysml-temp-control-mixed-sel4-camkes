#ifndef SIREUM_H_org_sireum_Some_6EABEC
#define SIREUM_H_org_sireum_Some_6EABEC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]

#define Some_6EABEC_value_(this) ((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &(this)->value)

B Some_6EABEC__eq(Some_6EABEC this, Some_6EABEC other);
inline B Some_6EABEC__ne(Some_6EABEC this, Some_6EABEC other) {
  return !Some_6EABEC__eq(this, other);
};
B Some_6EABEC__equiv(Some_6EABEC this, Some_6EABEC other);
inline B Some_6EABEC__inequiv(Some_6EABEC this, Some_6EABEC other) {
  return !Some_6EABEC__equiv(this, other);
};
void Some_6EABEC_string_(STACK_FRAME String result, Some_6EABEC this);
void Some_6EABEC_cprint(Some_6EABEC this, B isOut);

inline B Some_6EABEC__is(STACK_FRAME void* this) {
  return ((Some_6EABEC) this)->type == TSome_6EABEC;
}

inline Some_6EABEC Some_6EABEC__as(STACK_FRAME void *this) {
  if (Some_6EABEC__is(CALLER this)) return (Some_6EABEC) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api].");
  abort();
}

void Some_6EABEC_apply(STACK_FRAME Some_6EABEC this, tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif