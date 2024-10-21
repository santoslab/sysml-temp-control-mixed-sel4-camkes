#ifndef SIREUM_H_org_sireum_Option_38D338
#define SIREUM_H_org_sireum_Option_38D338

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.Isolette_Data_Model.Monitor_Mode.Type]

#define Option_38D338__eq(this, other) Type__eq(this, other)
#define Option_38D338__ne(this, other) (!Type__eq(this, other))
#define Option_38D338__equiv(this, other) Type__equiv(this, other)
#define Option_38D338__inequiv(this, other) (!Type__equiv(this, other))
#define Option_38D338_cprint(this, isOut) Type_cprint(this, isOut)
B Option_38D338__is(STACK_FRAME void *this);
Option_38D338 Option_38D338__as(STACK_FRAME void *this);
inline void Option_38D338_string_(STACK_FRAME String result, Option_38D338 this) {
  Type_string_(CALLER result, this);
}

tc_Isolette_Data_Model_Monitor_Mode_Type Option_38D338_get_(STACK_FRAME Option_38D338 this);

#ifdef __cplusplus
}
#endif

#endif