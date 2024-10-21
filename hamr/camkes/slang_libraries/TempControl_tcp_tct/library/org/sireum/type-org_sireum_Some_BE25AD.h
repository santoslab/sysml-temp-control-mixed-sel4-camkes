#ifndef SIREUM_TYPE_H_org_sireum_Some_BE25AD
#define SIREUM_TYPE_H_org_sireum_Some_BE25AD

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]
#include <type-tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api.h>

typedef struct Some_BE25AD *Some_BE25AD;
struct Some_BE25AD {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api value;
};

#define DeclNewSome_BE25AD(x) struct Some_BE25AD x = { .type = TSome_BE25AD }

#ifdef __cplusplus
}
#endif

#endif