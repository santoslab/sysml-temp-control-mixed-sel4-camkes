#ifndef SIREUM_H_org_sireum_None_ACDB63
#define SIREUM_H_org_sireum_None_ACDB63

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]


B None_ACDB63__eq(None_ACDB63 this, None_ACDB63 other);
inline B None_ACDB63__ne(None_ACDB63 this, None_ACDB63 other) {
  return !None_ACDB63__eq(this, other);
};
B None_ACDB63__equiv(None_ACDB63 this, None_ACDB63 other);
inline B None_ACDB63__inequiv(None_ACDB63 this, None_ACDB63 other) {
  return !None_ACDB63__equiv(this, other);
};
void None_ACDB63_string_(STACK_FRAME String result, None_ACDB63 this);
void None_ACDB63_cprint(None_ACDB63 this, B isOut);

inline B None_ACDB63__is(STACK_FRAME void* this) {
  return ((None_ACDB63) this)->type == TNone_ACDB63;
}

inline None_ACDB63 None_ACDB63__as(STACK_FRAME void *this) {
  if (None_ACDB63__is(CALLER this)) return (None_ACDB63) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.FanCmd.Type].");
  abort();
}

void None_ACDB63_apply(STACK_FRAME None_ACDB63 this);

#ifdef __cplusplus
}
#endif

#endif