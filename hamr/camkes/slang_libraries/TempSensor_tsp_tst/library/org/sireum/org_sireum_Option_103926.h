#ifndef SIREUM_H_org_sireum_Option_103926
#define SIREUM_H_org_sireum_Option_103926

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]

#define Option_103926__eq(this, other) Type__eq(this, other)
#define Option_103926__ne(this, other) (!Type__eq(this, other))
#define Option_103926__equiv(this, other) Type__equiv(this, other)
#define Option_103926__inequiv(this, other) (!Type__equiv(this, other))
#define Option_103926_cprint(this, isOut) Type_cprint(this, isOut)
B Option_103926__is(STACK_FRAME void *this);
Option_103926 Option_103926__as(STACK_FRAME void *this);
inline void Option_103926_string_(STACK_FRAME String result, Option_103926 this) {
  Type_string_(CALLER result, this);
}

tc_TempControlMixedSeL4CAmKES_TempUnit_Type Option_103926_get_(STACK_FRAME Option_103926 this);

#ifdef __cplusplus
}
#endif

#endif