#ifndef SIREUM_TYPE_H_org_sireum_Option_5F90D6
#define SIREUM_TYPE_H_org_sireum_Option_5F90D6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixed.TempUnit.Type]

#include <type-org_sireum_None_121724.h>
#include <type-org_sireum_Some_0E3FBA.h>

typedef union Option_5F90D6 *Option_5F90D6;
union Option_5F90D6 {
  TYPE type;
  struct None_121724 None_121724;
  struct Some_0E3FBA Some_0E3FBA;
};

#define DeclNewOption_5F90D6(x) union Option_5F90D6 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif