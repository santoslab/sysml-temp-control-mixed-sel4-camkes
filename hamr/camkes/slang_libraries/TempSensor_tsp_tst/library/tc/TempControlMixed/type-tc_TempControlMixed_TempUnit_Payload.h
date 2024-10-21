#ifndef SIREUM_TYPE_H_tc_TempControlMixed_TempUnit_Payload
#define SIREUM_TYPE_H_tc_TempControlMixed_TempUnit_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixed.TempUnit_Payload
#include <type-tc_TempControlMixed_TempUnit_Type.h>

typedef struct tc_TempControlMixed_TempUnit_Payload *tc_TempControlMixed_TempUnit_Payload;
struct tc_TempControlMixed_TempUnit_Payload {
  TYPE type;
  tc_TempControlMixed_TempUnit_Type value;
};

#define DeclNewtc_TempControlMixed_TempUnit_Payload(x) struct tc_TempControlMixed_TempUnit_Payload x = { .type = Ttc_TempControlMixed_TempUnit_Payload }

#ifdef __cplusplus
}
#endif

#endif