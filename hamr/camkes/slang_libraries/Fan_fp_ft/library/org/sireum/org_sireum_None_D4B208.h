#ifndef SIREUM_H_org_sireum_None_D4B208
#define SIREUM_H_org_sireum_None_D4B208

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlPeriodic.FanAck.Type]


B None_D4B208__eq(None_D4B208 this, None_D4B208 other);
inline B None_D4B208__ne(None_D4B208 this, None_D4B208 other) {
  return !None_D4B208__eq(this, other);
};
B None_D4B208__equiv(None_D4B208 this, None_D4B208 other);
inline B None_D4B208__inequiv(None_D4B208 this, None_D4B208 other) {
  return !None_D4B208__equiv(this, other);
};
void None_D4B208_string_(STACK_FRAME String result, None_D4B208 this);
void None_D4B208_cprint(None_D4B208 this, B isOut);

inline B None_D4B208__is(STACK_FRAME void* this) {
  return ((None_D4B208) this)->type == TNone_D4B208;
}

inline None_D4B208 None_D4B208__as(STACK_FRAME void *this) {
  if (None_D4B208__is(CALLER this)) return (None_D4B208) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlPeriodic.FanAck.Type].");
  abort();
}

void None_D4B208_apply(STACK_FRAME None_D4B208 this);

#ifdef __cplusplus
}
#endif

#endif