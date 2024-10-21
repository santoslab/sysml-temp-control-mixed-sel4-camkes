#ifndef SIREUM_TYPE_H_org_sireum_Some_455777
#define SIREUM_TYPE_H_org_sireum_Some_455777

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.Isolette_Data_Model.Monitor_Mode.Type]
#include <type-tc_Isolette_Data_Model_Monitor_Mode_Type.h>

typedef struct Some_455777 *Some_455777;
struct Some_455777 {
  TYPE type;
  tc_Isolette_Data_Model_Monitor_Mode_Type value;
};

#define DeclNewSome_455777(x) struct Some_455777 x = { .type = TSome_455777 }

#ifdef __cplusplus
}
#endif

#endif