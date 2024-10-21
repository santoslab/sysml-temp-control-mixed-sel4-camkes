#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_Temperature_Payload
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_Temperature_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.Temperature_Payload
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature.h>

typedef struct tc_TempControlMixedSeL4CAmKES_Temperature_Payload *tc_TempControlMixedSeL4CAmKES_Temperature_Payload;
struct tc_TempControlMixedSeL4CAmKES_Temperature_Payload {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_Temperature value;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_Temperature_Payload(x) struct tc_TempControlMixedSeL4CAmKES_Temperature_Payload x = { .type = Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload }

#ifdef __cplusplus
}
#endif

#endif