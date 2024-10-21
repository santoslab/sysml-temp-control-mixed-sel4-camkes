#ifndef SIREUM_H_org_sireum_Option_C9A4D6
#define SIREUM_H_org_sireum_Option_C9A4D6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.Isolette_Data_Model.Status.Type]

#define Option_C9A4D6__eq(this, other) Type__eq(this, other)
#define Option_C9A4D6__ne(this, other) (!Type__eq(this, other))
#define Option_C9A4D6__equiv(this, other) Type__equiv(this, other)
#define Option_C9A4D6__inequiv(this, other) (!Type__equiv(this, other))
#define Option_C9A4D6_cprint(this, isOut) Type_cprint(this, isOut)
B Option_C9A4D6__is(STACK_FRAME void *this);
Option_C9A4D6 Option_C9A4D6__as(STACK_FRAME void *this);
inline void Option_C9A4D6_string_(STACK_FRAME String result, Option_C9A4D6 this) {
  Type_string_(CALLER result, this);
}

tc_Isolette_Data_Model_Status_Type Option_C9A4D6_get_(STACK_FRAME Option_C9A4D6 this);

#ifdef __cplusplus
}
#endif

#endif