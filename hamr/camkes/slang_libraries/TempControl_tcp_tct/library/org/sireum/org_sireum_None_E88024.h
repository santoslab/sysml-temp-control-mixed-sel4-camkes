#ifndef SIREUM_H_org_sireum_None_E88024
#define SIREUM_H_org_sireum_None_E88024

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]


B None_E88024__eq(None_E88024 this, None_E88024 other);
inline B None_E88024__ne(None_E88024 this, None_E88024 other) {
  return !None_E88024__eq(this, other);
};
B None_E88024__equiv(None_E88024 this, None_E88024 other);
inline B None_E88024__inequiv(None_E88024 this, None_E88024 other) {
  return !None_E88024__equiv(this, other);
};
void None_E88024_string_(STACK_FRAME String result, None_E88024 this);
void None_E88024_cprint(None_E88024 this, B isOut);

inline B None_E88024__is(STACK_FRAME void* this) {
  return ((None_E88024) this)->type == TNone_E88024;
}

inline None_E88024 None_E88024__as(STACK_FRAME void *this) {
  if (None_E88024__is(CALLER this)) return (None_E88024) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api].");
  abort();
}

void None_E88024_apply(STACK_FRAME None_E88024 this);

#ifdef __cplusplus
}
#endif

#endif