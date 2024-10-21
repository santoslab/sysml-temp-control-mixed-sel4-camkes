#ifndef SIREUM_H_tc_TempControlMixed_FanAck_Payload
#define SIREUM_H_tc_TempControlMixed_FanAck_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixed.FanAck_Payload

#define tc_TempControlMixed_FanAck_Payload_value_(this) ((this)->value)

B tc_TempControlMixed_FanAck_Payload__eq(tc_TempControlMixed_FanAck_Payload this, tc_TempControlMixed_FanAck_Payload other);
inline B tc_TempControlMixed_FanAck_Payload__ne(tc_TempControlMixed_FanAck_Payload this, tc_TempControlMixed_FanAck_Payload other) {
  return !tc_TempControlMixed_FanAck_Payload__eq(this, other);
};
B tc_TempControlMixed_FanAck_Payload__equiv(tc_TempControlMixed_FanAck_Payload this, tc_TempControlMixed_FanAck_Payload other);
inline B tc_TempControlMixed_FanAck_Payload__inequiv(tc_TempControlMixed_FanAck_Payload this, tc_TempControlMixed_FanAck_Payload other) {
  return !tc_TempControlMixed_FanAck_Payload__equiv(this, other);
};
void tc_TempControlMixed_FanAck_Payload_string_(STACK_FRAME String result, tc_TempControlMixed_FanAck_Payload this);
void tc_TempControlMixed_FanAck_Payload_cprint(tc_TempControlMixed_FanAck_Payload this, B isOut);

inline B tc_TempControlMixed_FanAck_Payload__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixed_FanAck_Payload) this)->type == Ttc_TempControlMixed_FanAck_Payload;
}

inline tc_TempControlMixed_FanAck_Payload tc_TempControlMixed_FanAck_Payload__as(STACK_FRAME void *this) {
  if (tc_TempControlMixed_FanAck_Payload__is(CALLER this)) return (tc_TempControlMixed_FanAck_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixed.FanAck_Payload.");
  abort();
}

void tc_TempControlMixed_FanAck_Payload_apply(STACK_FRAME tc_TempControlMixed_FanAck_Payload this, tc_TempControlMixed_FanAck_Type value);

#ifdef __cplusplus
}
#endif

#endif