#ifndef SIREUM_H_org_sireum_Option_570179
#define SIREUM_H_org_sireum_Option_570179

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.Isolette_Data_Model.ValueStatus.Type]

#define Option_570179__eq(this, other) Type__eq(this, other)
#define Option_570179__ne(this, other) (!Type__eq(this, other))
#define Option_570179__equiv(this, other) Type__equiv(this, other)
#define Option_570179__inequiv(this, other) (!Type__equiv(this, other))
#define Option_570179_cprint(this, isOut) Type_cprint(this, isOut)
B Option_570179__is(STACK_FRAME void *this);
Option_570179 Option_570179__as(STACK_FRAME void *this);
inline void Option_570179_string_(STACK_FRAME String result, Option_570179 this) {
  Type_string_(CALLER result, this);
}

tc_Isolette_Data_Model_ValueStatus_Type Option_570179_get_(STACK_FRAME Option_570179 this);

#ifdef __cplusplus
}
#endif

#endif