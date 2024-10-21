#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_Temperature
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_Temperature

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.Temperature
#include <type-tc_TempControlMixedSeL4CAmKES_TempUnit_Type.h>

typedef struct tc_TempControlMixedSeL4CAmKES_Temperature *tc_TempControlMixedSeL4CAmKES_Temperature;
struct tc_TempControlMixedSeL4CAmKES_Temperature {
  TYPE type;
  F32 degrees;
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type unit;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(x) struct tc_TempControlMixedSeL4CAmKES_Temperature x = { .type = Ttc_TempControlMixedSeL4CAmKES_Temperature }

#ifdef __cplusplus
}
#endif

#endif