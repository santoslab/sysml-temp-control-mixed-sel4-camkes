#ifndef SIREUM_H_org_sireum_Random
#define SIREUM_H_org_sireum_Random

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

U64 Random_rotl64(STACK_FRAME U64 x, U64 k);

#ifdef __cplusplus
}
#endif

#endif