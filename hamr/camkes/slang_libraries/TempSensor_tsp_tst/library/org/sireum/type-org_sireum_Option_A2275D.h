#ifndef SIREUM_TYPE_H_org_sireum_Option_A2275D
#define SIREUM_TYPE_H_org_sireum_Option_A2275D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.Isolette_Data_Model.Regulator_Mode.Type]

#include <type-org_sireum_None_3C78E7.h>
#include <type-org_sireum_Some_C790DA.h>

typedef union Option_A2275D *Option_A2275D;
union Option_A2275D {
  TYPE type;
  struct None_3C78E7 None_3C78E7;
  struct Some_C790DA Some_C790DA;
};

#define DeclNewOption_A2275D(x) union Option_A2275D x = { 0 }

#ifdef __cplusplus
}
#endif

#endif