#ifndef SIREUM_TYPE_H_org_sireum_Option_103926
#define SIREUM_TYPE_H_org_sireum_Option_103926

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.TempUnit.Type]

#include <type-org_sireum_None_86BF24.h>
#include <type-org_sireum_Some_0C4CF8.h>

typedef union Option_103926 *Option_103926;
union Option_103926 {
  TYPE type;
  struct None_86BF24 None_86BF24;
  struct Some_0C4CF8 Some_0C4CF8;
};

#define DeclNewOption_103926(x) union Option_103926 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif