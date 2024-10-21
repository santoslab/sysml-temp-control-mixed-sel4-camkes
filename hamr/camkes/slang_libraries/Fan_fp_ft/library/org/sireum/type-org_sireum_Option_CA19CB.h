#ifndef SIREUM_TYPE_H_org_sireum_Option_CA19CB
#define SIREUM_TYPE_H_org_sireum_Option_CA19CB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api]

#include <type-org_sireum_None_B1BC55.h>
#include <type-org_sireum_Some_568CC9.h>

typedef union Option_CA19CB *Option_CA19CB;
union Option_CA19CB {
  TYPE type;
  struct None_B1BC55 None_B1BC55;
  struct Some_568CC9 Some_568CC9;
};

#define DeclNewOption_CA19CB(x) union Option_CA19CB x = { 0 }

#ifdef __cplusplus
}
#endif

#endif