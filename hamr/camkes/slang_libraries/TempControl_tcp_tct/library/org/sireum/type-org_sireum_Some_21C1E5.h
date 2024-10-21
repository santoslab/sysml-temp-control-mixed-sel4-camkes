#ifndef SIREUM_TYPE_H_org_sireum_Some_21C1E5
#define SIREUM_TYPE_H_org_sireum_Some_21C1E5

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.Isolette_Data_Model.ValueStatus.Type]
#include <type-tc_Isolette_Data_Model_ValueStatus_Type.h>

typedef struct Some_21C1E5 *Some_21C1E5;
struct Some_21C1E5 {
  TYPE type;
  tc_Isolette_Data_Model_ValueStatus_Type value;
};

#define DeclNewSome_21C1E5(x) struct Some_21C1E5 x = { .type = TSome_21C1E5 }

#ifdef __cplusplus
}
#endif

#endif