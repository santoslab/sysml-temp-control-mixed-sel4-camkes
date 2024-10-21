#ifndef SIREUM_H_org_sireum_Option_50DC68
#define SIREUM_H_org_sireum_Option_50DC68

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]

#define Option_50DC68__eq(this, other) Type__eq(this, other)
#define Option_50DC68__ne(this, other) (!Type__eq(this, other))
#define Option_50DC68__equiv(this, other) Type__equiv(this, other)
#define Option_50DC68__inequiv(this, other) (!Type__equiv(this, other))
#define Option_50DC68_cprint(this, isOut) Type_cprint(this, isOut)
B Option_50DC68__is(STACK_FRAME void *this);
Option_50DC68 Option_50DC68__as(STACK_FRAME void *this);
inline void Option_50DC68_string_(STACK_FRAME String result, Option_50DC68 this) {
  Type_string_(CALLER result, this);
}

void Option_50DC68_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api result, Option_50DC68 this);

#ifdef __cplusplus
}
#endif

#endif