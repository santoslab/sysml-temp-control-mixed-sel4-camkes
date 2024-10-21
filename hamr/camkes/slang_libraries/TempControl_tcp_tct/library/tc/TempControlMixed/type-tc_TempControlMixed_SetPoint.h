#ifndef SIREUM_TYPE_H_tc_TempControlMixed_SetPoint
#define SIREUM_TYPE_H_tc_TempControlMixed_SetPoint

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixed.SetPoint
#include <type-tc_TempControlMixed_Temperature.h>
#include <type-tc_TempControlMixed_Temperature.h>

typedef struct tc_TempControlMixed_SetPoint *tc_TempControlMixed_SetPoint;
struct tc_TempControlMixed_SetPoint {
  TYPE type;
  struct tc_TempControlMixed_Temperature low;
  struct tc_TempControlMixed_Temperature high;
};

#define DeclNewtc_TempControlMixed_SetPoint(x) struct tc_TempControlMixed_SetPoint x = { .type = Ttc_TempControlMixed_SetPoint }

#ifdef __cplusplus
}
#endif

#endif