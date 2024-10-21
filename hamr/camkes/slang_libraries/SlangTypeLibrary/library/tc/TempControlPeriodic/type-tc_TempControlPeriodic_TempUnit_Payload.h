#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_TempUnit_Payload
#define SIREUM_TYPE_H_tc_TempControlPeriodic_TempUnit_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.TempUnit_Payload
#include <type-tc_TempControlPeriodic_TempUnit_Type.h>

typedef struct tc_TempControlPeriodic_TempUnit_Payload *tc_TempControlPeriodic_TempUnit_Payload;
struct tc_TempControlPeriodic_TempUnit_Payload {
  TYPE type;
  tc_TempControlPeriodic_TempUnit_Type value;
};

#define DeclNewtc_TempControlPeriodic_TempUnit_Payload(x) struct tc_TempControlPeriodic_TempUnit_Payload x = { .type = Ttc_TempControlPeriodic_TempUnit_Payload }

#ifdef __cplusplus
}
#endif

#endif