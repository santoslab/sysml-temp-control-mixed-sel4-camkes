#ifndef SIREUM_TYPE_H_org_sireum_Option_62C8EC
#define SIREUM_TYPE_H_org_sireum_Option_62C8EC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlPeriodic.FanCmd.Type]

#include <type-org_sireum_None_037804.h>
#include <type-org_sireum_Some_C0DBA9.h>

typedef union Option_62C8EC *Option_62C8EC;
union Option_62C8EC {
  TYPE type;
  struct None_037804 None_037804;
  struct Some_C0DBA9 Some_C0DBA9;
};

#define DeclNewOption_62C8EC(x) union Option_62C8EC x = { 0 }

#ifdef __cplusplus
}
#endif

#endif