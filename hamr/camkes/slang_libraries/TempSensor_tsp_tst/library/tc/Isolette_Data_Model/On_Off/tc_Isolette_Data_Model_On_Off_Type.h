#ifndef SIREUM_H_tc_Isolette_Data_Model_On_Off_Type
#define SIREUM_H_tc_Isolette_Data_Model_On_Off_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.On_Off.Type
void tc_Isolette_Data_Model_On_Off_Type_byName(STACK_FRAME Option_C6954F result, String s);
void tc_Isolette_Data_Model_On_Off_Type_byOrdinal(STACK_FRAME Option_C6954F result, Z n);
Z tc_Isolette_Data_Model_On_Off_Type_numOfElements(void);
void tc_Isolette_Data_Model_On_Off_Type_cprint(tc_Isolette_Data_Model_On_Off_Type this, B isOut);
void tc_Isolette_Data_Model_On_Off_Type_string_(STACK_FRAME String result, tc_Isolette_Data_Model_On_Off_Type this);

#ifdef __cplusplus
}
#endif

#endif