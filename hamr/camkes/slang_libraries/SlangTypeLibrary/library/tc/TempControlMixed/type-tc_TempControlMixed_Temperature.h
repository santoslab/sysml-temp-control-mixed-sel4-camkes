#ifndef SIREUM_TYPE_H_tc_TempControlMixed_Temperature
#define SIREUM_TYPE_H_tc_TempControlMixed_Temperature

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixed.Temperature
#include <type-tc_TempControlMixed_TempUnit_Type.h>

typedef struct tc_TempControlMixed_Temperature *tc_TempControlMixed_Temperature;
struct tc_TempControlMixed_Temperature {
  TYPE type;
  F32 degrees;
  tc_TempControlMixed_TempUnit_Type unit;
};

#define DeclNewtc_TempControlMixed_Temperature(x) struct tc_TempControlMixed_Temperature x = { .type = Ttc_TempControlMixed_Temperature }

#ifdef __cplusplus
}
#endif

#endif