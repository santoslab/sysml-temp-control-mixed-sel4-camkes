#ifndef SIREUM_TYPE_H_org_sireum_Option_8499F5
#define SIREUM_TYPE_H_org_sireum_Option_8499F5

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixed.FanCmd.Type]

#include <type-org_sireum_None_1AEC2C.h>
#include <type-org_sireum_Some_776961.h>

typedef union Option_8499F5 *Option_8499F5;
union Option_8499F5 {
  TYPE type;
  struct None_1AEC2C None_1AEC2C;
  struct Some_776961 Some_776961;
};

#define DeclNewOption_8499F5(x) union Option_8499F5 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif