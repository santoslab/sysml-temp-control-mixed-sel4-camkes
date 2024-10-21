#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>

typedef struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api *tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api;
struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api {
  TYPE type;
  art_Art_BridgeId id;
  art_Art_PortId currentTemp_Id;
  art_Art_PortId tempChanged_Id;
  art_Art_PortId fanAck_Id;
  art_Art_PortId setPoint_Id;
  art_Art_PortId fanCmd_Id;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api(x) struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api x = { .type = Ttc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif