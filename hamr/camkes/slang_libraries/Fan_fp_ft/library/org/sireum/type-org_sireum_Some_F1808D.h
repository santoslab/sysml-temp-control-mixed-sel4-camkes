#ifndef SIREUM_TYPE_H_org_sireum_Some_F1808D
#define SIREUM_TYPE_H_org_sireum_Some_F1808D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.Isolette_Data_Model.On_Off.Type]
#include <type-tc_Isolette_Data_Model_On_Off_Type.h>

typedef struct Some_F1808D *Some_F1808D;
struct Some_F1808D {
  TYPE type;
  tc_Isolette_Data_Model_On_Off_Type value;
};

#define DeclNewSome_F1808D(x) struct Some_F1808D x = { .type = TSome_F1808D }

#ifdef __cplusplus
}
#endif

#endif