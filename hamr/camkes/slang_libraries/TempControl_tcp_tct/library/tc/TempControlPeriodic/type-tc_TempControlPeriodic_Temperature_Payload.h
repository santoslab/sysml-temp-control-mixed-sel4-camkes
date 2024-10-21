#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_Temperature_Payload
#define SIREUM_TYPE_H_tc_TempControlPeriodic_Temperature_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.Temperature_Payload
#include <type-tc_TempControlPeriodic_Temperature.h>

typedef struct tc_TempControlPeriodic_Temperature_Payload *tc_TempControlPeriodic_Temperature_Payload;
struct tc_TempControlPeriodic_Temperature_Payload {
  TYPE type;
  struct tc_TempControlPeriodic_Temperature value;
};

#define DeclNewtc_TempControlPeriodic_Temperature_Payload(x) struct tc_TempControlPeriodic_Temperature_Payload x = { .type = Ttc_TempControlPeriodic_Temperature_Payload }

#ifdef __cplusplus
}
#endif

#endif