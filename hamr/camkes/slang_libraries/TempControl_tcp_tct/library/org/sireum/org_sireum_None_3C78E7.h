#ifndef SIREUM_H_org_sireum_None_3C78E7
#define SIREUM_H_org_sireum_None_3C78E7

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.Isolette_Data_Model.Regulator_Mode.Type]


B None_3C78E7__eq(None_3C78E7 this, None_3C78E7 other);
inline B None_3C78E7__ne(None_3C78E7 this, None_3C78E7 other) {
  return !None_3C78E7__eq(this, other);
};
B None_3C78E7__equiv(None_3C78E7 this, None_3C78E7 other);
inline B None_3C78E7__inequiv(None_3C78E7 this, None_3C78E7 other) {
  return !None_3C78E7__equiv(this, other);
};
void None_3C78E7_string_(STACK_FRAME String result, None_3C78E7 this);
void None_3C78E7_cprint(None_3C78E7 this, B isOut);

inline B None_3C78E7__is(STACK_FRAME void* this) {
  return ((None_3C78E7) this)->type == TNone_3C78E7;
}

inline None_3C78E7 None_3C78E7__as(STACK_FRAME void *this) {
  if (None_3C78E7__is(CALLER this)) return (None_3C78E7) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.Isolette_Data_Model.Regulator_Mode.Type].");
  abort();
}

void None_3C78E7_apply(STACK_FRAME None_3C78E7 this);

#ifdef __cplusplus
}
#endif

#endif