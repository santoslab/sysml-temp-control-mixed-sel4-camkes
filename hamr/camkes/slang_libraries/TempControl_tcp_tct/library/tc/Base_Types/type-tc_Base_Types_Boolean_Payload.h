#ifndef SIREUM_TYPE_H_tc_Base_Types_Boolean_Payload
#define SIREUM_TYPE_H_tc_Base_Types_Boolean_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.Boolean_Payload

typedef struct tc_Base_Types_Boolean_Payload *tc_Base_Types_Boolean_Payload;
struct tc_Base_Types_Boolean_Payload {
  TYPE type;
  B value;
};

#define DeclNewtc_Base_Types_Boolean_Payload(x) struct tc_Base_Types_Boolean_Payload x = { .type = Ttc_Base_Types_Boolean_Payload }

#ifdef __cplusplus
}
#endif

#endif