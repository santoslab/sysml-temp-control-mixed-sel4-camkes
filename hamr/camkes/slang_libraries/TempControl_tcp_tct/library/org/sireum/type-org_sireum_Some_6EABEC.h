#ifndef SIREUM_TYPE_H_org_sireum_Some_6EABEC
#define SIREUM_TYPE_H_org_sireum_Some_6EABEC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]
#include <type-tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api.h>

typedef struct Some_6EABEC *Some_6EABEC;
struct Some_6EABEC {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api value;
};

#define DeclNewSome_6EABEC(x) struct Some_6EABEC x = { .type = TSome_6EABEC }

#ifdef __cplusplus
}
#endif

#endif