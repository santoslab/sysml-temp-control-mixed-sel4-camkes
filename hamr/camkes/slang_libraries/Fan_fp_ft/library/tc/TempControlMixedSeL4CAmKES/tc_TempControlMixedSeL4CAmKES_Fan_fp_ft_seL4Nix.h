#ifndef SIREUM_H_tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_seL4Nix
#define SIREUM_H_tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_seL4Nix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_seL4Nix_fanAck_Send(STACK_FRAME art_DataContent d);

B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_seL4Nix_fanCmd_IsEmpty(STACK_FRAME_ONLY);

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_seL4Nix_fanCmd_Receive(STACK_FRAME Option_8E9F45 result);

#ifdef __cplusplus
}
#endif

#endif