#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_Failure_Flag_Payload
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_Failure_Flag_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.Failure_Flag_Payload
#include <type-tc_Isolette_Data_Model_Failure_Flag.h>

typedef struct tc_Isolette_Data_Model_Failure_Flag_Payload *tc_Isolette_Data_Model_Failure_Flag_Payload;
struct tc_Isolette_Data_Model_Failure_Flag_Payload {
  TYPE type;
  struct tc_Isolette_Data_Model_Failure_Flag value;
};

#define DeclNewtc_Isolette_Data_Model_Failure_Flag_Payload(x) struct tc_Isolette_Data_Model_Failure_Flag_Payload x = { .type = Ttc_Isolette_Data_Model_Failure_Flag_Payload }

#ifdef __cplusplus
}
#endif

#endif