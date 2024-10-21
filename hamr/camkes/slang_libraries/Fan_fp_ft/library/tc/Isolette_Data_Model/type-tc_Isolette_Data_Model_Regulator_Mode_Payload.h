#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_Regulator_Mode_Payload
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_Regulator_Mode_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.Regulator_Mode_Payload
#include <type-tc_Isolette_Data_Model_Regulator_Mode_Type.h>

typedef struct tc_Isolette_Data_Model_Regulator_Mode_Payload *tc_Isolette_Data_Model_Regulator_Mode_Payload;
struct tc_Isolette_Data_Model_Regulator_Mode_Payload {
  TYPE type;
  tc_Isolette_Data_Model_Regulator_Mode_Type value;
};

#define DeclNewtc_Isolette_Data_Model_Regulator_Mode_Payload(x) struct tc_Isolette_Data_Model_Regulator_Mode_Payload x = { .type = Ttc_Isolette_Data_Model_Regulator_Mode_Payload }

#ifdef __cplusplus
}
#endif

#endif