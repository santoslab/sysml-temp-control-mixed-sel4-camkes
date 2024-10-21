#ifndef SIREUM_TYPE_H_tc_Base_Types_Float_Payload
#define SIREUM_TYPE_H_tc_Base_Types_Float_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Base_Types.Float_Payload

typedef struct tc_Base_Types_Float_Payload *tc_Base_Types_Float_Payload;
struct tc_Base_Types_Float_Payload {
  TYPE type;
  R value;
};

#define DeclNewtc_Base_Types_Float_Payload(x) struct tc_Base_Types_Float_Payload x = { .type = Ttc_Base_Types_Float_Payload }

#ifdef __cplusplus
}
#endif

#endif