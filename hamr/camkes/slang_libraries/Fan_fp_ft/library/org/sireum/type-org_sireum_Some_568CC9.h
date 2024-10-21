#ifndef SIREUM_TYPE_H_org_sireum_Some_568CC9
#define SIREUM_TYPE_H_org_sireum_Some_568CC9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api]
#include <type-tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api.h>

typedef struct Some_568CC9 *Some_568CC9;
struct Some_568CC9 {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api value;
};

#define DeclNewSome_568CC9(x) struct Some_568CC9 x = { .type = TSome_568CC9 }

#ifdef __cplusplus
}
#endif

#endif