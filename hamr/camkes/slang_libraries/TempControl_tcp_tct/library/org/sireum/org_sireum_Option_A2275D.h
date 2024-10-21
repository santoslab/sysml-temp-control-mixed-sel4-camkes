#ifndef SIREUM_H_org_sireum_Option_A2275D
#define SIREUM_H_org_sireum_Option_A2275D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.Isolette_Data_Model.Regulator_Mode.Type]

#define Option_A2275D__eq(this, other) Type__eq(this, other)
#define Option_A2275D__ne(this, other) (!Type__eq(this, other))
#define Option_A2275D__equiv(this, other) Type__equiv(this, other)
#define Option_A2275D__inequiv(this, other) (!Type__equiv(this, other))
#define Option_A2275D_cprint(this, isOut) Type_cprint(this, isOut)
B Option_A2275D__is(STACK_FRAME void *this);
Option_A2275D Option_A2275D__as(STACK_FRAME void *this);
inline void Option_A2275D_string_(STACK_FRAME String result, Option_A2275D this) {
  Type_string_(CALLER result, this);
}

tc_Isolette_Data_Model_Regulator_Mode_Type Option_A2275D_get_(STACK_FRAME Option_A2275D this);

#ifdef __cplusplus
}
#endif

#endif