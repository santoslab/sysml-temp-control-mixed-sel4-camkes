#ifndef SIREUM_H_org_sireum_None_037804
#define SIREUM_H_org_sireum_None_037804

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlPeriodic.FanCmd.Type]


B None_037804__eq(None_037804 this, None_037804 other);
inline B None_037804__ne(None_037804 this, None_037804 other) {
  return !None_037804__eq(this, other);
};
B None_037804__equiv(None_037804 this, None_037804 other);
inline B None_037804__inequiv(None_037804 this, None_037804 other) {
  return !None_037804__equiv(this, other);
};
void None_037804_string_(STACK_FRAME String result, None_037804 this);
void None_037804_cprint(None_037804 this, B isOut);

inline B None_037804__is(STACK_FRAME void* this) {
  return ((None_037804) this)->type == TNone_037804;
}

inline None_037804 None_037804__as(STACK_FRAME void *this) {
  if (None_037804__is(CALLER this)) return (None_037804) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlPeriodic.FanCmd.Type].");
  abort();
}

void None_037804_apply(STACK_FRAME None_037804 this);

#ifdef __cplusplus
}
#endif

#endif