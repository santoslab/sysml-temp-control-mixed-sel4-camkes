#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_TempWstatus
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_TempWstatus

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.TempWstatus
#include <type-tc_Isolette_Data_Model_ValueStatus_Type.h>

typedef struct tc_Isolette_Data_Model_TempWstatus *tc_Isolette_Data_Model_TempWstatus;
struct tc_Isolette_Data_Model_TempWstatus {
  TYPE type;
  F32 degrees;
  tc_Isolette_Data_Model_ValueStatus_Type status;
};

#define DeclNewtc_Isolette_Data_Model_TempWstatus(x) struct tc_Isolette_Data_Model_TempWstatus x = { .type = Ttc_Isolette_Data_Model_TempWstatus }

#ifdef __cplusplus
}
#endif

#endif