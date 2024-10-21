#ifndef SIREUM_H_tc_TempControlPeriodic_SetPoint
#define SIREUM_H_tc_TempControlPeriodic_SetPoint

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlPeriodic.SetPoint

#define tc_TempControlPeriodic_SetPoint_low_(this) ((tc_TempControlPeriodic_Temperature) &(this)->low)
#define tc_TempControlPeriodic_SetPoint_high_(this) ((tc_TempControlPeriodic_Temperature) &(this)->high)

B tc_TempControlPeriodic_SetPoint__eq(tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_SetPoint other);
inline B tc_TempControlPeriodic_SetPoint__ne(tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_SetPoint other) {
  return !tc_TempControlPeriodic_SetPoint__eq(this, other);
};
B tc_TempControlPeriodic_SetPoint__equiv(tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_SetPoint other);
inline B tc_TempControlPeriodic_SetPoint__inequiv(tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_SetPoint other) {
  return !tc_TempControlPeriodic_SetPoint__equiv(this, other);
};
void tc_TempControlPeriodic_SetPoint_string_(STACK_FRAME String result, tc_TempControlPeriodic_SetPoint this);
void tc_TempControlPeriodic_SetPoint_cprint(tc_TempControlPeriodic_SetPoint this, B isOut);

inline B tc_TempControlPeriodic_SetPoint__is(STACK_FRAME void* this) {
  return ((tc_TempControlPeriodic_SetPoint) this)->type == Ttc_TempControlPeriodic_SetPoint;
}

inline tc_TempControlPeriodic_SetPoint tc_TempControlPeriodic_SetPoint__as(STACK_FRAME void *this) {
  if (tc_TempControlPeriodic_SetPoint__is(CALLER this)) return (tc_TempControlPeriodic_SetPoint) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlPeriodic.SetPoint.");
  abort();
}

void tc_TempControlPeriodic_SetPoint_apply(STACK_FRAME tc_TempControlPeriodic_SetPoint this, tc_TempControlPeriodic_Temperature low, tc_TempControlPeriodic_Temperature high);

void tc_TempControlPeriodic_SetPoint_example(STACK_FRAME tc_TempControlPeriodic_SetPoint result);

#ifdef __cplusplus
}
#endif

#endif