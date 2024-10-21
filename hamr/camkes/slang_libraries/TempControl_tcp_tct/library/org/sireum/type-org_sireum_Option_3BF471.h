#ifndef SIREUM_TYPE_H_org_sireum_Option_3BF471
#define SIREUM_TYPE_H_org_sireum_Option_3BF471

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.SetPoint]

#include <type-org_sireum_None_30CA2A.h>
#include <type-org_sireum_Some_B391E9.h>

typedef union Option_3BF471 *Option_3BF471;
union Option_3BF471 {
  TYPE type;
  struct None_30CA2A None_30CA2A;
  struct Some_B391E9 Some_B391E9;
};

#define DeclNewOption_3BF471(x) union Option_3BF471 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif