#ifndef SIREUM_TYPE_H_org_sireum_Random_Gen
#define SIREUM_TYPE_H_org_sireum_Random_Gen

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Random.Gen

#include <type-org_sireum_Random_Gen64Impl.h>

typedef union Random_Gen *Random_Gen;
union Random_Gen {
  TYPE type;
  struct Random_Gen64Impl Random_Gen64Impl;
};

#define DeclNewRandom_Gen(x) union Random_Gen x = { 0 }

#ifdef __cplusplus
}
#endif

#endif