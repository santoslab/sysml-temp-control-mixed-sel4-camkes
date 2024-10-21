#ifndef SIREUM_TYPE_H_org_sireum_Random_Gen64
#define SIREUM_TYPE_H_org_sireum_Random_Gen64

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Random.Gen64

#include <type-org_sireum_Random_Gen64Impl.h>

typedef union Random_Gen64 *Random_Gen64;
union Random_Gen64 {
  TYPE type;
  struct Random_Gen64Impl Random_Gen64Impl;
};

#define DeclNewRandom_Gen64(x) union Random_Gen64 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif