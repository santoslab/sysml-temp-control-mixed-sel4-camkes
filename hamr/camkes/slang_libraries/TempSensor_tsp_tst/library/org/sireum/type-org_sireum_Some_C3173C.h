#ifndef SIREUM_TYPE_H_org_sireum_Some_C3173C
#define SIREUM_TYPE_H_org_sireum_Some_C3173C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlPeriodic.FanAck.Type]
#include <type-tc_TempControlPeriodic_FanAck_Type.h>

typedef struct Some_C3173C *Some_C3173C;
struct Some_C3173C {
  TYPE type;
  tc_TempControlPeriodic_FanAck_Type value;
};

#define DeclNewSome_C3173C(x) struct Some_C3173C x = { .type = TSome_C3173C }

#ifdef __cplusplus
}
#endif

#endif