#ifndef SIREUM_H_tc_TempControlMixed_Temperature_Payload
#define SIREUM_H_tc_TempControlMixed_Temperature_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixed.Temperature_Payload

#define tc_TempControlMixed_Temperature_Payload_value_(this) ((tc_TempControlMixed_Temperature) &(this)->value)

B tc_TempControlMixed_Temperature_Payload__eq(tc_TempControlMixed_Temperature_Payload this, tc_TempControlMixed_Temperature_Payload other);
inline B tc_TempControlMixed_Temperature_Payload__ne(tc_TempControlMixed_Temperature_Payload this, tc_TempControlMixed_Temperature_Payload other) {
  return !tc_TempControlMixed_Temperature_Payload__eq(this, other);
};
B tc_TempControlMixed_Temperature_Payload__equiv(tc_TempControlMixed_Temperature_Payload this, tc_TempControlMixed_Temperature_Payload other);
inline B tc_TempControlMixed_Temperature_Payload__inequiv(tc_TempControlMixed_Temperature_Payload this, tc_TempControlMixed_Temperature_Payload other) {
  return !tc_TempControlMixed_Temperature_Payload__equiv(this, other);
};
void tc_TempControlMixed_Temperature_Payload_string_(STACK_FRAME String result, tc_TempControlMixed_Temperature_Payload this);
void tc_TempControlMixed_Temperature_Payload_cprint(tc_TempControlMixed_Temperature_Payload this, B isOut);

inline B tc_TempControlMixed_Temperature_Payload__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixed_Temperature_Payload) this)->type == Ttc_TempControlMixed_Temperature_Payload;
}

inline tc_TempControlMixed_Temperature_Payload tc_TempControlMixed_Temperature_Payload__as(STACK_FRAME void *this) {
  if (tc_TempControlMixed_Temperature_Payload__is(CALLER this)) return (tc_TempControlMixed_Temperature_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixed.Temperature_Payload.");
  abort();
}

void tc_TempControlMixed_Temperature_Payload_apply(STACK_FRAME tc_TempControlMixed_Temperature_Payload this, tc_TempControlMixed_Temperature value);

#ifdef __cplusplus
}
#endif

#endif