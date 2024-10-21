#ifndef SIREUM_H_tc_TempControlMixed_FanCmd_Type
#define SIREUM_H_tc_TempControlMixed_FanCmd_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixed.FanCmd.Type
void tc_TempControlMixed_FanCmd_Type_byName(STACK_FRAME Option_8499F5 result, String s);
void tc_TempControlMixed_FanCmd_Type_byOrdinal(STACK_FRAME Option_8499F5 result, Z n);
Z tc_TempControlMixed_FanCmd_Type_numOfElements(void);
void tc_TempControlMixed_FanCmd_Type_cprint(tc_TempControlMixed_FanCmd_Type this, B isOut);
void tc_TempControlMixed_FanCmd_Type_string_(STACK_FRAME String result, tc_TempControlMixed_FanCmd_Type this);

#ifdef __cplusplus
}
#endif

#endif