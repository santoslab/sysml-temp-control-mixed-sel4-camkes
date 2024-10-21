#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_Temp
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_Temp

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.Temp

typedef struct tc_Isolette_Data_Model_Temp *tc_Isolette_Data_Model_Temp;
struct tc_Isolette_Data_Model_Temp {
  TYPE type;
  F32 degrees;
};

#define DeclNewtc_Isolette_Data_Model_Temp(x) struct tc_Isolette_Data_Model_Temp x = { .type = Ttc_Isolette_Data_Model_Temp }

#ifdef __cplusplus
}
#endif

#endif