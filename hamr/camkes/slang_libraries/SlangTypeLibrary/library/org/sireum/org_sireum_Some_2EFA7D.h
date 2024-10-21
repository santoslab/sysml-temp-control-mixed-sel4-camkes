#ifndef SIREUM_H_org_sireum_Some_2EFA7D
#define SIREUM_H_org_sireum_Some_2EFA7D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]

#define Some_2EFA7D_value_(this) ((this)->value)

B Some_2EFA7D__eq(Some_2EFA7D this, Some_2EFA7D other);
inline B Some_2EFA7D__ne(Some_2EFA7D this, Some_2EFA7D other) {
  return !Some_2EFA7D__eq(this, other);
};
B Some_2EFA7D__equiv(Some_2EFA7D this, Some_2EFA7D other);
inline B Some_2EFA7D__inequiv(Some_2EFA7D this, Some_2EFA7D other) {
  return !Some_2EFA7D__equiv(this, other);
};
void Some_2EFA7D_string_(STACK_FRAME String result, Some_2EFA7D this);
void Some_2EFA7D_cprint(Some_2EFA7D this, B isOut);

inline B Some_2EFA7D__is(STACK_FRAME void* this) {
  return ((Some_2EFA7D) this)->type == TSome_2EFA7D;
}

inline Some_2EFA7D Some_2EFA7D__as(STACK_FRAME void *this) {
  if (Some_2EFA7D__is(CALLER this)) return (Some_2EFA7D) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type].");
  abort();
}

void Some_2EFA7D_apply(STACK_FRAME Some_2EFA7D this, tc_TempControlMixedSeL4CAmKES_FanCmd_Type value);

#ifdef __cplusplus
}
#endif

#endif