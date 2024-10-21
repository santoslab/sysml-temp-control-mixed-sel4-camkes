#ifndef SIREUM_H_tc_TempControlPeriodic_Temperature_Payload
#define SIREUM_H_tc_TempControlPeriodic_Temperature_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlPeriodic.Temperature_Payload

#define tc_TempControlPeriodic_Temperature_Payload_value_(this) ((tc_TempControlPeriodic_Temperature) &(this)->value)

B tc_TempControlPeriodic_Temperature_Payload__eq(tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature_Payload other);
inline B tc_TempControlPeriodic_Temperature_Payload__ne(tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature_Payload other) {
  return !tc_TempControlPeriodic_Temperature_Payload__eq(this, other);
};
B tc_TempControlPeriodic_Temperature_Payload__equiv(tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature_Payload other);
inline B tc_TempControlPeriodic_Temperature_Payload__inequiv(tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature_Payload other) {
  return !tc_TempControlPeriodic_Temperature_Payload__equiv(this, other);
};
void tc_TempControlPeriodic_Temperature_Payload_string_(STACK_FRAME String result, tc_TempControlPeriodic_Temperature_Payload this);
void tc_TempControlPeriodic_Temperature_Payload_cprint(tc_TempControlPeriodic_Temperature_Payload this, B isOut);

inline B tc_TempControlPeriodic_Temperature_Payload__is(STACK_FRAME void* this) {
  return ((tc_TempControlPeriodic_Temperature_Payload) this)->type == Ttc_TempControlPeriodic_Temperature_Payload;
}

inline tc_TempControlPeriodic_Temperature_Payload tc_TempControlPeriodic_Temperature_Payload__as(STACK_FRAME void *this) {
  if (tc_TempControlPeriodic_Temperature_Payload__is(CALLER this)) return (tc_TempControlPeriodic_Temperature_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlPeriodic.Temperature_Payload.");
  abort();
}

void tc_TempControlPeriodic_Temperature_Payload_apply(STACK_FRAME tc_TempControlPeriodic_Temperature_Payload this, tc_TempControlPeriodic_Temperature value);

#ifdef __cplusplus
}
#endif

#endif