#ifndef SIREUM_TYPE_H_org_sireum_Option_121E48
#define SIREUM_TYPE_H_org_sireum_Option_121E48

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlPeriodic.FanAck.Type]

#include <type-org_sireum_None_D4B208.h>
#include <type-org_sireum_Some_C3173C.h>

typedef union Option_121E48 *Option_121E48;
union Option_121E48 {
  TYPE type;
  struct None_D4B208 None_D4B208;
  struct Some_C3173C Some_C3173C;
};

#define DeclNewOption_121E48(x) union Option_121E48 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif