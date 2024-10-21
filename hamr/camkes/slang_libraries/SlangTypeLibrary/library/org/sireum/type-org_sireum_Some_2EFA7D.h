#ifndef SIREUM_TYPE_H_org_sireum_Some_2EFA7D
#define SIREUM_TYPE_H_org_sireum_Some_2EFA7D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
#include <type-tc_TempControlMixedSeL4CAmKES_FanCmd_Type.h>

typedef struct Some_2EFA7D *Some_2EFA7D;
struct Some_2EFA7D {
  TYPE type;
  tc_TempControlMixedSeL4CAmKES_FanCmd_Type value;
};

#define DeclNewSome_2EFA7D(x) struct Some_2EFA7D x = { .type = TSome_2EFA7D }

#ifdef __cplusplus
}
#endif

#endif