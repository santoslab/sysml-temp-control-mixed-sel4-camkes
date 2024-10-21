#ifndef SIREUM_H_org_sireum_None_79FC20
#define SIREUM_H_org_sireum_None_79FC20

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]


B None_79FC20__eq(None_79FC20 this, None_79FC20 other);
inline B None_79FC20__ne(None_79FC20 this, None_79FC20 other) {
  return !None_79FC20__eq(this, other);
};
B None_79FC20__equiv(None_79FC20 this, None_79FC20 other);
inline B None_79FC20__inequiv(None_79FC20 this, None_79FC20 other) {
  return !None_79FC20__equiv(this, other);
};
void None_79FC20_string_(STACK_FRAME String result, None_79FC20 this);
void None_79FC20_cprint(None_79FC20 this, B isOut);

inline B None_79FC20__is(STACK_FRAME void* this) {
  return ((None_79FC20) this)->type == TNone_79FC20;
}

inline None_79FC20 None_79FC20__as(STACK_FRAME void *this) {
  if (None_79FC20__is(CALLER this)) return (None_79FC20) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api].");
  abort();
}

void None_79FC20_apply(STACK_FRAME None_79FC20 this);

#ifdef __cplusplus
}
#endif

#endif