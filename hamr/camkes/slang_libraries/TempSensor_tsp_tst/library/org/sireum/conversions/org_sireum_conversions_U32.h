#ifndef SIREUM_H_org_sireum_conversions_U32
#define SIREUM_H_org_sireum_conversions_U32

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

inline F32 conversions_U32_toF32(STACK_FRAME_SF U32 n) {
  return (F32) n;
}

#ifdef __cplusplus
}
#endif

#endif