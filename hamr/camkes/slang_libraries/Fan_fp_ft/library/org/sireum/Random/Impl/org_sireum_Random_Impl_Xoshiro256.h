#ifndef SIREUM_H_org_sireum_Random_Impl_Xoshiro256
#define SIREUM_H_org_sireum_Random_Impl_Xoshiro256

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Random.Impl.Xoshiro256

#define Random_Impl_Xoshiro256_seed0_(this) ((this)->seed0)
#define Random_Impl_Xoshiro256_seed0_a(this, p_value) (this)->seed0 = (p_value)
#define Random_Impl_Xoshiro256_seed1_(this) ((this)->seed1)
#define Random_Impl_Xoshiro256_seed1_a(this, p_value) (this)->seed1 = (p_value)
#define Random_Impl_Xoshiro256_seed2_(this) ((this)->seed2)
#define Random_Impl_Xoshiro256_seed2_a(this, p_value) (this)->seed2 = (p_value)
#define Random_Impl_Xoshiro256_seed3_(this) ((this)->seed3)
#define Random_Impl_Xoshiro256_seed3_a(this, p_value) (this)->seed3 = (p_value)

B Random_Impl_Xoshiro256__eq(Random_Impl_Xoshiro256 this, Random_Impl_Xoshiro256 other);
inline B Random_Impl_Xoshiro256__ne(Random_Impl_Xoshiro256 this, Random_Impl_Xoshiro256 other) {
  return !Random_Impl_Xoshiro256__eq(this, other);
};
B Random_Impl_Xoshiro256__equiv(Random_Impl_Xoshiro256 this, Random_Impl_Xoshiro256 other);
inline B Random_Impl_Xoshiro256__inequiv(Random_Impl_Xoshiro256 this, Random_Impl_Xoshiro256 other) {
  return !Random_Impl_Xoshiro256__equiv(this, other);
};
void Random_Impl_Xoshiro256_string_(STACK_FRAME String result, Random_Impl_Xoshiro256 this);
void Random_Impl_Xoshiro256_cprint(Random_Impl_Xoshiro256 this, B isOut);

inline B Random_Impl_Xoshiro256__is(STACK_FRAME void* this) {
  return ((Random_Impl_Xoshiro256) this)->type == TRandom_Impl_Xoshiro256;
}

inline Random_Impl_Xoshiro256 Random_Impl_Xoshiro256__as(STACK_FRAME void *this) {
  if (Random_Impl_Xoshiro256__is(CALLER this)) return (Random_Impl_Xoshiro256) this;
  sfAbortImpl(CALLER "Invalid cast to Random.Impl.Xoshiro256.");
  abort();
}

void Random_Impl_Xoshiro256_apply(STACK_FRAME Random_Impl_Xoshiro256 this, U64 seed0, U64 seed1, U64 seed2, U64 seed3);

void Random_Impl_Xoshiro256_create(STACK_FRAME Random_Impl_Xoshiro256 result);

U64 Random_Impl_Xoshiro256_pp_(STACK_FRAME Random_Impl_Xoshiro256 this);

Unit Random_Impl_Xoshiro256_update_(STACK_FRAME Random_Impl_Xoshiro256 this);

#ifdef __cplusplus
}
#endif

#endif