#ifndef SIREUM_H_org_sireum_None_F8CCDD
#define SIREUM_H_org_sireum_None_F8CCDD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api]


B None_F8CCDD__eq(None_F8CCDD this, None_F8CCDD other);
inline B None_F8CCDD__ne(None_F8CCDD this, None_F8CCDD other) {
  return !None_F8CCDD__eq(this, other);
};
B None_F8CCDD__equiv(None_F8CCDD this, None_F8CCDD other);
inline B None_F8CCDD__inequiv(None_F8CCDD this, None_F8CCDD other) {
  return !None_F8CCDD__equiv(this, other);
};
void None_F8CCDD_string_(STACK_FRAME String result, None_F8CCDD this);
void None_F8CCDD_cprint(None_F8CCDD this, B isOut);

inline B None_F8CCDD__is(STACK_FRAME void* this) {
  return ((None_F8CCDD) this)->type == TNone_F8CCDD;
}

inline None_F8CCDD None_F8CCDD__as(STACK_FRAME void *this) {
  if (None_F8CCDD__is(CALLER this)) return (None_F8CCDD) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api].");
  abort();
}

void None_F8CCDD_apply(STACK_FRAME None_F8CCDD this);

#ifdef __cplusplus
}
#endif

#endif