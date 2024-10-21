#ifndef SIREUM_H_tc_Isolette_Environment_Heat
#define SIREUM_H_tc_Isolette_Environment_Heat

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Environment.Heat

#define tc_Isolette_Environment_Heat_dummyField_(this) ((this)->dummyField)

B tc_Isolette_Environment_Heat__eq(tc_Isolette_Environment_Heat this, tc_Isolette_Environment_Heat other);
inline B tc_Isolette_Environment_Heat__ne(tc_Isolette_Environment_Heat this, tc_Isolette_Environment_Heat other) {
  return !tc_Isolette_Environment_Heat__eq(this, other);
};
B tc_Isolette_Environment_Heat__equiv(tc_Isolette_Environment_Heat this, tc_Isolette_Environment_Heat other);
inline B tc_Isolette_Environment_Heat__inequiv(tc_Isolette_Environment_Heat this, tc_Isolette_Environment_Heat other) {
  return !tc_Isolette_Environment_Heat__equiv(this, other);
};
void tc_Isolette_Environment_Heat_string_(STACK_FRAME String result, tc_Isolette_Environment_Heat this);
void tc_Isolette_Environment_Heat_cprint(tc_Isolette_Environment_Heat this, B isOut);

inline B tc_Isolette_Environment_Heat__is(STACK_FRAME void* this) {
  return ((tc_Isolette_Environment_Heat) this)->type == Ttc_Isolette_Environment_Heat;
}

inline tc_Isolette_Environment_Heat tc_Isolette_Environment_Heat__as(STACK_FRAME void *this) {
  if (tc_Isolette_Environment_Heat__is(CALLER this)) return (tc_Isolette_Environment_Heat) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Isolette_Environment.Heat.");
  abort();
}

void tc_Isolette_Environment_Heat_apply(STACK_FRAME tc_Isolette_Environment_Heat this, B dummyField);

void tc_Isolette_Environment_Heat_example(STACK_FRAME tc_Isolette_Environment_Heat result);

#ifdef __cplusplus
}
#endif

#endif