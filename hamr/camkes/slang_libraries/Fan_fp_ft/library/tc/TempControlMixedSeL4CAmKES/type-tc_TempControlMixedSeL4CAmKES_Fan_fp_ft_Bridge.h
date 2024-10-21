#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge
#include <type-art_Art_BridgeId.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_0247A1.h>
#include <type-art_art_Port_70EB35.h>
#include <type-art_art_Port_AE5929.h>
#include <type-art_Bridge_Ports.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge *tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge;
struct tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_0247A1 dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_70EB35 fanCmd;
  struct art_Port_AE5929 fanAck;
  struct art_Bridge_Ports ports;
  struct tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api initialization_api;
  struct tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api operational_api;
  art_Art_BridgeId id;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge(x) struct tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge x = { .type = Ttc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge }

#ifdef __cplusplus
}
#endif

#endif