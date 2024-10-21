#ifndef SIREUM_H_org_sireum_Some_D85467
#define SIREUM_H_org_sireum_Some_D85467

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]

#define Some_D85467_value_(this) ((this)->value)

B Some_D85467__eq(Some_D85467 this, Some_D85467 other);
inline B Some_D85467__ne(Some_D85467 this, Some_D85467 other) {
  return !Some_D85467__eq(this, other);
};
B Some_D85467__equiv(Some_D85467 this, Some_D85467 other);
inline B Some_D85467__inequiv(Some_D85467 this, Some_D85467 other) {
  return !Some_D85467__equiv(this, other);
};
void Some_D85467_string_(STACK_FRAME String result, Some_D85467 this);
void Some_D85467_cprint(Some_D85467 this, B isOut);

inline B Some_D85467__is(STACK_FRAME void* this) {
  return ((Some_D85467) this)->type == TSome_D85467;
}

inline Some_D85467 Some_D85467__as(STACK_FRAME void *this) {
  if (Some_D85467__is(CALLER this)) return (Some_D85467) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type].");
  abort();
}

void Some_D85467_apply(STACK_FRAME Some_D85467 this, tc_TempControlMixedSeL4CAmKES_FanAck_Type value);

#ifdef __cplusplus
}
#endif

#endif