#ifndef SIREUM_H_tc_TempControlPeriodic_FanCmd_Type
#define SIREUM_H_tc_TempControlPeriodic_FanCmd_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlPeriodic.FanCmd.Type
void tc_TempControlPeriodic_FanCmd_Type_byName(STACK_FRAME Option_62C8EC result, String s);
void tc_TempControlPeriodic_FanCmd_Type_byOrdinal(STACK_FRAME Option_62C8EC result, Z n);
Z tc_TempControlPeriodic_FanCmd_Type_numOfElements(void);
void tc_TempControlPeriodic_FanCmd_Type_cprint(tc_TempControlPeriodic_FanCmd_Type this, B isOut);
void tc_TempControlPeriodic_FanCmd_Type_string_(STACK_FRAME String result, tc_TempControlPeriodic_FanCmd_Type this);

#ifdef __cplusplus
}
#endif

#endif