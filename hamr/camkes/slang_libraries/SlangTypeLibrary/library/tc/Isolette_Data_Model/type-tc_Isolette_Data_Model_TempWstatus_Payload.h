#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_TempWstatus_Payload
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_TempWstatus_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.TempWstatus_Payload
#include <type-tc_Isolette_Data_Model_TempWstatus.h>

typedef struct tc_Isolette_Data_Model_TempWstatus_Payload *tc_Isolette_Data_Model_TempWstatus_Payload;
struct tc_Isolette_Data_Model_TempWstatus_Payload {
  TYPE type;
  struct tc_Isolette_Data_Model_TempWstatus value;
};

#define DeclNewtc_Isolette_Data_Model_TempWstatus_Payload(x) struct tc_Isolette_Data_Model_TempWstatus_Payload x = { .type = Ttc_Isolette_Data_Model_TempWstatus_Payload }

#ifdef __cplusplus
}
#endif

#endif