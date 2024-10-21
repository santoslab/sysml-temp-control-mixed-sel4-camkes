#ifndef SIREUM_H_org_sireum_Option_5F90D6
#define SIREUM_H_org_sireum_Option_5F90D6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixed.TempUnit.Type]

#define Option_5F90D6__eq(this, other) Type__eq(this, other)
#define Option_5F90D6__ne(this, other) (!Type__eq(this, other))
#define Option_5F90D6__equiv(this, other) Type__equiv(this, other)
#define Option_5F90D6__inequiv(this, other) (!Type__equiv(this, other))
#define Option_5F90D6_cprint(this, isOut) Type_cprint(this, isOut)
B Option_5F90D6__is(STACK_FRAME void *this);
Option_5F90D6 Option_5F90D6__as(STACK_FRAME void *this);
inline void Option_5F90D6_string_(STACK_FRAME String result, Option_5F90D6 this) {
  Type_string_(CALLER result, this);
}

tc_TempControlMixed_TempUnit_Type Option_5F90D6_get_(STACK_FRAME Option_5F90D6 this);

#ifdef __cplusplus
}
#endif

#endif