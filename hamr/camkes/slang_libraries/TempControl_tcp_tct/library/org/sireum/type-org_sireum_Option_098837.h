#ifndef SIREUM_TYPE_H_org_sireum_Option_098837
#define SIREUM_TYPE_H_org_sireum_Option_098837

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempControl_Initialization_Api]

#include <type-org_sireum_None_BB3A66.h>
#include <type-org_sireum_Some_6EABEC.h>

typedef union Option_098837 *Option_098837;
union Option_098837 {
  TYPE type;
  struct None_BB3A66 None_BB3A66;
  struct Some_6EABEC Some_6EABEC;
};

#define DeclNewOption_098837(x) union Option_098837 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif