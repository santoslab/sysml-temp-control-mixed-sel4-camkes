#ifndef SIREUM_TYPE_H_org_sireum_Option_AAF24B
#define SIREUM_TYPE_H_org_sireum_Option_AAF24B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixed.FanAck.Type]

#include <type-org_sireum_None_B4A4FA.h>
#include <type-org_sireum_Some_270A8B.h>

typedef union Option_AAF24B *Option_AAF24B;
union Option_AAF24B {
  TYPE type;
  struct None_B4A4FA None_B4A4FA;
  struct Some_270A8B Some_270A8B;
};

#define DeclNewOption_AAF24B(x) union Option_AAF24B x = { 0 }

#ifdef __cplusplus
}
#endif

#endif