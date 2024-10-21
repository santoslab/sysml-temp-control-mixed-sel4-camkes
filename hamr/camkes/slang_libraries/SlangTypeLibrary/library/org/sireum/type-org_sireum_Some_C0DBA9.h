#ifndef SIREUM_TYPE_H_org_sireum_Some_C0DBA9
#define SIREUM_TYPE_H_org_sireum_Some_C0DBA9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlPeriodic.FanCmd.Type]
#include <type-tc_TempControlPeriodic_FanCmd_Type.h>

typedef struct Some_C0DBA9 *Some_C0DBA9;
struct Some_C0DBA9 {
  TYPE type;
  tc_TempControlPeriodic_FanCmd_Type value;
};

#define DeclNewSome_C0DBA9(x) struct Some_C0DBA9 x = { .type = TSome_C0DBA9 }

#ifdef __cplusplus
}
#endif

#endif