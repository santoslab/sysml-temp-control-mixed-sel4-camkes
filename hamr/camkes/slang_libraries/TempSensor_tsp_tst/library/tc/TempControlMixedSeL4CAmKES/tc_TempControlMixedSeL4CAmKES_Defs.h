#ifndef SIREUM_H_tc_TempControlMixedSeL4CAmKES_Defs
#define SIREUM_H_tc_TempControlMixedSeL4CAmKES_Defs

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void tc_TempControlMixedSeL4CAmKES_Defs_init(STACK_FRAME_ONLY);

tc_TempControlMixedSeL4CAmKES_SetPoint tc_TempControlMixedSeL4CAmKES_Defs_defaultSetPoint(STACK_FRAME_ONLY);

void tc_TempControlMixedSeL4CAmKES_Defs_init_defaultSetPoint(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif