#ifndef SIREUM_H_org_sireum_Random_Impl_SplitMix64
#define SIREUM_H_org_sireum_Random_Impl_SplitMix64

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Random.Impl.SplitMix64

#define Random_Impl_SplitMix64_seed_(this) ((this)->seed)
#define Random_Impl_SplitMix64_seed_a(this, p_value) (this)->seed = (p_value)

B Random_Impl_SplitMix64__eq(Random_Impl_SplitMix64 this, Random_Impl_SplitMix64 other);
inline B Random_Impl_SplitMix64__ne(Random_Impl_SplitMix64 this, Random_Impl_SplitMix64 other) {
  return !Random_Impl_SplitMix64__eq(this, other);
};
B Random_Impl_SplitMix64__equiv(Random_Impl_SplitMix64 this, Random_Impl_SplitMix64 other);
inline B Random_Impl_SplitMix64__inequiv(Random_Impl_SplitMix64 this, Random_Impl_SplitMix64 other) {
  return !Random_Impl_SplitMix64__equiv(this, other);
};
void Random_Impl_SplitMix64_string_(STACK_FRAME String result, Random_Impl_SplitMix64 this);
void Random_Impl_SplitMix64_cprint(Random_Impl_SplitMix64 this, B isOut);

inline B Random_Impl_SplitMix64__is(STACK_FRAME void* this) {
  return ((Random_Impl_SplitMix64) this)->type == TRandom_Impl_SplitMix64;
}

inline Random_Impl_SplitMix64 Random_Impl_SplitMix64__as(STACK_FRAME void *this) {
  if (Random_Impl_SplitMix64__is(CALLER this)) return (Random_Impl_SplitMix64) this;
  sfAbortImpl(CALLER "Invalid cast to Random.Impl.SplitMix64.");
  abort();
}

void Random_Impl_SplitMix64_apply(STACK_FRAME Random_Impl_SplitMix64 this, U64 seed);

void Random_Impl_SplitMix64_create(STACK_FRAME Random_Impl_SplitMix64 result);

U64 Random_Impl_SplitMix64_next_(STACK_FRAME Random_Impl_SplitMix64 this);

#ifdef __cplusplus
}
#endif

#endif