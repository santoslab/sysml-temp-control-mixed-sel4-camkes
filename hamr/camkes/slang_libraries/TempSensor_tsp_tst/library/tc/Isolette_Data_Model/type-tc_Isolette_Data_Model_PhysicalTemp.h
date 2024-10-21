#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_PhysicalTemp
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_PhysicalTemp

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.PhysicalTemp

typedef struct tc_Isolette_Data_Model_PhysicalTemp *tc_Isolette_Data_Model_PhysicalTemp;
struct tc_Isolette_Data_Model_PhysicalTemp {
  TYPE type;
  F32 degrees;
};

#define DeclNewtc_Isolette_Data_Model_PhysicalTemp(x) struct tc_Isolette_Data_Model_PhysicalTemp x = { .type = Ttc_Isolette_Data_Model_PhysicalTemp }

#ifdef __cplusplus
}
#endif

#endif