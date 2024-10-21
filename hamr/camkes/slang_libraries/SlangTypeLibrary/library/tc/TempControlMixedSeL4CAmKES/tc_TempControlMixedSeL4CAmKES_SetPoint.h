#ifndef SIREUM_H_tc_TempControlMixedSeL4CAmKES_SetPoint
#define SIREUM_H_tc_TempControlMixedSeL4CAmKES_SetPoint

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixedSeL4CAmKES.SetPoint

#define tc_TempControlMixedSeL4CAmKES_SetPoint_low_(this) ((tc_TempControlMixedSeL4CAmKES_Temperature) &(this)->low)
#define tc_TempControlMixedSeL4CAmKES_SetPoint_high_(this) ((tc_TempControlMixedSeL4CAmKES_Temperature) &(this)->high)

B tc_TempControlMixedSeL4CAmKES_SetPoint__eq(tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_SetPoint other);
inline B tc_TempControlMixedSeL4CAmKES_SetPoint__ne(tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_SetPoint other) {
  return !tc_TempControlMixedSeL4CAmKES_SetPoint__eq(this, other);
};
B tc_TempControlMixedSeL4CAmKES_SetPoint__equiv(tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_SetPoint other);
inline B tc_TempControlMixedSeL4CAmKES_SetPoint__inequiv(tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_SetPoint other) {
  return !tc_TempControlMixedSeL4CAmKES_SetPoint__equiv(this, other);
};
void tc_TempControlMixedSeL4CAmKES_SetPoint_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_SetPoint this);
void tc_TempControlMixedSeL4CAmKES_SetPoint_cprint(tc_TempControlMixedSeL4CAmKES_SetPoint this, B isOut);

inline B tc_TempControlMixedSeL4CAmKES_SetPoint__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixedSeL4CAmKES_SetPoint) this)->type == Ttc_TempControlMixedSeL4CAmKES_SetPoint;
}

inline tc_TempControlMixedSeL4CAmKES_SetPoint tc_TempControlMixedSeL4CAmKES_SetPoint__as(STACK_FRAME void *this) {
  if (tc_TempControlMixedSeL4CAmKES_SetPoint__is(CALLER this)) return (tc_TempControlMixedSeL4CAmKES_SetPoint) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixedSeL4CAmKES.SetPoint.");
  abort();
}

void tc_TempControlMixedSeL4CAmKES_SetPoint_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_SetPoint this, tc_TempControlMixedSeL4CAmKES_Temperature low, tc_TempControlMixedSeL4CAmKES_Temperature high);

void tc_TempControlMixedSeL4CAmKES_SetPoint_example(STACK_FRAME tc_TempControlMixedSeL4CAmKES_SetPoint result);

#ifdef __cplusplus
}
#endif

#endif