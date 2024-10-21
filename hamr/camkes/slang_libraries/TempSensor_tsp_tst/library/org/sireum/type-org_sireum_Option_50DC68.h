#ifndef SIREUM_TYPE_H_org_sireum_Option_50DC68
#define SIREUM_TYPE_H_org_sireum_Option_50DC68

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempSensor_Operational_Api]

#include <type-org_sireum_None_79FC20.h>
#include <type-org_sireum_Some_FBE41D.h>

typedef union Option_50DC68 *Option_50DC68;
union Option_50DC68 {
  TYPE type;
  struct None_79FC20 None_79FC20;
  struct Some_FBE41D Some_FBE41D;
};

#define DeclNewOption_50DC68(x) union Option_50DC68 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif