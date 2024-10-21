#ifndef SIREUM_H_org_sireum_None_40E880
#define SIREUM_H_org_sireum_None_40E880

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.Temperature]


B None_40E880__eq(None_40E880 this, None_40E880 other);
inline B None_40E880__ne(None_40E880 this, None_40E880 other) {
  return !None_40E880__eq(this, other);
};
B None_40E880__equiv(None_40E880 this, None_40E880 other);
inline B None_40E880__inequiv(None_40E880 this, None_40E880 other) {
  return !None_40E880__equiv(this, other);
};
void None_40E880_string_(STACK_FRAME String result, None_40E880 this);
void None_40E880_cprint(None_40E880 this, B isOut);

inline B None_40E880__is(STACK_FRAME void* this) {
  return ((None_40E880) this)->type == TNone_40E880;
}

inline None_40E880 None_40E880__as(STACK_FRAME void *this) {
  if (None_40E880__is(CALLER this)) return (None_40E880) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.Temperature].");
  abort();
}

void None_40E880_apply(STACK_FRAME None_40E880 this);

#ifdef __cplusplus
}
#endif

#endif