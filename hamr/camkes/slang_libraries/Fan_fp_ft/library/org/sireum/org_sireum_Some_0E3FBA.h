#ifndef SIREUM_H_org_sireum_Some_0E3FBA
#define SIREUM_H_org_sireum_Some_0E3FBA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixed.TempUnit.Type]

#define Some_0E3FBA_value_(this) ((this)->value)

B Some_0E3FBA__eq(Some_0E3FBA this, Some_0E3FBA other);
inline B Some_0E3FBA__ne(Some_0E3FBA this, Some_0E3FBA other) {
  return !Some_0E3FBA__eq(this, other);
};
B Some_0E3FBA__equiv(Some_0E3FBA this, Some_0E3FBA other);
inline B Some_0E3FBA__inequiv(Some_0E3FBA this, Some_0E3FBA other) {
  return !Some_0E3FBA__equiv(this, other);
};
void Some_0E3FBA_string_(STACK_FRAME String result, Some_0E3FBA this);
void Some_0E3FBA_cprint(Some_0E3FBA this, B isOut);

inline B Some_0E3FBA__is(STACK_FRAME void* this) {
  return ((Some_0E3FBA) this)->type == TSome_0E3FBA;
}

inline Some_0E3FBA Some_0E3FBA__as(STACK_FRAME void *this) {
  if (Some_0E3FBA__is(CALLER this)) return (Some_0E3FBA) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixed.TempUnit.Type].");
  abort();
}

void Some_0E3FBA_apply(STACK_FRAME Some_0E3FBA this, tc_TempControlMixed_TempUnit_Type value);

#ifdef __cplusplus
}
#endif

#endif