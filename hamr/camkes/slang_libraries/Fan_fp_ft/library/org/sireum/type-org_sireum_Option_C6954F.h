#ifndef SIREUM_TYPE_H_org_sireum_Option_C6954F
#define SIREUM_TYPE_H_org_sireum_Option_C6954F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.Isolette_Data_Model.On_Off.Type]

#include <type-org_sireum_None_BE24EA.h>
#include <type-org_sireum_Some_F1808D.h>

typedef union Option_C6954F *Option_C6954F;
union Option_C6954F {
  TYPE type;
  struct None_BE24EA None_BE24EA;
  struct Some_F1808D Some_F1808D;
};

#define DeclNewOption_C6954F(x) union Option_C6954F x = { 0 }

#ifdef __cplusplus
}
#endif

#endif