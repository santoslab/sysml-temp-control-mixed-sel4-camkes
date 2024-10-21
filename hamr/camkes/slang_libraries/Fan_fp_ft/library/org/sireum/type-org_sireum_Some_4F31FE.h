#ifndef SIREUM_TYPE_H_org_sireum_Some_4F31FE
#define SIREUM_TYPE_H_org_sireum_Some_4F31FE

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api]
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api.h>

typedef struct Some_4F31FE *Some_4F31FE;
struct Some_4F31FE {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api value;
};

#define DeclNewSome_4F31FE(x) struct Some_4F31FE x = { .type = TSome_4F31FE }

#ifdef __cplusplus
}
#endif

#endif