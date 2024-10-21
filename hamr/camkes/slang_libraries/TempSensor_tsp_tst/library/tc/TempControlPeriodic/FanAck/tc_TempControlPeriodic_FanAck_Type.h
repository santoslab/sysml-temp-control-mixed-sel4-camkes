#ifndef SIREUM_H_tc_TempControlPeriodic_FanAck_Type
#define SIREUM_H_tc_TempControlPeriodic_FanAck_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlPeriodic.FanAck.Type
void tc_TempControlPeriodic_FanAck_Type_byName(STACK_FRAME Option_121E48 result, String s);
void tc_TempControlPeriodic_FanAck_Type_byOrdinal(STACK_FRAME Option_121E48 result, Z n);
Z tc_TempControlPeriodic_FanAck_Type_numOfElements(void);
void tc_TempControlPeriodic_FanAck_Type_cprint(tc_TempControlPeriodic_FanAck_Type this, B isOut);
void tc_TempControlPeriodic_FanAck_Type_string_(STACK_FRAME String result, tc_TempControlPeriodic_FanAck_Type this);

#ifdef __cplusplus
}
#endif

#endif