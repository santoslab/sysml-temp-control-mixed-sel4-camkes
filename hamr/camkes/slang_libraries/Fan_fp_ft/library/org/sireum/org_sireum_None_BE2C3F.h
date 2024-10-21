#ifndef SIREUM_H_org_sireum_None_BE2C3F
#define SIREUM_H_org_sireum_None_BE2C3F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[tc.Isolette_Data_Model.Monitor_Mode.Type]


B None_BE2C3F__eq(None_BE2C3F this, None_BE2C3F other);
inline B None_BE2C3F__ne(None_BE2C3F this, None_BE2C3F other) {
  return !None_BE2C3F__eq(this, other);
};
B None_BE2C3F__equiv(None_BE2C3F this, None_BE2C3F other);
inline B None_BE2C3F__inequiv(None_BE2C3F this, None_BE2C3F other) {
  return !None_BE2C3F__equiv(this, other);
};
void None_BE2C3F_string_(STACK_FRAME String result, None_BE2C3F this);
void None_BE2C3F_cprint(None_BE2C3F this, B isOut);

inline B None_BE2C3F__is(STACK_FRAME void* this) {
  return ((None_BE2C3F) this)->type == TNone_BE2C3F;
}

inline None_BE2C3F None_BE2C3F__as(STACK_FRAME void *this) {
  if (None_BE2C3F__is(CALLER this)) return (None_BE2C3F) this;
  sfAbortImpl(CALLER "Invalid cast to None[tc.Isolette_Data_Model.Monitor_Mode.Type].");
  abort();
}

void None_BE2C3F_apply(STACK_FRAME None_BE2C3F this);

#ifdef __cplusplus
}
#endif

#endif