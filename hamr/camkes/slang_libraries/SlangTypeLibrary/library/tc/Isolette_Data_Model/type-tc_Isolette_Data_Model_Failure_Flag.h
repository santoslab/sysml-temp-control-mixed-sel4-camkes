#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_Failure_Flag
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_Failure_Flag

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.Failure_Flag

typedef struct tc_Isolette_Data_Model_Failure_Flag *tc_Isolette_Data_Model_Failure_Flag;
struct tc_Isolette_Data_Model_Failure_Flag {
  TYPE type;
  B flag;
};

#define DeclNewtc_Isolette_Data_Model_Failure_Flag(x) struct tc_Isolette_Data_Model_Failure_Flag x = { .type = Ttc_Isolette_Data_Model_Failure_Flag }

#ifdef __cplusplus
}
#endif

#endif