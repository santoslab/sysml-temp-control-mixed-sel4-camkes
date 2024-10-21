#ifndef SIREUM_TYPE_H_tc_Base_Types_Unsigned_16_Payload
#define SIREUM_TYPE_H_tc_Base_Types_Unsigned_16_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.Unsigned_16_Payload
#include <type-org_sireum_U16.h>

typedef struct tc_Base_Types_Unsigned_16_Payload *tc_Base_Types_Unsigned_16_Payload;
struct tc_Base_Types_Unsigned_16_Payload {
  TYPE type;
  U16 value;
};

#define DeclNewtc_Base_Types_Unsigned_16_Payload(x) struct tc_Base_Types_Unsigned_16_Payload x = { .type = Ttc_Base_Types_Unsigned_16_Payload }

#ifdef __cplusplus
}
#endif

#endif