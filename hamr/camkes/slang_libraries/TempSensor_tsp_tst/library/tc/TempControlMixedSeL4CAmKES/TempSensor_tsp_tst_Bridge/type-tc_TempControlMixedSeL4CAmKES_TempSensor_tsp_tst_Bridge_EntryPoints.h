#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-org_sireum_Option_0247A1.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>
#include <type-org_sireum_IS_D10119.h>

typedef struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints *tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints;
struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints {
  TYPE type;
  union Option_0247A1 dispatchTriggers;
  struct tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api initialization_api;
  struct tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api operational_api;
  struct IS_D10119 dataInPortIds;
  struct IS_D10119 eventInPortIds;
  struct IS_D10119 dataOutPortIds;
  struct IS_D10119 eventOutPortIds;
  art_Art_BridgeId TempSensor_tsp_tst_BridgeId;
  art_Art_PortId currentTemp_Id;
  art_Art_PortId tempChanged_Id;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints(x) struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints x = { .type = Ttc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif