#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_PhysicalTemp_Payload
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_PhysicalTemp_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.PhysicalTemp_Payload
#include <type-tc_Isolette_Data_Model_PhysicalTemp.h>

typedef struct tc_Isolette_Data_Model_PhysicalTemp_Payload *tc_Isolette_Data_Model_PhysicalTemp_Payload;
struct tc_Isolette_Data_Model_PhysicalTemp_Payload {
  TYPE type;
  struct tc_Isolette_Data_Model_PhysicalTemp value;
};

#define DeclNewtc_Isolette_Data_Model_PhysicalTemp_Payload(x) struct tc_Isolette_Data_Model_PhysicalTemp_Payload x = { .type = Ttc_Isolette_Data_Model_PhysicalTemp_Payload }

#ifdef __cplusplus
}
#endif

#endif