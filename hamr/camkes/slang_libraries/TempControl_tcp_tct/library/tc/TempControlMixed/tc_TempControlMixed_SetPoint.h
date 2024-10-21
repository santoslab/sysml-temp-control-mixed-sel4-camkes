#ifndef SIREUM_H_tc_TempControlMixed_SetPoint
#define SIREUM_H_tc_TempControlMixed_SetPoint

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixed.SetPoint

#define tc_TempControlMixed_SetPoint_low_(this) ((tc_TempControlMixed_Temperature) &(this)->low)
#define tc_TempControlMixed_SetPoint_high_(this) ((tc_TempControlMixed_Temperature) &(this)->high)

B tc_TempControlMixed_SetPoint__eq(tc_TempControlMixed_SetPoint this, tc_TempControlMixed_SetPoint other);
inline B tc_TempControlMixed_SetPoint__ne(tc_TempControlMixed_SetPoint this, tc_TempControlMixed_SetPoint other) {
  return !tc_TempControlMixed_SetPoint__eq(this, other);
};
B tc_TempControlMixed_SetPoint__equiv(tc_TempControlMixed_SetPoint this, tc_TempControlMixed_SetPoint other);
inline B tc_TempControlMixed_SetPoint__inequiv(tc_TempControlMixed_SetPoint this, tc_TempControlMixed_SetPoint other) {
  return !tc_TempControlMixed_SetPoint__equiv(this, other);
};
void tc_TempControlMixed_SetPoint_string_(STACK_FRAME String result, tc_TempControlMixed_SetPoint this);
void tc_TempControlMixed_SetPoint_cprint(tc_TempControlMixed_SetPoint this, B isOut);

inline B tc_TempControlMixed_SetPoint__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixed_SetPoint) this)->type == Ttc_TempControlMixed_SetPoint;
}

inline tc_TempControlMixed_SetPoint tc_TempControlMixed_SetPoint__as(STACK_FRAME void *this) {
  if (tc_TempControlMixed_SetPoint__is(CALLER this)) return (tc_TempControlMixed_SetPoint) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixed.SetPoint.");
  abort();
}

void tc_TempControlMixed_SetPoint_apply(STACK_FRAME tc_TempControlMixed_SetPoint this, tc_TempControlMixed_Temperature low, tc_TempControlMixed_Temperature high);

void tc_TempControlMixed_SetPoint_example(STACK_FRAME tc_TempControlMixed_SetPoint result);

#ifdef __cplusplus
}
#endif

#endif