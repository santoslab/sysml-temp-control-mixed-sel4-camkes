#ifndef SIREUM_H_org_sireum_Option_889345
#define SIREUM_H_org_sireum_Option_889345

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]

#define Option_889345__eq(this, other) Type__eq(this, other)
#define Option_889345__ne(this, other) (!Type__eq(this, other))
#define Option_889345__equiv(this, other) Type__equiv(this, other)
#define Option_889345__inequiv(this, other) (!Type__equiv(this, other))
#define Option_889345_cprint(this, isOut) Type_cprint(this, isOut)
B Option_889345__is(STACK_FRAME void *this);
Option_889345 Option_889345__as(STACK_FRAME void *this);
inline void Option_889345_string_(STACK_FRAME String result, Option_889345 this) {
  Type_string_(CALLER result, this);
}

void Option_889345_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api result, Option_889345 this);

#ifdef __cplusplus
}
#endif

#endif