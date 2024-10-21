#ifndef SIREUM_H_org_sireum_None_30CA2A
#define SIREUM_H_org_sireum_None_30CA2A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.SetPoint]


B None_30CA2A__eq(None_30CA2A this, None_30CA2A other);
inline B None_30CA2A__ne(None_30CA2A this, None_30CA2A other) {
  return !None_30CA2A__eq(this, other);
};
B None_30CA2A__equiv(None_30CA2A this, None_30CA2A other);
inline B None_30CA2A__inequiv(None_30CA2A this, None_30CA2A other) {
  return !None_30CA2A__equiv(this, other);
};
void None_30CA2A_string_(STACK_FRAME String result, None_30CA2A this);
void None_30CA2A_cprint(None_30CA2A this, B isOut);

inline B None_30CA2A__is(STACK_FRAME void* this) {
  return ((None_30CA2A) this)->type == TNone_30CA2A;
}

inline None_30CA2A None_30CA2A__as(STACK_FRAME void *this) {
  if (None_30CA2A__is(CALLER this)) return (None_30CA2A) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.SetPoint].");
  abort();
}

void None_30CA2A_apply(STACK_FRAME None_30CA2A this);

#ifdef __cplusplus
}
#endif

#endif