#ifndef SIREUM_H_tc_TempControlMixed_FanAck_Type
#define SIREUM_H_tc_TempControlMixed_FanAck_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixed.FanAck.Type
void tc_TempControlMixed_FanAck_Type_byName(STACK_FRAME Option_AAF24B result, String s);
void tc_TempControlMixed_FanAck_Type_byOrdinal(STACK_FRAME Option_AAF24B result, Z n);
Z tc_TempControlMixed_FanAck_Type_numOfElements(void);
void tc_TempControlMixed_FanAck_Type_cprint(tc_TempControlMixed_FanAck_Type this, B isOut);
void tc_TempControlMixed_FanAck_Type_string_(STACK_FRAME String result, tc_TempControlMixed_FanAck_Type this);

#ifdef __cplusplus
}
#endif

#endif