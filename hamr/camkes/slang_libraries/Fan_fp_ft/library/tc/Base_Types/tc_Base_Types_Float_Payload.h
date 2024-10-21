#ifndef SIREUM_H_tc_Base_Types_Float_Payload
#define SIREUM_H_tc_Base_Types_Float_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Base_Types.Float_Payload

#define tc_Base_Types_Float_Payload_value_(this) ((this)->value)

B tc_Base_Types_Float_Payload__eq(tc_Base_Types_Float_Payload this, tc_Base_Types_Float_Payload other);
inline B tc_Base_Types_Float_Payload__ne(tc_Base_Types_Float_Payload this, tc_Base_Types_Float_Payload other) {
  return !tc_Base_Types_Float_Payload__eq(this, other);
};
B tc_Base_Types_Float_Payload__equiv(tc_Base_Types_Float_Payload this, tc_Base_Types_Float_Payload other);
inline B tc_Base_Types_Float_Payload__inequiv(tc_Base_Types_Float_Payload this, tc_Base_Types_Float_Payload other) {
  return !tc_Base_Types_Float_Payload__equiv(this, other);
};
void tc_Base_Types_Float_Payload_string_(STACK_FRAME String result, tc_Base_Types_Float_Payload this);
void tc_Base_Types_Float_Payload_cprint(tc_Base_Types_Float_Payload this, B isOut);

inline B tc_Base_Types_Float_Payload__is(STACK_FRAME void* this) {
  return ((tc_Base_Types_Float_Payload) this)->type == Ttc_Base_Types_Float_Payload;
}

inline tc_Base_Types_Float_Payload tc_Base_Types_Float_Payload__as(STACK_FRAME void *this) {
  if (tc_Base_Types_Float_Payload__is(CALLER this)) return (tc_Base_Types_Float_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Base_Types.Float_Payload.");
  abort();
}

void tc_Base_Types_Float_Payload_apply(STACK_FRAME tc_Base_Types_Float_Payload this, R value);

#ifdef __cplusplus
}
#endif

#endif