#ifndef SIREUM_TYPE_H_org_sireum_Option_5071ED
#define SIREUM_TYPE_H_org_sireum_Option_5071ED

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]

#include <type-org_sireum_None_ACDB63.h>
#include <type-org_sireum_Some_2EFA7D.h>

typedef union Option_5071ED *Option_5071ED;
union Option_5071ED {
  TYPE type;
  struct None_ACDB63 None_ACDB63;
  struct Some_2EFA7D Some_2EFA7D;
};

#define DeclNewOption_5071ED(x) union Option_5071ED x = { 0 }

#ifdef __cplusplus
}
#endif

#endif