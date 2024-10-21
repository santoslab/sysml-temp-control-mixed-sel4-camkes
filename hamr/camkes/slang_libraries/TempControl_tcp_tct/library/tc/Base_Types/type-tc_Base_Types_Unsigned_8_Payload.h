#ifndef SIREUM_TYPE_H_tc_Base_Types_Unsigned_8_Payload
#define SIREUM_TYPE_H_tc_Base_Types_Unsigned_8_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.Unsigned_8_Payload
#include <type-org_sireum_U8.h>

typedef struct tc_Base_Types_Unsigned_8_Payload *tc_Base_Types_Unsigned_8_Payload;
struct tc_Base_Types_Unsigned_8_Payload {
  TYPE type;
  U8 value;
};

#define DeclNewtc_Base_Types_Unsigned_8_Payload(x) struct tc_Base_Types_Unsigned_8_Payload x = { .type = Ttc_Base_Types_Unsigned_8_Payload }

#ifdef __cplusplus
}
#endif

#endif