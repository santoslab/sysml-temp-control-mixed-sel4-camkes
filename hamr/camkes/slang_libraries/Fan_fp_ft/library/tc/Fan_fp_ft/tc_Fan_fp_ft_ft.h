#ifndef SIREUM_H_tc_Fan_fp_ft_ft
#define SIREUM_H_tc_Fan_fp_ft_ft

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void tc_Fan_fp_ft_ft_init(STACK_FRAME_ONLY);

tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge tc_Fan_fp_ft_ft_ftBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints tc_Fan_fp_ft_ft_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 tc_Fan_fp_ft_ft_noData(STACK_FRAME_ONLY);
art_Art_PortId tc_Fan_fp_ft_ft_fanCmd_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_Fan_fp_ft_ft_fanCmd_port(STACK_FRAME_ONLY);
void tc_Fan_fp_ft_ft_fanCmd_port_a(STACK_FRAME Option_8E9F45 p_fanCmd_port);
art_Art_PortId tc_Fan_fp_ft_ft_fanAck_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_Fan_fp_ft_ft_fanAck_port(STACK_FRAME_ONLY);
void tc_Fan_fp_ft_ft_fanAck_port_a(STACK_FRAME Option_8E9F45 p_fanAck_port);

Z tc_Fan_fp_ft_ft_main(STACK_FRAME IS_948B60 args);

Unit tc_Fan_fp_ft_ft_initialiseArchitecture(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_computeEntryPoint(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit tc_Fan_fp_ft_ft_touch(STACK_FRAME_ONLY);

Unit tc_Fan_fp_ft_ft_logInfo(STACK_FRAME String title, String msg);

Unit tc_Fan_fp_ft_ft_logDebug(STACK_FRAME String title, String msg);

Unit tc_Fan_fp_ft_ft_logError(STACK_FRAME String title, String msg);

void tc_Fan_fp_ft_ft_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId);

Unit tc_Fan_fp_ft_ft_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data);

Unit tc_Fan_fp_ft_ft_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void tc_Fan_fp_ft_ft_dispatchStatus(STACK_FRAME art_DispatchStatus result, art_Art_BridgeId bridgeId);

Unit tc_Fan_fp_ft_ft_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void tc_Fan_fp_ft_ft_init_ftBridge(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_init_entryPoints(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_init_noData(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_init_fanCmd_id(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_init_fanCmd_port(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_init_fanAck_id(STACK_FRAME_ONLY);

void tc_Fan_fp_ft_ft_init_fanAck_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif