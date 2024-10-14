// #Sireum

package slang_rm.TempControlMixedSeL4CAmKES

import org.sireum._
import slang_rm._
import slang_rm.util.Container

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

// containers for the pre and post state values of ports and state variables

@sig trait TempControl_tcp_tc_PreState_Container extends Container {
  def api_tempChanged: Option[art.Empty]
  def api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type]
  def api_setPoint: Option[TempControlMixedSeL4CAmKES.SetPoint]
  def api_currentTemp: TempControlMixedSeL4CAmKES.Temperature
}

// container for incoming ports
@datatype class TempControl_tcp_tc_PreState_Container_P (
  val api_tempChanged: Option[art.Empty],
  val api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type],
  val api_setPoint: Option[TempControlMixedSeL4CAmKES.SetPoint],
  val api_currentTemp: TempControlMixedSeL4CAmKES.Temperature) extends TempControl_tcp_tc_PreState_Container

// container for incoming ports and state variables
@datatype class TempControl_tcp_tc_PreState_Container_PS (
  val In_currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type,
  val In_currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint,
  val In_latestTemp: TempControlMixedSeL4CAmKES.Temperature,
  val api_tempChanged: Option[art.Empty],
  val api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type],
  val api_setPoint: Option[TempControlMixedSeL4CAmKES.SetPoint],
  val api_currentTemp: TempControlMixedSeL4CAmKES.Temperature) extends TempControl_tcp_tc_PreState_Container

@sig trait TempControl_tcp_tc_PostState_Container extends Container {
  def api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type]
}

// container for outgoing ports
@datatype class TempControl_tcp_tc_PostState_Container_P (
  val api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type]) extends TempControl_tcp_tc_PostState_Container

// container for outgoing ports and state variables
@datatype class TempControl_tcp_tc_PostState_Container_PS (
  val currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type,
  val currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint,
  val latestTemp: TempControlMixedSeL4CAmKES.Temperature,
  val api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type]) extends TempControl_tcp_tc_PostState_Container