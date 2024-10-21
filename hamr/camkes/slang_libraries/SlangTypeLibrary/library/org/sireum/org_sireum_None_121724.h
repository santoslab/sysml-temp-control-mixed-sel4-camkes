#ifndef SIREUM_H_org_sireum_None_121724
#define SIREUM_H_org_sireum_None_121724

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixed.TempUnit.Type]


B None_121724__eq(None_121724 this, None_121724 other);
inline B None_121724__ne(None_121724 this, None_121724 other) {
  return !None_121724__eq(this, other);
};
B None_121724__equiv(None_121724 this, None_121724 other);
inline B None_121724__inequiv(None_121724 this, None_121724 other) {
  return !None_121724__equiv(this, other);
};
void None_121724_string_(STACK_FRAME String result, None_121724 this);
void None_121724_cprint(None_121724 this, B isOut);

inline B None_121724__is(STACK_FRAME void* this) {
  return ((None_121724) this)->type == TNone_121724;
}

inline None_121724 None_121724__as(STACK_FRAME void *this) {
  if (None_121724__is(CALLER this)) return (None_121724) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixed.TempUnit.Type].");
  abort();
}

void None_121724_apply(STACK_FRAME None_121724 this);

#ifdef __cplusplus
}
#endif

#endif