#ifndef SIREUM_H_org_sireum_Some_21C1E5
#define SIREUM_H_org_sireum_Some_21C1E5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.Isolette_Data_Model.ValueStatus.Type]

#define Some_21C1E5_value_(this) ((this)->value)

B Some_21C1E5__eq(Some_21C1E5 this, Some_21C1E5 other);
inline B Some_21C1E5__ne(Some_21C1E5 this, Some_21C1E5 other) {
  return !Some_21C1E5__eq(this, other);
};
B Some_21C1E5__equiv(Some_21C1E5 this, Some_21C1E5 other);
inline B Some_21C1E5__inequiv(Some_21C1E5 this, Some_21C1E5 other) {
  return !Some_21C1E5__equiv(this, other);
};
void Some_21C1E5_string_(STACK_FRAME String result, Some_21C1E5 this);
void Some_21C1E5_cprint(Some_21C1E5 this, B isOut);

inline B Some_21C1E5__is(STACK_FRAME void* this) {
  return ((Some_21C1E5) this)->type == TSome_21C1E5;
}

inline Some_21C1E5 Some_21C1E5__as(STACK_FRAME void *this) {
  if (Some_21C1E5__is(CALLER this)) return (Some_21C1E5) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.Isolette_Data_Model.ValueStatus.Type].");
  abort();
}

void Some_21C1E5_apply(STACK_FRAME Some_21C1E5 this, tc_Isolette_Data_Model_ValueStatus_Type value);

#ifdef __cplusplus
}
#endif

#endif