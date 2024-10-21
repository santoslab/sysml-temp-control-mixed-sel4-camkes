#ifndef SIREUM_H_org_sireum_None_A70CEE
#define SIREUM_H_org_sireum_None_A70CEE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.TempControlMixedSeL4CAmKES.FanAck.Type]


B None_A70CEE__eq(None_A70CEE this, None_A70CEE other);
inline B None_A70CEE__ne(None_A70CEE this, None_A70CEE other) {
  return !None_A70CEE__eq(this, other);
};
B None_A70CEE__equiv(None_A70CEE this, None_A70CEE other);
inline B None_A70CEE__inequiv(None_A70CEE this, None_A70CEE other) {
  return !None_A70CEE__equiv(this, other);
};
void None_A70CEE_string_(STACK_FRAME String result, None_A70CEE this);
void None_A70CEE_cprint(None_A70CEE this, B isOut);

inline B None_A70CEE__is(STACK_FRAME void* this) {
  return ((None_A70CEE) this)->type == TNone_A70CEE;
}

inline None_A70CEE None_A70CEE__as(STACK_FRAME void *this) {
  if (None_A70CEE__is(CALLER this)) return (None_A70CEE) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.TempControlMixedSeL4CAmKES.FanAck.Type].");
  abort();
}

void None_A70CEE_apply(STACK_FRAME None_A70CEE this);

#ifdef __cplusplus
}
#endif

#endif