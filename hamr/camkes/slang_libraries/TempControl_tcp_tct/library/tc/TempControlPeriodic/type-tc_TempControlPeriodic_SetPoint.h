#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_SetPoint
#define SIREUM_TYPE_H_tc_TempControlPeriodic_SetPoint

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.SetPoint
#include <type-tc_TempControlPeriodic_Temperature.h>
#include <type-tc_TempControlPeriodic_Temperature.h>

typedef struct tc_TempControlPeriodic_SetPoint *tc_TempControlPeriodic_SetPoint;
struct tc_TempControlPeriodic_SetPoint {
  TYPE type;
  struct tc_TempControlPeriodic_Temperature low;
  struct tc_TempControlPeriodic_Temperature high;
};

#define DeclNewtc_TempControlPeriodic_SetPoint(x) struct tc_TempControlPeriodic_SetPoint x = { .type = Ttc_TempControlPeriodic_SetPoint }

#ifdef __cplusplus
}
#endif

#endif