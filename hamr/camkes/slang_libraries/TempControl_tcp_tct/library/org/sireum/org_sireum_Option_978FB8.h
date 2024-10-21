#ifndef SIREUM_H_org_sireum_Option_978FB8
#define SIREUM_H_org_sireum_Option_978FB8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlPeriodic.TempUnit.Type]

#define Option_978FB8__eq(this, other) Type__eq(this, other)
#define Option_978FB8__ne(this, other) (!Type__eq(this, other))
#define Option_978FB8__equiv(this, other) Type__equiv(this, other)
#define Option_978FB8__inequiv(this, other) (!Type__equiv(this, other))
#define Option_978FB8_cprint(this, isOut) Type_cprint(this, isOut)
B Option_978FB8__is(STACK_FRAME void *this);
Option_978FB8 Option_978FB8__as(STACK_FRAME void *this);
inline void Option_978FB8_string_(STACK_FRAME String result, Option_978FB8 this) {
  Type_string_(CALLER result, this);
}

tc_TempControlPeriodic_TempUnit_Type Option_978FB8_get_(STACK_FRAME Option_978FB8 this);

#ifdef __cplusplus
}
#endif

#endif