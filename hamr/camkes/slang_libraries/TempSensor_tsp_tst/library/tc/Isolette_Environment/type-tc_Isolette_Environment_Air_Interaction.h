#ifndef SIREUM_TYPE_H_tc_Isolette_Environment_Air_Interaction
#define SIREUM_TYPE_H_tc_Isolette_Environment_Air_Interaction

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Environment.Air_Interaction

typedef struct tc_Isolette_Environment_Air_Interaction *tc_Isolette_Environment_Air_Interaction;
struct tc_Isolette_Environment_Air_Interaction {
  TYPE type;
  B dummyField;
};

#define DeclNewtc_Isolette_Environment_Air_Interaction(x) struct tc_Isolette_Environment_Air_Interaction x = { .type = Ttc_Isolette_Environment_Air_Interaction }

#ifdef __cplusplus
}
#endif

#endif