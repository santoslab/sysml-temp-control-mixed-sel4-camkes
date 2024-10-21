#ifndef SIREUM_TYPE_H_tc_Base_Types_Integer_Payload
#define SIREUM_TYPE_H_tc_Base_Types_Integer_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.Integer_Payload

typedef struct tc_Base_Types_Integer_Payload *tc_Base_Types_Integer_Payload;
struct tc_Base_Types_Integer_Payload {
  TYPE type;
  Z value;
};

#define DeclNewtc_Base_Types_Integer_Payload(x) struct tc_Base_Types_Integer_Payload x = { .type = Ttc_Base_Types_Integer_Payload }

#ifdef __cplusplus
}
#endif

#endif