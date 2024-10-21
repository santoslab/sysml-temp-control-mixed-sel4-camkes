#ifndef SIREUM_TYPE_H_tc_Isolette_Environment_Heat_Payload
#define SIREUM_TYPE_H_tc_Isolette_Environment_Heat_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Environment.Heat_Payload
#include <type-tc_Isolette_Environment_Heat.h>

typedef struct tc_Isolette_Environment_Heat_Payload *tc_Isolette_Environment_Heat_Payload;
struct tc_Isolette_Environment_Heat_Payload {
  TYPE type;
  struct tc_Isolette_Environment_Heat value;
};

#define DeclNewtc_Isolette_Environment_Heat_Payload(x) struct tc_Isolette_Environment_Heat_Payload x = { .type = Ttc_Isolette_Environment_Heat_Payload }

#ifdef __cplusplus
}
#endif

#endif