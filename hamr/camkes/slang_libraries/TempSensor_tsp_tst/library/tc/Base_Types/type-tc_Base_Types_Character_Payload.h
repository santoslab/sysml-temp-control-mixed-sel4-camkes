#ifndef SIREUM_TYPE_H_tc_Base_Types_Character_Payload
#define SIREUM_TYPE_H_tc_Base_Types_Character_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.Character_Payload

typedef struct tc_Base_Types_Character_Payload *tc_Base_Types_Character_Payload;
struct tc_Base_Types_Character_Payload {
  TYPE type;
  C value;
};

#define DeclNewtc_Base_Types_Character_Payload(x) struct tc_Base_Types_Character_Payload x = { .type = Ttc_Base_Types_Character_Payload }

#ifdef __cplusplus
}
#endif

#endif