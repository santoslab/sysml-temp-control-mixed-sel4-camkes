#ifndef SIREUM_TYPE_H_tc_TempControlMixed_SetPoint_Payload
#define SIREUM_TYPE_H_tc_TempControlMixed_SetPoint_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixed.SetPoint_Payload
#include <type-tc_TempControlMixed_SetPoint.h>

typedef struct tc_TempControlMixed_SetPoint_Payload *tc_TempControlMixed_SetPoint_Payload;
struct tc_TempControlMixed_SetPoint_Payload {
  TYPE type;
  struct tc_TempControlMixed_SetPoint value;
};

#define DeclNewtc_TempControlMixed_SetPoint_Payload(x) struct tc_TempControlMixed_SetPoint_Payload x = { .type = Ttc_TempControlMixed_SetPoint_Payload }

#ifdef __cplusplus
}
#endif

#endif