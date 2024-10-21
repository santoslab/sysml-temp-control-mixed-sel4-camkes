#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge
#include <type-art_Art_BridgeId.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_0247A1.h>
#include <type-art_art_Port_890848.h>
#include <type-art_art_Port_9CBF18.h>
#include <type-art_Bridge_Ports.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge *tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge;
struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_0247A1 dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_890848 currentTemp;
  struct art_Port_9CBF18 tempChanged;
  struct art_Bridge_Ports ports;
  struct tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api initialization_api;
  struct tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api operational_api;
  art_Art_BridgeId id;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge(x) struct tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge x = { .type = Ttc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge }

#ifdef __cplusplus
}
#endif

#endif