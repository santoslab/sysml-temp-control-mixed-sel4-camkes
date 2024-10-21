#ifndef SIREUM_H_org_sireum_Option_098837
#define SIREUM_H_org_sireum_Option_098837

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]

#define Option_098837__eq(this, other) Type__eq(this, other)
#define Option_098837__ne(this, other) (!Type__eq(this, other))
#define Option_098837__equiv(this, other) Type__equiv(this, other)
#define Option_098837__inequiv(this, other) (!Type__equiv(this, other))
#define Option_098837_cprint(this, isOut) Type_cprint(this, isOut)
B Option_098837__is(STACK_FRAME void *this);
Option_098837 Option_098837__as(STACK_FRAME void *this);
inline void Option_098837_string_(STACK_FRAME String result, Option_098837 this) {
  Type_string_(CALLER result, this);
}

void Option_098837_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api result, Option_098837 this);

#ifdef __cplusplus
}
#endif

#endif