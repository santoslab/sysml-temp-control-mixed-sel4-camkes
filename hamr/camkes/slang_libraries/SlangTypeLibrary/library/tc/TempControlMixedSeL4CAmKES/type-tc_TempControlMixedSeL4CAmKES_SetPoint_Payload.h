#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_SetPoint_Payload
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_SetPoint_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.SetPoint_Payload
#include <type-tc_TempControlMixedSeL4CAmKES_SetPoint.h>

typedef struct tc_TempControlMixedSeL4CAmKES_SetPoint_Payload *tc_TempControlMixedSeL4CAmKES_SetPoint_Payload;
struct tc_TempControlMixedSeL4CAmKES_SetPoint_Payload {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_SetPoint value;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint_Payload(x) struct tc_TempControlMixedSeL4CAmKES_SetPoint_Payload x = { .type = Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload }

#ifdef __cplusplus
}
#endif

#endif