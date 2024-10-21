#ifndef SIREUM_TYPE_H_org_sireum_Option_889345
#define SIREUM_TYPE_H_org_sireum_Option_889345

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api]

#include <type-org_sireum_None_E88024.h>
#include <type-org_sireum_Some_BE25AD.h>

typedef union Option_889345 *Option_889345;
union Option_889345 {
  TYPE type;
  struct None_E88024 None_E88024;
  struct Some_BE25AD Some_BE25AD;
};

#define DeclNewOption_889345(x) union Option_889345 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif