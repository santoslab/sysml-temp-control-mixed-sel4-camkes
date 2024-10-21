#ifndef SIREUM_TYPE_H_org_sireum_Option_C9A4D6
#define SIREUM_TYPE_H_org_sireum_Option_C9A4D6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.Isolette_Data_Model.Status.Type]

#include <type-org_sireum_None_A45A41.h>
#include <type-org_sireum_Some_140719.h>

typedef union Option_C9A4D6 *Option_C9A4D6;
union Option_C9A4D6 {
  TYPE type;
  struct None_A45A41 None_A45A41;
  struct Some_140719 Some_140719;
};

#define DeclNewOption_C9A4D6(x) union Option_C9A4D6 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif