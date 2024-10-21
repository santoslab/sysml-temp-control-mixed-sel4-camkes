#ifndef SIREUM_TYPE_H_org_sireum_Some_0C4CF8
#define SIREUM_TYPE_H_org_sireum_Some_0C4CF8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]
#include <type-tc_TempControlMixedSeL4CAmKES_TempUnit_Type.h>

typedef struct Some_0C4CF8 *Some_0C4CF8;
struct Some_0C4CF8 {
  TYPE type;
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type value;
};

#define DeclNewSome_0C4CF8(x) struct Some_0C4CF8 x = { .type = TSome_0C4CF8 }

#ifdef __cplusplus
}
#endif

#endif