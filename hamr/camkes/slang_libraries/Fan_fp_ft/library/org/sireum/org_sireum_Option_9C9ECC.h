#ifndef SIREUM_H_org_sireum_Option_9C9ECC
#define SIREUM_H_org_sireum_Option_9C9ECC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api]

#define Option_9C9ECC__eq(this, other) Type__eq(this, other)
#define Option_9C9ECC__ne(this, other) (!Type__eq(this, other))
#define Option_9C9ECC__equiv(this, other) Type__equiv(this, other)
#define Option_9C9ECC__inequiv(this, other) (!Type__equiv(this, other))
#define Option_9C9ECC_cprint(this, isOut) Type_cprint(this, isOut)
B Option_9C9ECC__is(STACK_FRAME void *this);
Option_9C9ECC Option_9C9ECC__as(STACK_FRAME void *this);
inline void Option_9C9ECC_string_(STACK_FRAME String result, Option_9C9ECC this) {
  Type_string_(CALLER result, this);
}

void Option_9C9ECC_get_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api result, Option_9C9ECC this);

#ifdef __cplusplus
}
#endif

#endif