#ifndef SIREUM_H_tc_TempControlMixedSeL4CAmKES_Temperature
#define SIREUM_H_tc_TempControlMixedSeL4CAmKES_Temperature

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixedSeL4CAmKES.Temperature

#define tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(this) ((this)->degrees)
#define tc_TempControlMixedSeL4CAmKES_Temperature_unit_(this) ((this)->unit)

B tc_TempControlMixedSeL4CAmKES_Temperature__eq(tc_TempControlMixedSeL4CAmKES_Temperature this, tc_TempControlMixedSeL4CAmKES_Temperature other);
inline B tc_TempControlMixedSeL4CAmKES_Temperature__ne(tc_TempControlMixedSeL4CAmKES_Temperature this, tc_TempControlMixedSeL4CAmKES_Temperature other) {
  return !tc_TempControlMixedSeL4CAmKES_Temperature__eq(this, other);
};
B tc_TempControlMixedSeL4CAmKES_Temperature__equiv(tc_TempControlMixedSeL4CAmKES_Temperature this, tc_TempControlMixedSeL4CAmKES_Temperature other);
inline B tc_TempControlMixedSeL4CAmKES_Temperature__inequiv(tc_TempControlMixedSeL4CAmKES_Temperature this, tc_TempControlMixedSeL4CAmKES_Temperature other) {
  return !tc_TempControlMixedSeL4CAmKES_Temperature__equiv(this, other);
};
void tc_TempControlMixedSeL4CAmKES_Temperature_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_Temperature this);
void tc_TempControlMixedSeL4CAmKES_Temperature_cprint(tc_TempControlMixedSeL4CAmKES_Temperature this, B isOut);

inline B tc_TempControlMixedSeL4CAmKES_Temperature__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixedSeL4CAmKES_Temperature) this)->type == Ttc_TempControlMixedSeL4CAmKES_Temperature;
}

inline tc_TempControlMixedSeL4CAmKES_Temperature tc_TempControlMixedSeL4CAmKES_Temperature__as(STACK_FRAME void *this) {
  if (tc_TempControlMixedSeL4CAmKES_Temperature__is(CALLER this)) return (tc_TempControlMixedSeL4CAmKES_Temperature) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixedSeL4CAmKES.Temperature.");
  abort();
}

void tc_TempControlMixedSeL4CAmKES_Temperature_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature this, F32 degrees, tc_TempControlMixedSeL4CAmKES_TempUnit_Type unit);

void tc_TempControlMixedSeL4CAmKES_Temperature_example(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature result);

#ifdef __cplusplus
}
#endif

#endif