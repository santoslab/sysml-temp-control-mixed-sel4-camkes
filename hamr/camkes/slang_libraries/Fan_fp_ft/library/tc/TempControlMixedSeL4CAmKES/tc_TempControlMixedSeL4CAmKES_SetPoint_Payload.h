#ifndef SIREUM_H_tc_TempControlMixedSeL4CAmKES_SetPoint_Payload
#define SIREUM_H_tc_TempControlMixedSeL4CAmKES_SetPoint_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixedSeL4CAmKES.SetPoint_Payload

#define tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_value_(this) ((tc_TempControlMixedSeL4CAmKES_SetPoint) &(this)->value)

B tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__eq(tc_TempControlMixedSeL4CAmKES_SetPoint_Payload this, tc_TempControlMixedSeL4CAmKES_SetPoint_Payload other);
inline B tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__ne(tc_TempControlMixedSeL4CAmKES_SetPoint_Payload this, tc_TempControlMixedSeL4CAmKES_SetPoint_Payload other) {
  return !tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__eq(this, other);
};
B tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__equiv(tc_TempControlMixedSeL4CAmKES_SetPoint_Payload this, tc_TempControlMixedSeL4CAmKES_SetPoint_Payload other);
inline B tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__inequiv(tc_TempControlMixedSeL4CAmKES_SetPoint_Payload this, tc_TempControlMixedSeL4CAmKES_SetPoint_Payload other) {
  return !tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__equiv(this, other);
};
void tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_SetPoint_Payload this);
void tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_cprint(tc_TempControlMixedSeL4CAmKES_SetPoint_Payload this, B isOut);

inline B tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixedSeL4CAmKES_SetPoint_Payload) this)->type == Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload;
}

inline tc_TempControlMixedSeL4CAmKES_SetPoint_Payload tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__as(STACK_FRAME void *this) {
  if (tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__is(CALLER this)) return (tc_TempControlMixedSeL4CAmKES_SetPoint_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixedSeL4CAmKES.SetPoint_Payload.");
  abort();
}

void tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_SetPoint_Payload this, tc_TempControlMixedSeL4CAmKES_SetPoint value);

#ifdef __cplusplus
}
#endif

#endif