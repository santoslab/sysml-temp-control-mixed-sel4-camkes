#ifndef SIREUM_H_org_sireum_conversions_U64
#define SIREUM_H_org_sireum_conversions_U64

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

inline S64 conversions_U64_toRawS64(STACK_FRAME_SF U64 n) {
  union {
    U64 from;
    S64 to;
  } temp;
  temp.from = n;
  return temp.to;
}

#ifdef __cplusplus
}
#endif

#endif