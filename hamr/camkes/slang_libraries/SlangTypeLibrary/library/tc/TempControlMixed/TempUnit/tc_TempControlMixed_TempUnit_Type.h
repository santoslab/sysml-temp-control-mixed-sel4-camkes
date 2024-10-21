#ifndef SIREUM_H_tc_TempControlMixed_TempUnit_Type
#define SIREUM_H_tc_TempControlMixed_TempUnit_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.TempControlMixed.TempUnit.Type
void tc_TempControlMixed_TempUnit_Type_byName(STACK_FRAME Option_5F90D6 result, String s);
void tc_TempControlMixed_TempUnit_Type_byOrdinal(STACK_FRAME Option_5F90D6 result, Z n);
Z tc_TempControlMixed_TempUnit_Type_numOfElements(void);
void tc_TempControlMixed_TempUnit_Type_cprint(tc_TempControlMixed_TempUnit_Type this, B isOut);
void tc_TempControlMixed_TempUnit_Type_string_(STACK_FRAME String result, tc_TempControlMixed_TempUnit_Type this);

#ifdef __cplusplus
}
#endif

#endif