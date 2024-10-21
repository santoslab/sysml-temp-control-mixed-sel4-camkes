#ifndef SIREUM_TYPE_H_org_sireum_Some_D85467
#define SIREUM_TYPE_H_org_sireum_Some_D85467

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[tc.TempControlMixedSeL4CAmKES.FanAck.Type]
#include <type-tc_TempControlMixedSeL4CAmKES_FanAck_Type.h>

typedef struct Some_D85467 *Some_D85467;
struct Some_D85467 {
  TYPE type;
  tc_TempControlMixedSeL4CAmKES_FanAck_Type value;
};

#define DeclNewSome_D85467(x) struct Some_D85467 x = { .type = TSome_D85467 }

#ifdef __cplusplus
}
#endif

#endif