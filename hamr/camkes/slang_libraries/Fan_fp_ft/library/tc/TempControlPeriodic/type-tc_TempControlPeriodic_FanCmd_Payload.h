#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_FanCmd_Payload
#define SIREUM_TYPE_H_tc_TempControlPeriodic_FanCmd_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.FanCmd_Payload
#include <type-tc_TempControlPeriodic_FanCmd_Type.h>

typedef struct tc_TempControlPeriodic_FanCmd_Payload *tc_TempControlPeriodic_FanCmd_Payload;
struct tc_TempControlPeriodic_FanCmd_Payload {
  TYPE type;
  tc_TempControlPeriodic_FanCmd_Type value;
};

#define DeclNewtc_TempControlPeriodic_FanCmd_Payload(x) struct tc_TempControlPeriodic_FanCmd_Payload x = { .type = Ttc_TempControlPeriodic_FanCmd_Payload }

#ifdef __cplusplus
}
#endif

#endif