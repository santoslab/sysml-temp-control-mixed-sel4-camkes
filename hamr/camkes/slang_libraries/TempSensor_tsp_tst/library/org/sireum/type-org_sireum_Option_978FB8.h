#ifndef SIREUM_TYPE_H_org_sireum_Option_978FB8
#define SIREUM_TYPE_H_org_sireum_Option_978FB8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlPeriodic.TempUnit.Type]

#include <type-org_sireum_None_4E7E94.h>
#include <type-org_sireum_Some_56FCC9.h>

typedef union Option_978FB8 *Option_978FB8;
union Option_978FB8 {
  TYPE type;
  struct None_4E7E94 None_4E7E94;
  struct Some_56FCC9 Some_56FCC9;
};

#define DeclNewOption_978FB8(x) union Option_978FB8 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif