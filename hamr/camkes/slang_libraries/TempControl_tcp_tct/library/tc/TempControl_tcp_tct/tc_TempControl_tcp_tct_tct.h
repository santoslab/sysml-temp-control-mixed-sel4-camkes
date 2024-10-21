#ifndef SIREUM_H_tc_TempControl_tcp_tct_tct
#define SIREUM_H_tc_TempControl_tcp_tct_tct

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void tc_TempControl_tcp_tct_tct_init(STACK_FRAME_ONLY);

tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge tc_TempControl_tcp_tct_tct_tctBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints tc_TempControl_tcp_tct_tct_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 tc_TempControl_tcp_tct_tct_noData(STACK_FRAME_ONLY);
art_Art_PortId tc_TempControl_tcp_tct_tct_currentTemp_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_TempControl_tcp_tct_tct_currentTemp_port(STACK_FRAME_ONLY);
void tc_TempControl_tcp_tct_tct_currentTemp_port_a(STACK_FRAME Option_8E9F45 p_currentTemp_port);
art_Art_PortId tc_TempControl_tcp_tct_tct_tempChanged_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_TempControl_tcp_tct_tct_tempChanged_port(STACK_FRAME_ONLY);
void tc_TempControl_tcp_tct_tct_tempChanged_port_a(STACK_FRAME Option_8E9F45 p_tempChanged_port);
art_Art_PortId tc_TempControl_tcp_tct_tct_fanAck_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_TempControl_tcp_tct_tct_fanAck_port(STACK_FRAME_ONLY);
void tc_TempControl_tcp_tct_tct_fanAck_port_a(STACK_FRAME Option_8E9F45 p_fanAck_port);
art_Art_PortId tc_TempControl_tcp_tct_tct_setPoint_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_TempControl_tcp_tct_tct_setPoint_port(STACK_FRAME_ONLY);
void tc_TempControl_tcp_tct_tct_setPoint_port_a(STACK_FRAME Option_8E9F45 p_setPoint_port);
art_Art_PortId tc_TempControl_tcp_tct_tct_fanCmd_id(STACK_FRAME_ONLY);
Option_8E9F45 tc_TempControl_tcp_tct_tct_fanCmd_port(STACK_FRAME_ONLY);
void tc_TempControl_tcp_tct_tct_fanCmd_port_a(STACK_FRAME Option_8E9F45 p_fanCmd_port);

Z tc_TempControl_tcp_tct_tct_main(STACK_FRAME IS_948B60 args);

Unit tc_TempControl_tcp_tct_tct_initialiseArchitecture(STACK_FRAME_ONLY);

Unit tc_TempControl_tcp_tct_tct_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit tc_TempControl_tcp_tct_tct_computeEntryPoint(STACK_FRAME_ONLY);

Unit tc_TempControl_tcp_tct_tct_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit tc_TempControl_tcp_tct_tct_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit tc_TempControl_tcp_tct_tct_touch(STACK_FRAME_ONLY);

Unit tc_TempControl_tcp_tct_tct_logInfo(STACK_FRAME String title, String msg);

Unit tc_TempControl_tcp_tct_tct_logDebug(STACK_FRAME String title, String msg);

Unit tc_TempControl_tcp_tct_tct_logError(STACK_FRAME String title, String msg);

void tc_TempControl_tcp_tct_tct_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId);

Unit tc_TempControl_tcp_tct_tct_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data);

Unit tc_TempControl_tcp_tct_tct_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void tc_TempControl_tcp_tct_tct_dispatchStatus(STACK_FRAME art_DispatchStatus result, art_Art_BridgeId bridgeId);

Unit tc_TempControl_tcp_tct_tct_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds);

void tc_TempControl_tcp_tct_tct_init_tctBridge(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_entryPoints(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_noData(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_currentTemp_id(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_currentTemp_port(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_tempChanged_id(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_tempChanged_port(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_fanAck_id(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_fanAck_port(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_setPoint_id(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_setPoint_port(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_fanCmd_id(STACK_FRAME_ONLY);

void tc_TempControl_tcp_tct_tct_init_fanCmd_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif