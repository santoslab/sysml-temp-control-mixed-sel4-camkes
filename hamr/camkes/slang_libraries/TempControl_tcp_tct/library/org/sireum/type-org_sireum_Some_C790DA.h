#ifndef SIREUM_TYPE_H_org_sireum_Some_C790DA
#define SIREUM_TYPE_H_org_sireum_Some_C790DA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.Isolette_Data_Model.Regulator_Mode.Type]
#include <type-tc_Isolette_Data_Model_Regulator_Mode_Type.h>

typedef struct Some_C790DA *Some_C790DA;
struct Some_C790DA {
  TYPE type;
  tc_Isolette_Data_Model_Regulator_Mode_Type value;
};

#define DeclNewSome_C790DA(x) struct Some_C790DA x = { .type = TSome_C790DA }

#ifdef __cplusplus
}
#endif

#endif