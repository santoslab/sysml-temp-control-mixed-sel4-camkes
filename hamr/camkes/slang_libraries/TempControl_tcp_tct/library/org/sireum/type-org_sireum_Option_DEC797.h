#ifndef SIREUM_TYPE_H_org_sireum_Option_DEC797
#define SIREUM_TYPE_H_org_sireum_Option_DEC797

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.Temperature]

#include <type-org_sireum_None_40E880.h>
#include <type-org_sireum_Some_76E303.h>

typedef union Option_DEC797 *Option_DEC797;
union Option_DEC797 {
  TYPE type;
  struct None_40E880 None_40E880;
  struct Some_76E303 Some_76E303;
};

#define DeclNewOption_DEC797(x) union Option_DEC797 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif