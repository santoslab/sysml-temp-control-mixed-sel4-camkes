#ifndef SIREUM_TYPE_H_tc_Isolette_Environment_Interface_Interaction_Payload
#define SIREUM_TYPE_H_tc_Isolette_Environment_Interface_Interaction_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Environment.Interface_Interaction_Payload
#include <type-tc_Isolette_Environment_Interface_Interaction.h>

typedef struct tc_Isolette_Environment_Interface_Interaction_Payload *tc_Isolette_Environment_Interface_Interaction_Payload;
struct tc_Isolette_Environment_Interface_Interaction_Payload {
  TYPE type;
  struct tc_Isolette_Environment_Interface_Interaction value;
};

#define DeclNewtc_Isolette_Environment_Interface_Interaction_Payload(x) struct tc_Isolette_Environment_Interface_Interaction_Payload x = { .type = Ttc_Isolette_Environment_Interface_Interaction_Payload }

#ifdef __cplusplus
}
#endif

#endif