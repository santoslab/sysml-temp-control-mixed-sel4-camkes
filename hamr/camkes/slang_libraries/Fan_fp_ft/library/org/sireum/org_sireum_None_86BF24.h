#ifndef SIREUM_H_org_sireum_None_86BF24
#define SIREUM_H_org_sireum_None_86BF24

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]


B None_86BF24__eq(None_86BF24 this, None_86BF24 other);
inline B None_86BF24__ne(None_86BF24 this, None_86BF24 other) {
  return !None_86BF24__eq(this, other);
};
B None_86BF24__equiv(None_86BF24 this, None_86BF24 other);
inline B None_86BF24__inequiv(None_86BF24 this, None_86BF24 other) {
  return !None_86BF24__equiv(this, other);
};
void None_86BF24_string_(STACK_FRAME String result, None_86BF24 this);
void None_86BF24_cprint(None_86BF24 this, B isOut);

inline B None_86BF24__is(STACK_FRAME void* this) {
  return ((None_86BF24) this)->type == TNone_86BF24;
}

inline None_86BF24 None_86BF24__as(STACK_FRAME void *this) {
  if (None_86BF24__is(CALLER this)) return (None_86BF24) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.TempUnit.Type].");
  abort();
}

void None_86BF24_apply(STACK_FRAME None_86BF24 this);

#ifdef __cplusplus
}
#endif

#endif