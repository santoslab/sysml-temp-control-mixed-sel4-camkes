#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_On_Off_Payload
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_On_Off_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.On_Off_Payload
#include <type-tc_Isolette_Data_Model_On_Off_Type.h>

typedef struct tc_Isolette_Data_Model_On_Off_Payload *tc_Isolette_Data_Model_On_Off_Payload;
struct tc_Isolette_Data_Model_On_Off_Payload {
  TYPE type;
  tc_Isolette_Data_Model_On_Off_Type value;
};

#define DeclNewtc_Isolette_Data_Model_On_Off_Payload(x) struct tc_Isolette_Data_Model_On_Off_Payload x = { .type = Ttc_Isolette_Data_Model_On_Off_Payload }

#ifdef __cplusplus
}
#endif

#endif