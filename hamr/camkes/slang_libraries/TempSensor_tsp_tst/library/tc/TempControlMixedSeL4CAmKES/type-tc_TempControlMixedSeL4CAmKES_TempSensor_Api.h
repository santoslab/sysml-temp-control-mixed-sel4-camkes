#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempSensor_Api
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempSensor_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.TempSensor_Api

#include <type-tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api.h>

typedef union tc_TempControlMixedSeL4CAmKES_TempSensor_Api *tc_TempControlMixedSeL4CAmKES_TempSensor_Api;
union tc_TempControlMixedSeL4CAmKES_TempSensor_Api {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api;
  struct tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_Api(x) union tc_TempControlMixedSeL4CAmKES_TempSensor_Api x = { 0 }

#ifdef __cplusplus
}
#endif

#endif