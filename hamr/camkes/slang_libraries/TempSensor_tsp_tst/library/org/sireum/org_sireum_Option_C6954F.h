#ifndef SIREUM_H_org_sireum_Option_C6954F
#define SIREUM_H_org_sireum_Option_C6954F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.Isolette_Data_Model.On_Off.Type]

#define Option_C6954F__eq(this, other) Type__eq(this, other)
#define Option_C6954F__ne(this, other) (!Type__eq(this, other))
#define Option_C6954F__equiv(this, other) Type__equiv(this, other)
#define Option_C6954F__inequiv(this, other) (!Type__equiv(this, other))
#define Option_C6954F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_C6954F__is(STACK_FRAME void *this);
Option_C6954F Option_C6954F__as(STACK_FRAME void *this);
inline void Option_C6954F_string_(STACK_FRAME String result, Option_C6954F this) {
  Type_string_(CALLER result, this);
}

tc_Isolette_Data_Model_On_Off_Type Option_C6954F_get_(STACK_FRAME Option_C6954F this);

#ifdef __cplusplus
}
#endif

#endif