#ifndef SIREUM_H_tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api
#define SIREUM_H_tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api

#define tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_id_(this) ((this)->id)
#define tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_currentTemp_Id_(this) ((this)->currentTemp_Id)
#define tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_tempChanged_Id_(this) ((this)->tempChanged_Id)
#define tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_fanAck_Id_(this) ((this)->fanAck_Id)
#define tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_setPoint_Id_(this) ((this)->setPoint_Id)
#define tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_fanCmd_Id_(this) ((this)->fanCmd_Id)

B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__eq(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api other);
inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__ne(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api other) {
  return !tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__eq(this, other);
};
B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__equiv(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api other);
inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__inequiv(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api other) {
  return !tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__equiv(this, other);
};
void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this);
void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_cprint(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, B isOut);

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__is(STACK_FRAME void* this) {
  return ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) this)->type == Ttc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api;
}

inline tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__as(STACK_FRAME void *this) {
  if (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__is(CALLER this)) return (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api.");
  abort();
}

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, art_Art_BridgeId id, art_Art_PortId currentTemp_Id, art_Art_PortId tempChanged_Id, art_Art_PortId fanAck_Id, art_Art_PortId setPoint_Id, art_Art_PortId fanCmd_Id);

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_(STACK_FRAME Option_DEC797 result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this);

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_(STACK_FRAME Option_C622DB result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this);

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_(STACK_FRAME Option_36021E result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this);

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_(STACK_FRAME Option_3BF471 result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif