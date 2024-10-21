#ifndef SIREUM_H_tc_Isolette_Data_Model_ValueStatus_Type
#define SIREUM_H_tc_Isolette_Data_Model_ValueStatus_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.ValueStatus.Type
void tc_Isolette_Data_Model_ValueStatus_Type_byName(STACK_FRAME Option_570179 result, String s);
void tc_Isolette_Data_Model_ValueStatus_Type_byOrdinal(STACK_FRAME Option_570179 result, Z n);
Z tc_Isolette_Data_Model_ValueStatus_Type_numOfElements(void);
void tc_Isolette_Data_Model_ValueStatus_Type_cprint(tc_Isolette_Data_Model_ValueStatus_Type this, B isOut);
void tc_Isolette_Data_Model_ValueStatus_Type_string_(STACK_FRAME String result, tc_Isolette_Data_Model_ValueStatus_Type this);

#ifdef __cplusplus
}
#endif

#endif