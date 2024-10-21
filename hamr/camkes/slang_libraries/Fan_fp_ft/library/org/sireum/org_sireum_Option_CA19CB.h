#ifndef SIREUM_H_org_sireum_Option_CA19CB
#define SIREUM_H_org_sireum_Option_CA19CB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api]

#define Option_CA19CB__eq(this, other) Type__eq(this, other)
#define Option_CA19CB__ne(this, other) (!Type__eq(this, other))
#define Option_CA19CB__equiv(this, other) Type__equiv(this, other)
#define Option_CA19CB__inequiv(this, other) (!Type__equiv(this, other))
#define Option_CA19CB_cprint(this, isOut) Type_cprint(this, isOut)
B Option_CA19CB__is(STACK_FRAME void *this);
Option_CA19CB Option_CA19CB__as(STACK_FRAME void *this);
inline void Option_CA19CB_string_(STACK_FRAME String result, Option_CA19CB this) {
  Type_string_(CALLER result, this);
}

void Option_CA19CB_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api result, Option_CA19CB this);

#ifdef __cplusplus
}
#endif

#endif