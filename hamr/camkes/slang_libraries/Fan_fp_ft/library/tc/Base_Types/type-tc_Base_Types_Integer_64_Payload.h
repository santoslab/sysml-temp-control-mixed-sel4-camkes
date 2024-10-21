#ifndef SIREUM_TYPE_H_tc_Base_Types_Integer_64_Payload
#define SIREUM_TYPE_H_tc_Base_Types_Integer_64_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.Integer_64_Payload
#include <type-org_sireum_S64.h>

typedef struct tc_Base_Types_Integer_64_Payload *tc_Base_Types_Integer_64_Payload;
struct tc_Base_Types_Integer_64_Payload {
  TYPE type;
  S64 value;
};

#define DeclNewtc_Base_Types_Integer_64_Payload(x) struct tc_Base_Types_Integer_64_Payload x = { .type = Ttc_Base_Types_Integer_64_Payload }

#ifdef __cplusplus
}
#endif

#endif