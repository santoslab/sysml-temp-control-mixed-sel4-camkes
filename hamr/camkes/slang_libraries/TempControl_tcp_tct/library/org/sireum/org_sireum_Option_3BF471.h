#ifndef SIREUM_H_org_sireum_Option_3BF471
#define SIREUM_H_org_sireum_Option_3BF471

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.SetPoint]

#define Option_3BF471__eq(this, other) Type__eq(this, other)
#define Option_3BF471__ne(this, other) (!Type__eq(this, other))
#define Option_3BF471__equiv(this, other) Type__equiv(this, other)
#define Option_3BF471__inequiv(this, other) (!Type__equiv(this, other))
#define Option_3BF471_cprint(this, isOut) Type_cprint(this, isOut)
B Option_3BF471__is(STACK_FRAME void *this);
Option_3BF471 Option_3BF471__as(STACK_FRAME void *this);
inline void Option_3BF471_string_(STACK_FRAME String result, Option_3BF471 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif