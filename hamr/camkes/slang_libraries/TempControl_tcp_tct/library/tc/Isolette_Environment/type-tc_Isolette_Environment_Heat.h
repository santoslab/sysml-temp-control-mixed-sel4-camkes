#ifndef SIREUM_TYPE_H_tc_Isolette_Environment_Heat
#define SIREUM_TYPE_H_tc_Isolette_Environment_Heat

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Environment.Heat

typedef struct tc_Isolette_Environment_Heat *tc_Isolette_Environment_Heat;
struct tc_Isolette_Environment_Heat {
  TYPE type;
  B dummyField;
};

#define DeclNewtc_Isolette_Environment_Heat(x) struct tc_Isolette_Environment_Heat x = { .type = Ttc_Isolette_Environment_Heat }

#ifdef __cplusplus
}
#endif

#endif