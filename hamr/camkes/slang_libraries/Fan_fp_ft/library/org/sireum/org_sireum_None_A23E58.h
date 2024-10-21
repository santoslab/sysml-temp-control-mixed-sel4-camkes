#ifndef SIREUM_H_org_sireum_None_A23E58
#define SIREUM_H_org_sireum_None_A23E58

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.Isolette_Data_Model.ValueStatus.Type]


B None_A23E58__eq(None_A23E58 this, None_A23E58 other);
inline B None_A23E58__ne(None_A23E58 this, None_A23E58 other) {
  return !None_A23E58__eq(this, other);
};
B None_A23E58__equiv(None_A23E58 this, None_A23E58 other);
inline B None_A23E58__inequiv(None_A23E58 this, None_A23E58 other) {
  return !None_A23E58__equiv(this, other);
};
void None_A23E58_string_(STACK_FRAME String result, None_A23E58 this);
void None_A23E58_cprint(None_A23E58 this, B isOut);

inline B None_A23E58__is(STACK_FRAME void* this) {
  return ((None_A23E58) this)->type == TNone_A23E58;
}

inline None_A23E58 None_A23E58__as(STACK_FRAME void *this) {
  if (None_A23E58__is(CALLER this)) return (None_A23E58) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.Isolette_Data_Model.ValueStatus.Type].");
  abort();
}

void None_A23E58_apply(STACK_FRAME None_A23E58 this);

#ifdef __cplusplus
}
#endif

#endif