#ifndef SIREUM_H_tc_TempControlMixed_TempUnit_Payload
#define SIREUM_H_tc_TempControlMixed_TempUnit_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixed.TempUnit_Payload

#define tc_TempControlMixed_TempUnit_Payload_value_(this) ((this)->value)

B tc_TempControlMixed_TempUnit_Payload__eq(tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Payload other);
inline B tc_TempControlMixed_TempUnit_Payload__ne(tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Payload other) {
  return !tc_TempControlMixed_TempUnit_Payload__eq(this, other);
};
B tc_TempControlMixed_TempUnit_Payload__equiv(tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Payload other);
inline B tc_TempControlMixed_TempUnit_Payload__inequiv(tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Payload other) {
  return !tc_TempControlMixed_TempUnit_Payload__equiv(this, other);
};
void tc_TempControlMixed_TempUnit_Payload_string_(STACK_FRAME String result, tc_TempControlMixed_TempUnit_Payload this);
void tc_TempControlMixed_TempUnit_Payload_cprint(tc_TempControlMixed_TempUnit_Payload this, B isOut);

inline B tc_TempControlMixed_TempUnit_Payload__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixed_TempUnit_Payload) this)->type == Ttc_TempControlMixed_TempUnit_Payload;
}

inline tc_TempControlMixed_TempUnit_Payload tc_TempControlMixed_TempUnit_Payload__as(STACK_FRAME void *this) {
  if (tc_TempControlMixed_TempUnit_Payload__is(CALLER this)) return (tc_TempControlMixed_TempUnit_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixed.TempUnit_Payload.");
  abort();
}

void tc_TempControlMixed_TempUnit_Payload_apply(STACK_FRAME tc_TempControlMixed_TempUnit_Payload this, tc_TempControlMixed_TempUnit_Type value);

#ifdef __cplusplus
}
#endif

#endif