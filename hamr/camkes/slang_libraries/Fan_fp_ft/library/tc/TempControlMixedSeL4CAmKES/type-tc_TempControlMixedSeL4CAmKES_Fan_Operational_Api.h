#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api
#include <type-art_Art_BridgeId.h>
#include <type-art_Art_PortId.h>
#include <type-art_Art_PortId.h>

typedef struct tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api *tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api;
struct tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api {
  TYPE type;
  art_Art_BridgeId id;
  art_Art_PortId fanCmd_Id;
  art_Art_PortId fanAck_Id;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_Fan_Operational_Api(x) struct tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api x = { .type = Ttc_TempControlMixedSeL4CAmKES_Fan_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif