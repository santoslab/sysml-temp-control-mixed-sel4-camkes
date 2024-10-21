#ifndef SIREUM_H_org_sireum_None_BB3A66
#define SIREUM_H_org_sireum_None_BB3A66

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]


B None_BB3A66__eq(None_BB3A66 this, None_BB3A66 other);
inline B None_BB3A66__ne(None_BB3A66 this, None_BB3A66 other) {
  return !None_BB3A66__eq(this, other);
};
B None_BB3A66__equiv(None_BB3A66 this, None_BB3A66 other);
inline B None_BB3A66__inequiv(None_BB3A66 this, None_BB3A66 other) {
  return !None_BB3A66__equiv(this, other);
};
void None_BB3A66_string_(STACK_FRAME String result, None_BB3A66 this);
void None_BB3A66_cprint(None_BB3A66 this, B isOut);

inline B None_BB3A66__is(STACK_FRAME void* this) {
  return ((None_BB3A66) this)->type == TNone_BB3A66;
}

inline None_BB3A66 None_BB3A66__as(STACK_FRAME void *this) {
  if (None_BB3A66__is(CALLER this)) return (None_BB3A66) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api].");
  abort();
}

void None_BB3A66_apply(STACK_FRAME None_BB3A66 this);

#ifdef __cplusplus
}
#endif

#endif