#ifndef SIREUM_H_org_sireum_Option_62C8EC
#define SIREUM_H_org_sireum_Option_62C8EC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlPeriodic.FanCmd.Type]

#define Option_62C8EC__eq(this, other) Type__eq(this, other)
#define Option_62C8EC__ne(this, other) (!Type__eq(this, other))
#define Option_62C8EC__equiv(this, other) Type__equiv(this, other)
#define Option_62C8EC__inequiv(this, other) (!Type__equiv(this, other))
#define Option_62C8EC_cprint(this, isOut) Type_cprint(this, isOut)
B Option_62C8EC__is(STACK_FRAME void *this);
Option_62C8EC Option_62C8EC__as(STACK_FRAME void *this);
inline void Option_62C8EC_string_(STACK_FRAME String result, Option_62C8EC this) {
  Type_string_(CALLER result, this);
}

tc_TempControlPeriodic_FanCmd_Type Option_62C8EC_get_(STACK_FRAME Option_62C8EC this);

#ifdef __cplusplus
}
#endif

#endif