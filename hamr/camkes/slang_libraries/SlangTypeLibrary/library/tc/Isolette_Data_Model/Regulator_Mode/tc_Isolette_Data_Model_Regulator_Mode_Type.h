#ifndef SIREUM_H_tc_Isolette_Data_Model_Regulator_Mode_Type
#define SIREUM_H_tc_Isolette_Data_Model_Regulator_Mode_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.Regulator_Mode.Type
void tc_Isolette_Data_Model_Regulator_Mode_Type_byName(STACK_FRAME Option_A2275D result, String s);
void tc_Isolette_Data_Model_Regulator_Mode_Type_byOrdinal(STACK_FRAME Option_A2275D result, Z n);
Z tc_Isolette_Data_Model_Regulator_Mode_Type_numOfElements(void);
void tc_Isolette_Data_Model_Regulator_Mode_Type_cprint(tc_Isolette_Data_Model_Regulator_Mode_Type this, B isOut);
void tc_Isolette_Data_Model_Regulator_Mode_Type_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Regulator_Mode_Type this);

#ifdef __cplusplus
}
#endif

#endif