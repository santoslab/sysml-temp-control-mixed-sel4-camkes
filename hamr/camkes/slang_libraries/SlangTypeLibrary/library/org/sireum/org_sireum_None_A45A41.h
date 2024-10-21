#ifndef SIREUM_H_org_sireum_None_A45A41
#define SIREUM_H_org_sireum_None_A45A41

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.Isolette_Data_Model.Status.Type]


B None_A45A41__eq(None_A45A41 this, None_A45A41 other);
inline B None_A45A41__ne(None_A45A41 this, None_A45A41 other) {
  return !None_A45A41__eq(this, other);
};
B None_A45A41__equiv(None_A45A41 this, None_A45A41 other);
inline B None_A45A41__inequiv(None_A45A41 this, None_A45A41 other) {
  return !None_A45A41__equiv(this, other);
};
void None_A45A41_string_(STACK_FRAME String result, None_A45A41 this);
void None_A45A41_cprint(None_A45A41 this, B isOut);

inline B None_A45A41__is(STACK_FRAME void* this) {
  return ((None_A45A41) this)->type == TNone_A45A41;
}

inline None_A45A41 None_A45A41__as(STACK_FRAME void *this) {
  if (None_A45A41__is(CALLER this)) return (None_A45A41) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.Isolette_Data_Model.Status.Type].");
  abort();
}

void None_A45A41_apply(STACK_FRAME None_A45A41 this);

#ifdef __cplusplus
}
#endif

#endif