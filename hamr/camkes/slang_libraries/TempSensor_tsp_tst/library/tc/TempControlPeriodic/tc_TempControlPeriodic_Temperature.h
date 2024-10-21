#ifndef SIREUM_H_tc_TempControlPeriodic_Temperature
#define SIREUM_H_tc_TempControlPeriodic_Temperature

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlPeriodic.Temperature

#define tc_TempControlPeriodic_Temperature_degrees_(this) ((this)->degrees)
#define tc_TempControlPeriodic_Temperature_unit_(this) ((this)->unit)

B tc_TempControlPeriodic_Temperature__eq(tc_TempControlPeriodic_Temperature this, tc_TempControlPeriodic_Temperature other);
inline B tc_TempControlPeriodic_Temperature__ne(tc_TempControlPeriodic_Temperature this, tc_TempControlPeriodic_Temperature other) {
  return !tc_TempControlPeriodic_Temperature__eq(this, other);
};
B tc_TempControlPeriodic_Temperature__equiv(tc_TempControlPeriodic_Temperature this, tc_TempControlPeriodic_Temperature other);
inline B tc_TempControlPeriodic_Temperature__inequiv(tc_TempControlPeriodic_Temperature this, tc_TempControlPeriodic_Temperature other) {
  return !tc_TempControlPeriodic_Temperature__equiv(this, other);
};
void tc_TempControlPeriodic_Temperature_string_(STACK_FRAME String result, tc_TempControlPeriodic_Temperature this);
void tc_TempControlPeriodic_Temperature_cprint(tc_TempControlPeriodic_Temperature this, B isOut);

inline B tc_TempControlPeriodic_Temperature__is(STACK_FRAME void* this) {
  return ((tc_TempControlPeriodic_Temperature) this)->type == Ttc_TempControlPeriodic_Temperature;
}

inline tc_TempControlPeriodic_Temperature tc_TempControlPeriodic_Temperature__as(STACK_FRAME void *this) {
  if (tc_TempControlPeriodic_Temperature__is(CALLER this)) return (tc_TempControlPeriodic_Temperature) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlPeriodic.Temperature.");
  abort();
}

void tc_TempControlPeriodic_Temperature_apply(STACK_FRAME tc_TempControlPeriodic_Temperature this, F32 degrees, tc_TempControlPeriodic_TempUnit_Type unit);

void tc_TempControlPeriodic_Temperature_example(STACK_FRAME tc_TempControlPeriodic_Temperature result);

#ifdef __cplusplus
}
#endif

#endif