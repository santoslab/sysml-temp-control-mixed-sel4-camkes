#ifndef SIREUM_H_org_sireum_Some_270A8B
#define SIREUM_H_org_sireum_Some_270A8B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[tc.TempControlMixed.FanAck.Type]

#define Some_270A8B_value_(this) ((this)->value)

B Some_270A8B__eq(Some_270A8B this, Some_270A8B other);
inline B Some_270A8B__ne(Some_270A8B this, Some_270A8B other) {
  return !Some_270A8B__eq(this, other);
};
B Some_270A8B__equiv(Some_270A8B this, Some_270A8B other);
inline B Some_270A8B__inequiv(Some_270A8B this, Some_270A8B other) {
  return !Some_270A8B__equiv(this, other);
};
void Some_270A8B_string_(STACK_FRAME String result, Some_270A8B this);
void Some_270A8B_cprint(Some_270A8B this, B isOut);

inline B Some_270A8B__is(STACK_FRAME void* this) {
  return ((Some_270A8B) this)->type == TSome_270A8B;
}

inline Some_270A8B Some_270A8B__as(STACK_FRAME void *this) {
  if (Some_270A8B__is(CALLER this)) return (Some_270A8B) this;
  sfAbortImpl(CALLER "Invalid cast to Some[tc.TempControlMixed.FanAck.Type].");
  abort();
}

void Some_270A8B_apply(STACK_FRAME Some_270A8B this, tc_TempControlMixed_FanAck_Type value);

#ifdef __cplusplus
}
#endif

#endif