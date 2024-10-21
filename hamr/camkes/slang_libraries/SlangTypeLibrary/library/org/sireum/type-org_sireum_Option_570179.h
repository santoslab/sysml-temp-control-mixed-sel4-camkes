#ifndef SIREUM_TYPE_H_org_sireum_Option_570179
#define SIREUM_TYPE_H_org_sireum_Option_570179

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.Isolette_Data_Model.ValueStatus.Type]

#include <type-org_sireum_None_A23E58.h>
#include <type-org_sireum_Some_21C1E5.h>

typedef union Option_570179 *Option_570179;
union Option_570179 {
  TYPE type;
  struct None_A23E58 None_A23E58;
  struct Some_21C1E5 Some_21C1E5;
};

#define DeclNewOption_570179(x) union Option_570179 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif