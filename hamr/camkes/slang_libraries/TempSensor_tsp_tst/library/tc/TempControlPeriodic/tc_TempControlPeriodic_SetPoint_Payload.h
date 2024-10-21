#ifndef SIREUM_H_tc_TempControlPeriodic_SetPoint_Payload
#define SIREUM_H_tc_TempControlPeriodic_SetPoint_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlPeriodic.SetPoint_Payload

#define tc_TempControlPeriodic_SetPoint_Payload_value_(this) ((tc_TempControlPeriodic_SetPoint) &(this)->value)

B tc_TempControlPeriodic_SetPoint_Payload__eq(tc_TempControlPeriodic_SetPoint_Payload this, tc_TempControlPeriodic_SetPoint_Payload other);
inline B tc_TempControlPeriodic_SetPoint_Payload__ne(tc_TempControlPeriodic_SetPoint_Payload this, tc_TempControlPeriodic_SetPoint_Payload other) {
  return !tc_TempControlPeriodic_SetPoint_Payload__eq(this, other);
};
B tc_TempControlPeriodic_SetPoint_Payload__equiv(tc_TempControlPeriodic_SetPoint_Payload this, tc_TempControlPeriodic_SetPoint_Payload other);
inline B tc_TempControlPeriodic_SetPoint_Payload__inequiv(tc_TempControlPeriodic_SetPoint_Payload this, tc_TempControlPeriodic_SetPoint_Payload other) {
  return !tc_TempControlPeriodic_SetPoint_Payload__equiv(this, other);
};
void tc_TempControlPeriodic_SetPoint_Payload_string_(STACK_FRAME String result, tc_TempControlPeriodic_SetPoint_Payload this);
void tc_TempControlPeriodic_SetPoint_Payload_cprint(tc_TempControlPeriodic_SetPoint_Payload this, B isOut);

inline B tc_TempControlPeriodic_SetPoint_Payload__is(STACK_FRAME void* this) {
  return ((tc_TempControlPeriodic_SetPoint_Payload) this)->type == Ttc_TempControlPeriodic_SetPoint_Payload;
}

inline tc_TempControlPeriodic_SetPoint_Payload tc_TempControlPeriodic_SetPoint_Payload__as(STACK_FRAME void *this) {
  if (tc_TempControlPeriodic_SetPoint_Payload__is(CALLER this)) return (tc_TempControlPeriodic_SetPoint_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlPeriodic.SetPoint_Payload.");
  abort();
}

void tc_TempControlPeriodic_SetPoint_Payload_apply(STACK_FRAME tc_TempControlPeriodic_SetPoint_Payload this, tc_TempControlPeriodic_SetPoint value);

#ifdef __cplusplus
}
#endif

#endif