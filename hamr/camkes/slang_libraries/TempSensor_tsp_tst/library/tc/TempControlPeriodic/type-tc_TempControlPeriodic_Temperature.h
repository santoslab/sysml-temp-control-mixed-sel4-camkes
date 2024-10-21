#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_Temperature
#define SIREUM_TYPE_H_tc_TempControlPeriodic_Temperature

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.Temperature
#include <type-tc_TempControlPeriodic_TempUnit_Type.h>

typedef struct tc_TempControlPeriodic_Temperature *tc_TempControlPeriodic_Temperature;
struct tc_TempControlPeriodic_Temperature {
  TYPE type;
  F32 degrees;
  tc_TempControlPeriodic_TempUnit_Type unit;
};

#define DeclNewtc_TempControlPeriodic_Temperature(x) struct tc_TempControlPeriodic_Temperature x = { .type = Ttc_TempControlPeriodic_Temperature }

#ifdef __cplusplus
}
#endif

#endif