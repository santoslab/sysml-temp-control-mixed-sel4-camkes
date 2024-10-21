#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempControl_Api
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempControl_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.TempControl_Api

#include <type-tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api.h>

typedef union tc_TempControlMixedSeL4CAmKES_TempControl_Api *tc_TempControlMixedSeL4CAmKES_TempControl_Api;
union tc_TempControlMixedSeL4CAmKES_TempControl_Api {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api;
  struct tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Api(x) union tc_TempControlMixedSeL4CAmKES_TempControl_Api x = { 0 }

#ifdef __cplusplus
}
#endif

#endif