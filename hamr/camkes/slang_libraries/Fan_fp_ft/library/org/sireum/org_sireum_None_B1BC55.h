#ifndef SIREUM_H_org_sireum_None_B1BC55
#define SIREUM_H_org_sireum_None_B1BC55

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api]


B None_B1BC55__eq(None_B1BC55 this, None_B1BC55 other);
inline B None_B1BC55__ne(None_B1BC55 this, None_B1BC55 other) {
  return !None_B1BC55__eq(this, other);
};
B None_B1BC55__equiv(None_B1BC55 this, None_B1BC55 other);
inline B None_B1BC55__inequiv(None_B1BC55 this, None_B1BC55 other) {
  return !None_B1BC55__equiv(this, other);
};
void None_B1BC55_string_(STACK_FRAME String result, None_B1BC55 this);
void None_B1BC55_cprint(None_B1BC55 this, B isOut);

inline B None_B1BC55__is(STACK_FRAME void* this) {
  return ((None_B1BC55) this)->type == TNone_B1BC55;
}

inline None_B1BC55 None_B1BC55__as(STACK_FRAME void *this) {
  if (None_B1BC55__is(CALLER this)) return (None_B1BC55) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api].");
  abort();
}

void None_B1BC55_apply(STACK_FRAME None_B1BC55 this);

#ifdef __cplusplus
}
#endif

#endif