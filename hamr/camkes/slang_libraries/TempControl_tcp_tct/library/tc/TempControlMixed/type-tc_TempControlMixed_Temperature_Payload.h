#ifndef SIREUM_TYPE_H_tc_TempControlMixed_Temperature_Payload
#define SIREUM_TYPE_H_tc_TempControlMixed_Temperature_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixed.Temperature_Payload
#include <type-tc_TempControlMixed_Temperature.h>

typedef struct tc_TempControlMixed_Temperature_Payload *tc_TempControlMixed_Temperature_Payload;
struct tc_TempControlMixed_Temperature_Payload {
  TYPE type;
  struct tc_TempControlMixed_Temperature value;
};

#define DeclNewtc_TempControlMixed_Temperature_Payload(x) struct tc_TempControlMixed_Temperature_Payload x = { .type = Ttc_TempControlMixed_Temperature_Payload }

#ifdef __cplusplus
}
#endif

#endif