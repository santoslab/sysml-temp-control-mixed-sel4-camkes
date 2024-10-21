#ifndef SIREUM_TYPE_H_org_sireum_Some_776961
#define SIREUM_TYPE_H_org_sireum_Some_776961

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixed.FanCmd.Type]
#include <type-tc_TempControlMixed_FanCmd_Type.h>

typedef struct Some_776961 *Some_776961;
struct Some_776961 {
  TYPE type;
  tc_TempControlMixed_FanCmd_Type value;
};

#define DeclNewSome_776961(x) struct Some_776961 x = { .type = TSome_776961 }

#ifdef __cplusplus
}
#endif

#endif