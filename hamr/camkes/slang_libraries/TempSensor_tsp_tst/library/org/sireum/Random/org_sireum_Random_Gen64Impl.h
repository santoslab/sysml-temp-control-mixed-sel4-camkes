#ifndef SIREUM_H_org_sireum_Random_Gen64Impl
#define SIREUM_H_org_sireum_Random_Gen64Impl

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Random.Gen64Impl

#define Random_Gen64Impl_gen_(this) ((Random_Impl_Xoshiro256) &(this)->gen)

B Random_Gen64Impl__eq(Random_Gen64Impl this, Random_Gen64Impl other);
inline B Random_Gen64Impl__ne(Random_Gen64Impl this, Random_Gen64Impl other) {
  return !Random_Gen64Impl__eq(this, other);
};
B Random_Gen64Impl__equiv(Random_Gen64Impl this, Random_Gen64Impl other);
inline B Random_Gen64Impl__inequiv(Random_Gen64Impl this, Random_Gen64Impl other) {
  return !Random_Gen64Impl__equiv(this, other);
};
void Random_Gen64Impl_string_(STACK_FRAME String result, Random_Gen64Impl this);
void Random_Gen64Impl_cprint(Random_Gen64Impl this, B isOut);

inline B Random_Gen64Impl__is(STACK_FRAME void* this) {
  return ((Random_Gen64Impl) this)->type == TRandom_Gen64Impl;
}

inline Random_Gen64Impl Random_Gen64Impl__as(STACK_FRAME void *this) {
  if (Random_Gen64Impl__is(CALLER this)) return (Random_Gen64Impl) this;
  sfAbortImpl(CALLER "Invalid cast to Random.Gen64Impl.");
  abort();
}

void Random_Gen64Impl_apply(STACK_FRAME Random_Gen64Impl this, Random_Impl_Xoshiro256 gen);

U64 Random_Gen64Impl_genU64_(STACK_FRAME Random_Gen64Impl this);

#ifdef __cplusplus
}
#endif

#endif