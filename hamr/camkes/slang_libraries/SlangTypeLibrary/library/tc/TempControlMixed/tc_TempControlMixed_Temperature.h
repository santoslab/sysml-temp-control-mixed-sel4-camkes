#ifndef SIREUM_H_tc_TempControlMixed_Temperature
#define SIREUM_H_tc_TempControlMixed_Temperature

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixed.Temperature

#define tc_TempControlMixed_Temperature_degrees_(this) ((this)->degrees)
#define tc_TempControlMixed_Temperature_unit_(this) ((this)->unit)

B tc_TempControlMixed_Temperature__eq(tc_TempControlMixed_Temperature this, tc_TempControlMixed_Temperature other);
inline B tc_TempControlMixed_Temperature__ne(tc_TempControlMixed_Temperature this, tc_TempControlMixed_Temperature other) {
  return !tc_TempControlMixed_Temperature__eq(this, other);
};
B tc_TempControlMixed_Temperature__equiv(tc_TempControlMixed_Temperature this, tc_TempControlMixed_Temperature other);
inline B tc_TempControlMixed_Temperature__inequiv(tc_TempControlMixed_Temperature this, tc_TempControlMixed_Temperature other) {
  return !tc_TempControlMixed_Temperature__equiv(this, other);
};
void tc_TempControlMixed_Temperature_string_(STACK_FRAME String result, tc_TempControlMixed_Temperature this);
void tc_TempControlMixed_Temperature_cprint(tc_TempControlMixed_Temperature this, B isOut);

inline B tc_TempControlMixed_Temperature__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixed_Temperature) this)->type == Ttc_TempControlMixed_Temperature;
}

inline tc_TempControlMixed_Temperature tc_TempControlMixed_Temperature__as(STACK_FRAME void *this) {
  if (tc_TempControlMixed_Temperature__is(CALLER this)) return (tc_TempControlMixed_Temperature) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixed.Temperature.");
  abort();
}

void tc_TempControlMixed_Temperature_apply(STACK_FRAME tc_TempControlMixed_Temperature this, F32 degrees, tc_TempControlMixed_TempUnit_Type unit);

void tc_TempControlMixed_Temperature_example(STACK_FRAME tc_TempControlMixed_Temperature result);

#ifdef __cplusplus
}
#endif

#endif