#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempUnit_Payload
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempUnit_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.TempUnit_Payload
#include <type-tc_TempControlMixedSeL4CAmKES_TempUnit_Type.h>

typedef struct tc_TempControlMixedSeL4CAmKES_TempUnit_Payload *tc_TempControlMixedSeL4CAmKES_TempUnit_Payload;
struct tc_TempControlMixedSeL4CAmKES_TempUnit_Payload {
  TYPE type;
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type value;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_TempUnit_Payload(x) struct tc_TempControlMixedSeL4CAmKES_TempUnit_Payload x = { .type = Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload }

#ifdef __cplusplus
}
#endif

#endif