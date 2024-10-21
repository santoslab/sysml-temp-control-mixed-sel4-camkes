#ifndef SIREUM_TYPE_H_org_sireum_Some_270A8B
#define SIREUM_TYPE_H_org_sireum_Some_270A8B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixed.FanAck.Type]
#include <type-tc_TempControlMixed_FanAck_Type.h>

typedef struct Some_270A8B *Some_270A8B;
struct Some_270A8B {
  TYPE type;
  tc_TempControlMixed_FanAck_Type value;
};

#define DeclNewSome_270A8B(x) struct Some_270A8B x = { .type = TSome_270A8B }

#ifdef __cplusplus
}
#endif

#endif