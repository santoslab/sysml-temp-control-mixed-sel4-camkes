#ifndef SIREUM_H_tc_Isolette_Environment_Air_Interaction
#define SIREUM_H_tc_Isolette_Environment_Air_Interaction

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Environment.Air_Interaction

#define tc_Isolette_Environment_Air_Interaction_dummyField_(this) ((this)->dummyField)

B tc_Isolette_Environment_Air_Interaction__eq(tc_Isolette_Environment_Air_Interaction this, tc_Isolette_Environment_Air_Interaction other);
inline B tc_Isolette_Environment_Air_Interaction__ne(tc_Isolette_Environment_Air_Interaction this, tc_Isolette_Environment_Air_Interaction other) {
  return !tc_Isolette_Environment_Air_Interaction__eq(this, other);
};
B tc_Isolette_Environment_Air_Interaction__equiv(tc_Isolette_Environment_Air_Interaction this, tc_Isolette_Environment_Air_Interaction other);
inline B tc_Isolette_Environment_Air_Interaction__inequiv(tc_Isolette_Environment_Air_Interaction this, tc_Isolette_Environment_Air_Interaction other) {
  return !tc_Isolette_Environment_Air_Interaction__equiv(this, other);
};
void tc_Isolette_Environment_Air_Interaction_string_(STACK_FRAME String result, tc_Isolette_Environment_Air_Interaction this);
void tc_Isolette_Environment_Air_Interaction_cprint(tc_Isolette_Environment_Air_Interaction this, B isOut);

inline B tc_Isolette_Environment_Air_Interaction__is(STACK_FRAME void* this) {
  return ((tc_Isolette_Environment_Air_Interaction) this)->type == Ttc_Isolette_Environment_Air_Interaction;
}

inline tc_Isolette_Environment_Air_Interaction tc_Isolette_Environment_Air_Interaction__as(STACK_FRAME void *this) {
  if (tc_Isolette_Environment_Air_Interaction__is(CALLER this)) return (tc_Isolette_Environment_Air_Interaction) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Isolette_Environment.Air_Interaction.");
  abort();
}

void tc_Isolette_Environment_Air_Interaction_apply(STACK_FRAME tc_Isolette_Environment_Air_Interaction this, B dummyField);

void tc_Isolette_Environment_Air_Interaction_example(STACK_FRAME tc_Isolette_Environment_Air_Interaction result);

#ifdef __cplusplus
}
#endif

#endif