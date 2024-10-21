#ifndef SIREUM_H_org_sireum_Option_8499F5
#define SIREUM_H_org_sireum_Option_8499F5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixed.FanCmd.Type]

#define Option_8499F5__eq(this, other) Type__eq(this, other)
#define Option_8499F5__ne(this, other) (!Type__eq(this, other))
#define Option_8499F5__equiv(this, other) Type__equiv(this, other)
#define Option_8499F5__inequiv(this, other) (!Type__equiv(this, other))
#define Option_8499F5_cprint(this, isOut) Type_cprint(this, isOut)
B Option_8499F5__is(STACK_FRAME void *this);
Option_8499F5 Option_8499F5__as(STACK_FRAME void *this);
inline void Option_8499F5_string_(STACK_FRAME String result, Option_8499F5 this) {
  Type_string_(CALLER result, this);
}

tc_TempControlMixed_FanCmd_Type Option_8499F5_get_(STACK_FRAME Option_8499F5 this);

#ifdef __cplusplus
}
#endif

#endif