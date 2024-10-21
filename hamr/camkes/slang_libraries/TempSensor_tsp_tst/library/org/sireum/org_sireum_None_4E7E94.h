#ifndef SIREUM_H_org_sireum_None_4E7E94
#define SIREUM_H_org_sireum_None_4E7E94

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlPeriodic.TempUnit.Type]


B None_4E7E94__eq(None_4E7E94 this, None_4E7E94 other);
inline B None_4E7E94__ne(None_4E7E94 this, None_4E7E94 other) {
  return !None_4E7E94__eq(this, other);
};
B None_4E7E94__equiv(None_4E7E94 this, None_4E7E94 other);
inline B None_4E7E94__inequiv(None_4E7E94 this, None_4E7E94 other) {
  return !None_4E7E94__equiv(this, other);
};
void None_4E7E94_string_(STACK_FRAME String result, None_4E7E94 this);
void None_4E7E94_cprint(None_4E7E94 this, B isOut);

inline B None_4E7E94__is(STACK_FRAME void* this) {
  return ((None_4E7E94) this)->type == TNone_4E7E94;
}

inline None_4E7E94 None_4E7E94__as(STACK_FRAME void *this) {
  if (None_4E7E94__is(CALLER this)) return (None_4E7E94) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlPeriodic.TempUnit.Type].");
  abort();
}

void None_4E7E94_apply(STACK_FRAME None_4E7E94 this);

#ifdef __cplusplus
}
#endif

#endif