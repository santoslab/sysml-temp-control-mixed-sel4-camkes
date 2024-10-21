#ifndef SIREUM_TYPE_H_tc_Base_Types_String_Payload
#define SIREUM_TYPE_H_tc_Base_Types_String_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.String_Payload

typedef struct tc_Base_Types_String_Payload *tc_Base_Types_String_Payload;
struct tc_Base_Types_String_Payload {
  TYPE type;
  struct StaticString value;
};

#define DeclNewtc_Base_Types_String_Payload(x) struct tc_Base_Types_String_Payload x = { .type = Ttc_Base_Types_String_Payload }

#ifdef __cplusplus
}
#endif

#endif