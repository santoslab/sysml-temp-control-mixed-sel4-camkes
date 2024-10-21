#ifndef SIREUM_H_org_sireum_Some_776961
#define SIREUM_H_org_sireum_Some_776961

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixed.FanCmd.Type]

#define Some_776961_value_(this) ((this)->value)

B Some_776961__eq(Some_776961 this, Some_776961 other);
inline B Some_776961__ne(Some_776961 this, Some_776961 other) {
  return !Some_776961__eq(this, other);
};
B Some_776961__equiv(Some_776961 this, Some_776961 other);
inline B Some_776961__inequiv(Some_776961 this, Some_776961 other) {
  return !Some_776961__equiv(this, other);
};
void Some_776961_string_(STACK_FRAME String result, Some_776961 this);
void Some_776961_cprint(Some_776961 this, B isOut);

inline B Some_776961__is(STACK_FRAME void* this) {
  return ((Some_776961) this)->type == TSome_776961;
}

inline Some_776961 Some_776961__as(STACK_FRAME void *this) {
  if (Some_776961__is(CALLER this)) return (Some_776961) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixed.FanCmd.Type].");
  abort();
}

void Some_776961_apply(STACK_FRAME Some_776961 this, tc_TempControlMixed_FanCmd_Type value);

#ifdef __cplusplus
}
#endif

#endif