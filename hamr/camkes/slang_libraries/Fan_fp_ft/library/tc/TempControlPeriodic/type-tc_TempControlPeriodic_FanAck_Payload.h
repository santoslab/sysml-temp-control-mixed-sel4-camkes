#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_FanAck_Payload
#define SIREUM_TYPE_H_tc_TempControlPeriodic_FanAck_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.FanAck_Payload
#include <type-tc_TempControlPeriodic_FanAck_Type.h>

typedef struct tc_TempControlPeriodic_FanAck_Payload *tc_TempControlPeriodic_FanAck_Payload;
struct tc_TempControlPeriodic_FanAck_Payload {
  TYPE type;
  tc_TempControlPeriodic_FanAck_Type value;
};

#define DeclNewtc_TempControlPeriodic_FanAck_Payload(x) struct tc_TempControlPeriodic_FanAck_Payload x = { .type = Ttc_TempControlPeriodic_FanAck_Payload }

#ifdef __cplusplus
}
#endif

#endif