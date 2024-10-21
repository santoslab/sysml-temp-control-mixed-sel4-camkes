#ifndef SIREUM_H_org_sireum_Option_AAF24B
#define SIREUM_H_org_sireum_Option_AAF24B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixed.FanAck.Type]

#define Option_AAF24B__eq(this, other) Type__eq(this, other)
#define Option_AAF24B__ne(this, other) (!Type__eq(this, other))
#define Option_AAF24B__equiv(this, other) Type__equiv(this, other)
#define Option_AAF24B__inequiv(this, other) (!Type__equiv(this, other))
#define Option_AAF24B_cprint(this, isOut) Type_cprint(this, isOut)
B Option_AAF24B__is(STACK_FRAME void *this);
Option_AAF24B Option_AAF24B__as(STACK_FRAME void *this);
inline void Option_AAF24B_string_(STACK_FRAME String result, Option_AAF24B this) {
  Type_string_(CALLER result, this);
}

tc_TempControlMixed_FanAck_Type Option_AAF24B_get_(STACK_FRAME Option_AAF24B this);

#ifdef __cplusplus
}
#endif

#endif