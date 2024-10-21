#ifndef SIREUM_H_org_sireum_Option_36021E
#define SIREUM_H_org_sireum_Option_36021E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.FanAck.Type]

#define Option_36021E__eq(this, other) Type__eq(this, other)
#define Option_36021E__ne(this, other) (!Type__eq(this, other))
#define Option_36021E__equiv(this, other) Type__equiv(this, other)
#define Option_36021E__inequiv(this, other) (!Type__equiv(this, other))
#define Option_36021E_cprint(this, isOut) Type_cprint(this, isOut)
B Option_36021E__is(STACK_FRAME void *this);
Option_36021E Option_36021E__as(STACK_FRAME void *this);
inline void Option_36021E_string_(STACK_FRAME String result, Option_36021E this) {
  Type_string_(CALLER result, this);
}

tc_TempControlMixedSeL4CAmKES_FanAck_Type Option_36021E_get_(STACK_FRAME Option_36021E this);

#ifdef __cplusplus
}
#endif

#endif