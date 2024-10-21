#ifndef SIREUM_TYPE_H_org_sireum_Random_Impl_Xoshiro256
#define SIREUM_TYPE_H_org_sireum_Random_Impl_Xoshiro256

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Random.Impl.Xoshiro256
#include <type-org_sireum_U64.h>
#include <type-org_sireum_U64.h>
#include <type-org_sireum_U64.h>
#include <type-org_sireum_U64.h>

typedef struct Random_Impl_Xoshiro256 *Random_Impl_Xoshiro256;
struct Random_Impl_Xoshiro256 {
  TYPE type;
  U64 seed0;
  U64 seed1;
  U64 seed2;
  U64 seed3;
};

#define DeclNewRandom_Impl_Xoshiro256(x) struct Random_Impl_Xoshiro256 x = { .type = TRandom_Impl_Xoshiro256 }

#ifdef __cplusplus
}
#endif

#endif