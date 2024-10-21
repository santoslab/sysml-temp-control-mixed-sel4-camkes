#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_ValueStatus_Payload
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_ValueStatus_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.ValueStatus_Payload
#include <type-tc_Isolette_Data_Model_ValueStatus_Type.h>

typedef struct tc_Isolette_Data_Model_ValueStatus_Payload *tc_Isolette_Data_Model_ValueStatus_Payload;
struct tc_Isolette_Data_Model_ValueStatus_Payload {
  TYPE type;
  tc_Isolette_Data_Model_ValueStatus_Type value;
};

#define DeclNewtc_Isolette_Data_Model_ValueStatus_Payload(x) struct tc_Isolette_Data_Model_ValueStatus_Payload x = { .type = Ttc_Isolette_Data_Model_ValueStatus_Payload }

#ifdef __cplusplus
}
#endif

#endif