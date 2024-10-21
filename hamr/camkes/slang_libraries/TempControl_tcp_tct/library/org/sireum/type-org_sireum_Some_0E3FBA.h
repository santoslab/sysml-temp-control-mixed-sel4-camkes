#ifndef SIREUM_TYPE_H_org_sireum_Some_0E3FBA
#define SIREUM_TYPE_H_org_sireum_Some_0E3FBA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixed.TempUnit.Type]
#include <type-tc_TempControlMixed_TempUnit_Type.h>

typedef struct Some_0E3FBA *Some_0E3FBA;
struct Some_0E3FBA {
  TYPE type;
  tc_TempControlMixed_TempUnit_Type value;
};

#define DeclNewSome_0E3FBA(x) struct Some_0E3FBA x = { .type = TSome_0E3FBA }

#ifdef __cplusplus
}
#endif

#endif