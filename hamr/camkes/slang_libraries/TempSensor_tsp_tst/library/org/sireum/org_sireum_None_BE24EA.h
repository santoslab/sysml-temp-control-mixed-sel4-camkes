#ifndef SIREUM_H_org_sireum_None_BE24EA
#define SIREUM_H_org_sireum_None_BE24EA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.Isolette_Data_Model.On_Off.Type]


B None_BE24EA__eq(None_BE24EA this, None_BE24EA other);
inline B None_BE24EA__ne(None_BE24EA this, None_BE24EA other) {
  return !None_BE24EA__eq(this, other);
};
B None_BE24EA__equiv(None_BE24EA this, None_BE24EA other);
inline B None_BE24EA__inequiv(None_BE24EA this, None_BE24EA other) {
  return !None_BE24EA__equiv(this, other);
};
void None_BE24EA_string_(STACK_FRAME String result, None_BE24EA this);
void None_BE24EA_cprint(None_BE24EA this, B isOut);

inline B None_BE24EA__is(STACK_FRAME void* this) {
  return ((None_BE24EA) this)->type == TNone_BE24EA;
}

inline None_BE24EA None_BE24EA__as(STACK_FRAME void *this) {
  if (None_BE24EA__is(CALLER this)) return (None_BE24EA) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.Isolette_Data_Model.On_Off.Type].");
  abort();
}

void None_BE24EA_apply(STACK_FRAME None_BE24EA this);

#ifdef __cplusplus
}
#endif

#endif