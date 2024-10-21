#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_Status_Payload
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_Status_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.Status_Payload
#include <type-tc_Isolette_Data_Model_Status_Type.h>

typedef struct tc_Isolette_Data_Model_Status_Payload *tc_Isolette_Data_Model_Status_Payload;
struct tc_Isolette_Data_Model_Status_Payload {
  TYPE type;
  tc_Isolette_Data_Model_Status_Type value;
};

#define DeclNewtc_Isolette_Data_Model_Status_Payload(x) struct tc_Isolette_Data_Model_Status_Payload x = { .type = Ttc_Isolette_Data_Model_Status_Payload }

#ifdef __cplusplus
}
#endif

#endif