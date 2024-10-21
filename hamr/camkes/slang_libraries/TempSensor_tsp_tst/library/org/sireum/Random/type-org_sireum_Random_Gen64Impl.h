#ifndef SIREUM_TYPE_H_org_sireum_Random_Gen64Impl
#define SIREUM_TYPE_H_org_sireum_Random_Gen64Impl

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Random.Gen64Impl
#include <type-org_sireum_Random_Impl_Xoshiro256.h>

typedef struct Random_Gen64Impl *Random_Gen64Impl;
struct Random_Gen64Impl {
  TYPE type;
  struct Random_Impl_Xoshiro256 gen;
};

#define DeclNewRandom_Gen64Impl(x) struct Random_Gen64Impl x = { .type = TRandom_Gen64Impl }

#ifdef __cplusplus
}
#endif

#endif