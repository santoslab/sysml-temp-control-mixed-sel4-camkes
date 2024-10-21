#ifndef SIREUM_TYPE_H_org_sireum_Some_140719
#define SIREUM_TYPE_H_org_sireum_Some_140719

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.Isolette_Data_Model.Status.Type]
#include <type-tc_Isolette_Data_Model_Status_Type.h>

typedef struct Some_140719 *Some_140719;
struct Some_140719 {
  TYPE type;
  tc_Isolette_Data_Model_Status_Type value;
};

#define DeclNewSome_140719(x) struct Some_140719 x = { .type = TSome_140719 }

#ifdef __cplusplus
}
#endif

#endif