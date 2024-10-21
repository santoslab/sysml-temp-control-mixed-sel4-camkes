#ifndef SIREUM_TYPE_H_org_sireum_Some_FBE41D
#define SIREUM_TYPE_H_org_sireum_Some_FBE41D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]
#include <type-tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api.h>

typedef struct Some_FBE41D *Some_FBE41D;
struct Some_FBE41D {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api value;
};

#define DeclNewSome_FBE41D(x) struct Some_FBE41D x = { .type = TSome_FBE41D }

#ifdef __cplusplus
}
#endif

#endif