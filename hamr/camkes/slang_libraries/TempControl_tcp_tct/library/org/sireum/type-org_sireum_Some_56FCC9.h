#ifndef SIREUM_TYPE_H_org_sireum_Some_56FCC9
#define SIREUM_TYPE_H_org_sireum_Some_56FCC9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlPeriodic.TempUnit.Type]
#include <type-tc_TempControlPeriodic_TempUnit_Type.h>

typedef struct Some_56FCC9 *Some_56FCC9;
struct Some_56FCC9 {
  TYPE type;
  tc_TempControlPeriodic_TempUnit_Type value;
};

#define DeclNewSome_56FCC9(x) struct Some_56FCC9 x = { .type = TSome_56FCC9 }

#ifdef __cplusplus
}
#endif

#endif