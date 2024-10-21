#ifndef SIREUM_TYPE_H_org_sireum_Option_36021E
#define SIREUM_TYPE_H_org_sireum_Option_36021E

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.FanAck.Type]

#include <type-org_sireum_None_A70CEE.h>
#include <type-org_sireum_Some_D85467.h>

typedef union Option_36021E *Option_36021E;
union Option_36021E {
  TYPE type;
  struct None_A70CEE None_A70CEE;
  struct Some_D85467 Some_D85467;
};

#define DeclNewOption_36021E(x) union Option_36021E x = { 0 }

#ifdef __cplusplus
}
#endif

#endif