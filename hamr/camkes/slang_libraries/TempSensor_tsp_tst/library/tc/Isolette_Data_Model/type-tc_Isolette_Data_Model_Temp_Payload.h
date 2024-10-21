#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_Temp_Payload
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_Temp_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.Temp_Payload
#include <type-tc_Isolette_Data_Model_Temp.h>

typedef struct tc_Isolette_Data_Model_Temp_Payload *tc_Isolette_Data_Model_Temp_Payload;
struct tc_Isolette_Data_Model_Temp_Payload {
  TYPE type;
  struct tc_Isolette_Data_Model_Temp value;
};

#define DeclNewtc_Isolette_Data_Model_Temp_Payload(x) struct tc_Isolette_Data_Model_Temp_Payload x = { .type = Ttc_Isolette_Data_Model_Temp_Payload }

#ifdef __cplusplus
}
#endif

#endif