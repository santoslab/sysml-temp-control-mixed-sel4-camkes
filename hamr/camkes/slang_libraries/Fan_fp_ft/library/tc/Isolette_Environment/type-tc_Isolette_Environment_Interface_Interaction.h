#ifndef SIREUM_TYPE_H_tc_Isolette_Environment_Interface_Interaction
#define SIREUM_TYPE_H_tc_Isolette_Environment_Interface_Interaction

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Environment.Interface_Interaction

typedef struct tc_Isolette_Environment_Interface_Interaction *tc_Isolette_Environment_Interface_Interaction;
struct tc_Isolette_Environment_Interface_Interaction {
  TYPE type;
  B dummyField;
};

#define DeclNewtc_Isolette_Environment_Interface_Interaction(x) struct tc_Isolette_Environment_Interface_Interaction x = { .type = Ttc_Isolette_Environment_Interface_Interaction }

#ifdef __cplusplus
}
#endif

#endif