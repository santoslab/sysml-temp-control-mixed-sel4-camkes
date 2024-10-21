#ifndef SIREUM_TYPE_H_tc_TempControlMixed_FanCmd_Payload
#define SIREUM_TYPE_H_tc_TempControlMixed_FanCmd_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixed.FanCmd_Payload
#include <type-tc_TempControlMixed_FanCmd_Type.h>

typedef struct tc_TempControlMixed_FanCmd_Payload *tc_TempControlMixed_FanCmd_Payload;
struct tc_TempControlMixed_FanCmd_Payload {
  TYPE type;
  tc_TempControlMixed_FanCmd_Type value;
};

#define DeclNewtc_TempControlMixed_FanCmd_Payload(x) struct tc_TempControlMixed_FanCmd_Payload x = { .type = Ttc_TempControlMixed_FanCmd_Payload }

#ifdef __cplusplus
}
#endif

#endif