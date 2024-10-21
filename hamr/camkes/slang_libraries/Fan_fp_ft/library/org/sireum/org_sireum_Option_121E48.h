#ifndef SIREUM_H_org_sireum_Option_121E48
#define SIREUM_H_org_sireum_Option_121E48

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlPeriodic.FanAck.Type]

#define Option_121E48__eq(this, other) Type__eq(this, other)
#define Option_121E48__ne(this, other) (!Type__eq(this, other))
#define Option_121E48__equiv(this, other) Type__equiv(this, other)
#define Option_121E48__inequiv(this, other) (!Type__equiv(this, other))
#define Option_121E48_cprint(this, isOut) Type_cprint(this, isOut)
B Option_121E48__is(STACK_FRAME void *this);
Option_121E48 Option_121E48__as(STACK_FRAME void *this);
inline void Option_121E48_string_(STACK_FRAME String result, Option_121E48 this) {
  Type_string_(CALLER result, this);
}

tc_TempControlPeriodic_FanAck_Type Option_121E48_get_(STACK_FRAME Option_121E48 this);

#ifdef __cplusplus
}
#endif

#endif