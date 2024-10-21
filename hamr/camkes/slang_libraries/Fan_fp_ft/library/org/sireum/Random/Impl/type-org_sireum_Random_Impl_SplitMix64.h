#ifndef SIREUM_TYPE_H_org_sireum_Random_Impl_SplitMix64
#define SIREUM_TYPE_H_org_sireum_Random_Impl_SplitMix64

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Random.Impl.SplitMix64
#include <type-org_sireum_U64.h>

typedef struct Random_Impl_SplitMix64 *Random_Impl_SplitMix64;
struct Random_Impl_SplitMix64 {
  TYPE type;
  U64 seed;
};

#define DeclNewRandom_Impl_SplitMix64(x) struct Random_Impl_SplitMix64 x = { .type = TRandom_Impl_SplitMix64 }

#ifdef __cplusplus
}
#endif

#endif