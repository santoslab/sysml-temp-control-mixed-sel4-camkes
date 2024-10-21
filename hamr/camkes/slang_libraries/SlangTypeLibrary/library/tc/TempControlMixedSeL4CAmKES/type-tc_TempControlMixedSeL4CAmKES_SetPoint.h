#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_SetPoint
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_SetPoint

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.SetPoint
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature.h>

typedef struct tc_TempControlMixedSeL4CAmKES_SetPoint *tc_TempControlMixedSeL4CAmKES_SetPoint;
struct tc_TempControlMixedSeL4CAmKES_SetPoint {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_Temperature low;
  struct tc_TempControlMixedSeL4CAmKES_Temperature high;
};

#define DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint(x) struct tc_TempControlMixedSeL4CAmKES_SetPoint x = { .type = Ttc_TempControlMixedSeL4CAmKES_SetPoint }

#ifdef __cplusplus
}
#endif

#endif