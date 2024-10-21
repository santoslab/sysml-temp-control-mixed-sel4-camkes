#ifndef SIREUM_TYPE_H_org_sireum_Some_76E303
#define SIREUM_TYPE_H_org_sireum_Some_76E303

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.Temperature]
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature.h>

typedef struct Some_76E303 *Some_76E303;
struct Some_76E303 {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_Temperature value;
};

#define DeclNewSome_76E303(x) struct Some_76E303 x = { .type = TSome_76E303 }

#ifdef __cplusplus
}
#endif

#endif