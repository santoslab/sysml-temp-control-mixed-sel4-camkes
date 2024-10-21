#ifndef SIREUM_H_org_sireum_Some_455777
#define SIREUM_H_org_sireum_Some_455777

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.Isolette_Data_Model.Monitor_Mode.Type]

#define Some_455777_value_(this) ((this)->value)

B Some_455777__eq(Some_455777 this, Some_455777 other);
inline B Some_455777__ne(Some_455777 this, Some_455777 other) {
  return !Some_455777__eq(this, other);
};
B Some_455777__equiv(Some_455777 this, Some_455777 other);
inline B Some_455777__inequiv(Some_455777 this, Some_455777 other) {
  return !Some_455777__equiv(this, other);
};
void Some_455777_string_(STACK_FRAME String result, Some_455777 this);
void Some_455777_cprint(Some_455777 this, B isOut);

inline B Some_455777__is(STACK_FRAME void* this) {
  return ((Some_455777) this)->type == TSome_455777;
}

inline Some_455777 Some_455777__as(STACK_FRAME void *this) {
  if (Some_455777__is(CALLER this)) return (Some_455777) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.Isolette_Data_Model.Monitor_Mode.Type].");
  abort();
}

void Some_455777_apply(STACK_FRAME Some_455777 this, tc_Isolette_Data_Model_Monitor_Mode_Type value);

#ifdef __cplusplus
}
#endif

#endif