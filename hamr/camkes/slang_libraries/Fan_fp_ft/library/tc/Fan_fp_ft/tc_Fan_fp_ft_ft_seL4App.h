#ifndef SIREUM_H_tc_Fan_fp_ft_ft_seL4App
#define SIREUM_H_tc_Fan_fp_ft_ft_seL4App

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void tc_Fan_fp_ft_ft_seL4App_init(STACK_FRAME_ONLY);

tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge tc_Fan_fp_ft_ft_seL4App_ftBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints tc_Fan_fp_ft_ft_seL4App_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 tc_Fan_fp_ft_ft_seL4App_noData(STACK_FRAME_ONLY);
art_Art_PortId tc_Fan_fp_ft_ft_seL4App_fanCmd_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_Fan_fp_ft_ft_seL4App_fanCmd_port(STACK_FRAME_ONLY);
void tc_Fan_fp_ft_ft_seL4App_fanCmd_port_a(STACK_FRAME Option_8E9F45 p_fanCmd_port);
art_Art_PortId tc_Fan_fp_ft_ft_seL4App_fanAck_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_Fan_fp_ft_ft_seL4App_fanAck_port(STACK_FRAME_ONLY);
void tc_Fan_fp_ft_ft_seL4App_fanAck_port_a(STACK_FRAME Option_8E9F45 p_fanAck_port);

Z tc_Fan_fp_ft_ft_seL4App_main(STACK_FRAME IS_948B60 args);

Unit tc_Fan_fp_ft_ft_seL4App_initialiseArchitecture(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_seL4App_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_seL4App_computeEntryPoint(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_seL4App_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_seL4App_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit tc_Fan_fp_ft_ft_seL4App_touch(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_seL4App_logInfo(STACK_FRAME String title, String msg);

Unit tc_Fan_fp_ft_ft_seL4App_logDebug(STACK_FRAME String title, String msg);

Unit tc_Fan_fp_ft_ft_seL4App_logError(STACK_FRAME String title, String msg);

void tc_Fan_fp_ft_ft_seL4App_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId);

Unit tc_Fan_fp_ft_ft_seL4App_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data);

Unit tc_Fan_fp_ft_ft_seL4App_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void tc_Fan_fp_ft_ft_seL4App_dispatchStatus(STACK_FRAME art_DispatchStatus result, art_Art_BridgeId bridgeId);

Unit tc_Fan_fp_ft_ft_seL4App_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void tc_Fan_fp_ft_ft_seL4App_init_ftBridge(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_seL4App_init_entryPoints(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_seL4App_init_noData(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_seL4App_init_fanCmd_id(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_seL4App_init_fanCmd_port(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_seL4App_init_fanAck_id(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_seL4App_init_fanAck_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif