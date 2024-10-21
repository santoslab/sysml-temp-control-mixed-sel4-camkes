#ifndef SIREUM_H_org_sireum_None_B4A4FA
#define SIREUM_H_org_sireum_None_B4A4FA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixed.FanAck.Type]


B None_B4A4FA__eq(None_B4A4FA this, None_B4A4FA other);
inline B None_B4A4FA__ne(None_B4A4FA this, None_B4A4FA other) {
  return !None_B4A4FA__eq(this, other);
};
B None_B4A4FA__equiv(None_B4A4FA this, None_B4A4FA other);
inline B None_B4A4FA__inequiv(None_B4A4FA this, None_B4A4FA other) {
  return !None_B4A4FA__equiv(this, other);
};
void None_B4A4FA_string_(STACK_FRAME String result, None_B4A4FA this);
void None_B4A4FA_cprint(None_B4A4FA this, B isOut);

inline B None_B4A4FA__is(STACK_FRAME void* this) {
  return ((None_B4A4FA) this)->type == TNone_B4A4FA;
}

inline None_B4A4FA None_B4A4FA__as(STACK_FRAME void *this) {
  if (None_B4A4FA__is(CALLER this)) return (None_B4A4FA) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixed.FanAck.Type].");
  abort();
}

void None_B4A4FA_apply(STACK_FRAME None_B4A4FA this);

#ifdef __cplusplus
}
#endif

#endif