#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_SetPoint_Payload
#define SIREUM_TYPE_H_tc_TempControlPeriodic_SetPoint_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.SetPoint_Payload
#include <type-tc_TempControlPeriodic_SetPoint.h>

typedef struct tc_TempControlPeriodic_SetPoint_Payload *tc_TempControlPeriodic_SetPoint_Payload;
struct tc_TempControlPeriodic_SetPoint_Payload {
  TYPE type;
  struct tc_TempControlPeriodic_SetPoint value;
};

#define DeclNewtc_TempControlPeriodic_SetPoint_Payload(x) struct tc_TempControlPeriodic_SetPoint_Payload x = { .type = Ttc_TempControlPeriodic_SetPoint_Payload }

#ifdef __cplusplus
}
#endif

#endif