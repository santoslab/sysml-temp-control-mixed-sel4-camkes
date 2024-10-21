#ifndef SIREUM_H_org_sireum_Some_140719
#define SIREUM_H_org_sireum_Some_140719

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.Isolette_Data_Model.Status.Type]

#define Some_140719_value_(this) ((this)->value)

B Some_140719__eq(Some_140719 this, Some_140719 other);
inline B Some_140719__ne(Some_140719 this, Some_140719 other) {
  return !Some_140719__eq(this, other);
};
B Some_140719__equiv(Some_140719 this, Some_140719 other);
inline B Some_140719__inequiv(Some_140719 this, Some_140719 other) {
  return !Some_140719__equiv(this, other);
};
void Some_140719_string_(STACK_FRAME String result, Some_140719 this);
void Some_140719_cprint(Some_140719 this, B isOut);

inline B Some_140719__is(STACK_FRAME void* this) {
  return ((Some_140719) this)->type == TSome_140719;
}

inline Some_140719 Some_140719__as(STACK_FRAME void *this) {
  if (Some_140719__is(CALLER this)) return (Some_140719) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.Isolette_Data_Model.Status.Type].");
  abort();
}

void Some_140719_apply(STACK_FRAME Some_140719 this, tc_Isolette_Data_Model_Status_Type value);

#ifdef __cplusplus
}
#endif

#endif