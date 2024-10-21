#ifndef SIREUM_H_tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge
#define SIREUM_H_tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_init(STACK_FRAME_ONLY);

Option_9C9ECC tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_c_initialization_api(STACK_FRAME_ONLY);
void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_c_initialization_api_a(STACK_FRAME Option_9C9ECC p_c_initialization_api);
Option_CA19CB tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_c_operational_api(STACK_FRAME_ONLY);
void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_c_operational_api_a(STACK_FRAME Option_CA19CB p_c_operational_api);

// tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge

#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_id_(this) ((this)->id)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_name_(this) ((String) &(this)->name)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_dispatchTriggers_(this) ((Option_0247A1) &(this)->dispatchTriggers)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_fanCmd_(this) ((art_Port_70EB35) &(this)->fanCmd)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_fanAck_(this) ((art_Port_AE5929) &(this)->fanAck)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_initialization_api_(this) ((tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &(this)->initialization_api)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_operational_api_(this) ((tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &(this)->operational_api)
#define tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__eq(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge this, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge other);
inline B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__ne(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge this, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge other) {
  return !tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__eq(this, other);
};
B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__equiv(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge this, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge other);
inline B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__inequiv(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge this, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge other) {
  return !tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__equiv(this, other);
};
void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge this);
void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_cprint(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge this, B isOut);

inline B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge) this)->type == Ttc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge;
}

inline tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__as(STACK_FRAME void *this) {
  if (tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge__is(CALLER this)) return (tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.");
  abort();
}

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge this, art_Art_BridgeId id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_0247A1 dispatchTriggers, art_Port_70EB35 fanCmd, art_Port_AE5929 fanAck);

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_init_c_initialization_api(STACK_FRAME_ONLY);

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_init_c_operational_api(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif