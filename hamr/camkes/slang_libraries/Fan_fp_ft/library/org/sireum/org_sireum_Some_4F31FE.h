#ifndef SIREUM_H_org_sireum_Some_4F31FE
#define SIREUM_H_org_sireum_Some_4F31FE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api]

#define Some_4F31FE_value_(this) ((tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &(this)->value)

B Some_4F31FE__eq(Some_4F31FE this, Some_4F31FE other);
inline B Some_4F31FE__ne(Some_4F31FE this, Some_4F31FE other) {
  return !Some_4F31FE__eq(this, other);
};
B Some_4F31FE__equiv(Some_4F31FE this, Some_4F31FE other);
inline B Some_4F31FE__inequiv(Some_4F31FE this, Some_4F31FE other) {
  return !Some_4F31FE__equiv(this, other);
};
void Some_4F31FE_string_(STACK_FRAME String result, Some_4F31FE this);
void Some_4F31FE_cprint(Some_4F31FE this, B isOut);

inline B Some_4F31FE__is(STACK_FRAME void* this) {
  return ((Some_4F31FE) this)->type == TSome_4F31FE;
}

inline Some_4F31FE Some_4F31FE__as(STACK_FRAME void *this) {
  if (Some_4F31FE__is(CALLER this)) return (Some_4F31FE) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api].");
  abort();
}

void Some_4F31FE_apply(STACK_FRAME Some_4F31FE this, tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif