#ifndef SIREUM_H_tc_TempControlMixedSeL4CAmKES_Fan_Api
#define SIREUM_H_tc_TempControlMixedSeL4CAmKES_Fan_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixedSeL4CAmKES.Fan_Api

#define tc_TempControlMixedSeL4CAmKES_Fan_Api__eq(this, other) Type__eq(this, other)
#define tc_TempControlMixedSeL4CAmKES_Fan_Api__ne(this, other) (!Type__eq(this, other))
#define tc_TempControlMixedSeL4CAmKES_Fan_Api__equiv(this, other) Type__equiv(this, other)
#define tc_TempControlMixedSeL4CAmKES_Fan_Api__inequiv(this, other) (!Type__equiv(this, other))
#define tc_TempControlMixedSeL4CAmKES_Fan_Api_cprint(this, isOut) Type_cprint(this, isOut)
B tc_TempControlMixedSeL4CAmKES_Fan_Api__is(STACK_FRAME void *this);
tc_TempControlMixedSeL4CAmKES_Fan_Api tc_TempControlMixedSeL4CAmKES_Fan_Api__as(STACK_FRAME void *this);
inline void tc_TempControlMixedSeL4CAmKES_Fan_Api_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_Fan_Api this) {
  Type_string_(CALLER result, this);
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_logInfo_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api this, String msg);

Unit tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_logDebug_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api this, String msg);

Unit tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_logError_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api this, String msg);

Unit tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_logInfo_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, String msg);

Unit tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_logDebug_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, String msg);

Unit tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_logError_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, String msg);

Unit tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_put_fanAck_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api this, tc_TempControlMixedSeL4CAmKES_FanAck_Type value);

Unit tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_put_fanAck_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, tc_TempControlMixedSeL4CAmKES_FanAck_Type value);

#ifdef __cplusplus
}
#endif

#endif