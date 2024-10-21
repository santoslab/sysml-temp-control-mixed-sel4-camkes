#ifndef SIREUM_H_org_sireum_Option_262EA2
#define SIREUM_H_org_sireum_Option_262EA2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]

#define Option_262EA2__eq(this, other) Type__eq(this, other)
#define Option_262EA2__ne(this, other) (!Type__eq(this, other))
#define Option_262EA2__equiv(this, other) Type__equiv(this, other)
#define Option_262EA2__inequiv(this, other) (!Type__equiv(this, other))
#define Option_262EA2_cprint(this, isOut) Type_cprint(this, isOut)
B Option_262EA2__is(STACK_FRAME void *this);
Option_262EA2 Option_262EA2__as(STACK_FRAME void *this);
inline void Option_262EA2_string_(STACK_FRAME String result, Option_262EA2 this) {
  Type_string_(CALLER result, this);
}

void Option_262EA2_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api result, Option_262EA2 this);

#ifdef __cplusplus
}
#endif

#endif