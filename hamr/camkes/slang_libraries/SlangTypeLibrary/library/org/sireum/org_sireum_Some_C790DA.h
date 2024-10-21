#ifndef SIREUM_H_org_sireum_Some_C790DA
#define SIREUM_H_org_sireum_Some_C790DA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.Isolette_Data_Model.Regulator_Mode.Type]

#define Some_C790DA_value_(this) ((this)->value)

B Some_C790DA__eq(Some_C790DA this, Some_C790DA other);
inline B Some_C790DA__ne(Some_C790DA this, Some_C790DA other) {
  return !Some_C790DA__eq(this, other);
};
B Some_C790DA__equiv(Some_C790DA this, Some_C790DA other);
inline B Some_C790DA__inequiv(Some_C790DA this, Some_C790DA other) {
  return !Some_C790DA__equiv(this, other);
};
void Some_C790DA_string_(STACK_FRAME String result, Some_C790DA this);
void Some_C790DA_cprint(Some_C790DA this, B isOut);

inline B Some_C790DA__is(STACK_FRAME void* this) {
  return ((Some_C790DA) this)->type == TSome_C790DA;
}

inline Some_C790DA Some_C790DA__as(STACK_FRAME void *this) {
  if (Some_C790DA__is(CALLER this)) return (Some_C790DA) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.Isolette_Data_Model.Regulator_Mode.Type].");
  abort();
}

void Some_C790DA_apply(STACK_FRAME Some_C790DA this, tc_Isolette_Data_Model_Regulator_Mode_Type value);

#ifdef __cplusplus
}
#endif

#endif