#ifndef SIREUM_TYPE_H_org_sireum_Option_262EA2
#define SIREUM_TYPE_H_org_sireum_Option_262EA2

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempSensor_Initialization_Api]

#include <type-org_sireum_None_B66650.h>
#include <type-org_sireum_Some_B14D88.h>

typedef union Option_262EA2 *Option_262EA2;
union Option_262EA2 {
  TYPE type;
  struct None_B66650 None_B66650;
  struct Some_B14D88 Some_B14D88;
};

#define DeclNewOption_262EA2(x) union Option_262EA2 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif