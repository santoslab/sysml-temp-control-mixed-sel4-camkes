#ifndef SIREUM_H_org_sireum_Some_F1808D
#define SIREUM_H_org_sireum_Some_F1808D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.Isolette_Data_Model.On_Off.Type]

#define Some_F1808D_value_(this) ((this)->value)

B Some_F1808D__eq(Some_F1808D this, Some_F1808D other);
inline B Some_F1808D__ne(Some_F1808D this, Some_F1808D other) {
  return !Some_F1808D__eq(this, other);
};
B Some_F1808D__equiv(Some_F1808D this, Some_F1808D other);
inline B Some_F1808D__inequiv(Some_F1808D this, Some_F1808D other) {
  return !Some_F1808D__equiv(this, other);
};
void Some_F1808D_string_(STACK_FRAME String result, Some_F1808D this);
void Some_F1808D_cprint(Some_F1808D this, B isOut);

inline B Some_F1808D__is(STACK_FRAME void* this) {
  return ((Some_F1808D) this)->type == TSome_F1808D;
}

inline Some_F1808D Some_F1808D__as(STACK_FRAME void *this) {
  if (Some_F1808D__is(CALLER this)) return (Some_F1808D) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.Isolette_Data_Model.On_Off.Type].");
  abort();
}

void Some_F1808D_apply(STACK_FRAME Some_F1808D this, tc_Isolette_Data_Model_On_Off_Type value);

#ifdef __cplusplus
}
#endif

#endif