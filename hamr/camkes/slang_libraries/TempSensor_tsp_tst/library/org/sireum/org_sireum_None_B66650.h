#ifndef SIREUM_H_org_sireum_None_B66650
#define SIREUM_H_org_sireum_None_B66650

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]


B None_B66650__eq(None_B66650 this, None_B66650 other);
inline B None_B66650__ne(None_B66650 this, None_B66650 other) {
  return !None_B66650__eq(this, other);
};
B None_B66650__equiv(None_B66650 this, None_B66650 other);
inline B None_B66650__inequiv(None_B66650 this, None_B66650 other) {
  return !None_B66650__equiv(this, other);
};
void None_B66650_string_(STACK_FRAME String result, None_B66650 this);
void None_B66650_cprint(None_B66650 this, B isOut);

inline B None_B66650__is(STACK_FRAME void* this) {
  return ((None_B66650) this)->type == TNone_B66650;
}

inline None_B66650 None_B66650__as(STACK_FRAME void *this) {
  if (None_B66650__is(CALLER this)) return (None_B66650) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api].");
  abort();
}

void None_B66650_apply(STACK_FRAME None_B66650 this);

#ifdef __cplusplus
}
#endif

#endif