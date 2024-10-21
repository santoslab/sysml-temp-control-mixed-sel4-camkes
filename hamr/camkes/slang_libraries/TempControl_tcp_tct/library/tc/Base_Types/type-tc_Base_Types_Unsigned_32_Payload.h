#ifndef SIREUM_TYPE_H_tc_Base_Types_Unsigned_32_Payload
#define SIREUM_TYPE_H_tc_Base_Types_Unsigned_32_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.Unsigned_32_Payload
#include <type-org_sireum_U32.h>

typedef struct tc_Base_Types_Unsigned_32_Payload *tc_Base_Types_Unsigned_32_Payload;
struct tc_Base_Types_Unsigned_32_Payload {
  TYPE type;
  U32 value;
};

#define DeclNewtc_Base_Types_Unsigned_32_Payload(x) struct tc_Base_Types_Unsigned_32_Payload x = { .type = Ttc_Base_Types_Unsigned_32_Payload }

#ifdef __cplusplus
}
#endif

#endif