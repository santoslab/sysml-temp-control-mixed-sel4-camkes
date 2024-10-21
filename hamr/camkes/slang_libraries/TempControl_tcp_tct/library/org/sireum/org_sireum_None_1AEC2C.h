#ifndef SIREUM_H_org_sireum_None_1AEC2C
#define SIREUM_H_org_sireum_None_1AEC2C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixed.FanCmd.Type]


B None_1AEC2C__eq(None_1AEC2C this, None_1AEC2C other);
inline B None_1AEC2C__ne(None_1AEC2C this, None_1AEC2C other) {
  return !None_1AEC2C__eq(this, other);
};
B None_1AEC2C__equiv(None_1AEC2C this, None_1AEC2C other);
inline B None_1AEC2C__inequiv(None_1AEC2C this, None_1AEC2C other) {
  return !None_1AEC2C__equiv(this, other);
};
void None_1AEC2C_string_(STACK_FRAME String result, None_1AEC2C this);
void None_1AEC2C_cprint(None_1AEC2C this, B isOut);

inline B None_1AEC2C__is(STACK_FRAME void* this) {
  return ((None_1AEC2C) this)->type == TNone_1AEC2C;
}

inline None_1AEC2C None_1AEC2C__as(STACK_FRAME void *this) {
  if (None_1AEC2C__is(CALLER this)) return (None_1AEC2C) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixed.FanCmd.Type].");
  abort();
}

void None_1AEC2C_apply(STACK_FRAME None_1AEC2C this);

#ifdef __cplusplus
}
#endif

#endif