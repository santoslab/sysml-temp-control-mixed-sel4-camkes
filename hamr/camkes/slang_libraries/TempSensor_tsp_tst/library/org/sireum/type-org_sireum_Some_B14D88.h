#ifndef SIREUM_TYPE_H_org_sireum_Some_B14D88
#define SIREUM_TYPE_H_org_sireum_Some_B14D88

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]
#include <type-tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api.h>

typedef struct Some_B14D88 *Some_B14D88;
struct Some_B14D88 {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api value;
};

#define DeclNewSome_B14D88(x) struct Some_B14D88 x = { .type = TSome_B14D88 }

#ifdef __cplusplus
}
#endif

#endif