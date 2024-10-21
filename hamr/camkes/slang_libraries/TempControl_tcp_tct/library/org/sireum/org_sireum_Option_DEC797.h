#ifndef SIREUM_H_org_sireum_Option_DEC797
#define SIREUM_H_org_sireum_Option_DEC797

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.Temperature]

#define Option_DEC797__eq(this, other) Type__eq(this, other)
#define Option_DEC797__ne(this, other) (!Type__eq(this, other))
#define Option_DEC797__equiv(this, other) Type__equiv(this, other)
#define Option_DEC797__inequiv(this, other) (!Type__equiv(this, other))
#define Option_DEC797_cprint(this, isOut) Type_cprint(this, isOut)
B Option_DEC797__is(STACK_FRAME void *this);
Option_DEC797 Option_DEC797__as(STACK_FRAME void *this);
inline void Option_DEC797_string_(STACK_FRAME String result, Option_DEC797 this) {
  Type_string_(CALLER result, this);
}

void Option_DEC797_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature result, Option_DEC797 this);

#ifdef __cplusplus
}
#endif

#endif