#ifndef SIREUM_TYPE_H_org_sireum_Some_B391E9
#define SIREUM_TYPE_H_org_sireum_Some_B391E9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.SetPoint]
#include <type-tc_TempControlMixedSeL4CAmKES_SetPoint.h>

typedef struct Some_B391E9 *Some_B391E9;
struct Some_B391E9 {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_SetPoint value;
};

#define DeclNewSome_B391E9(x) struct Some_B391E9 x = { .type = TSome_B391E9 }

#ifdef __cplusplus
}
#endif

#endif