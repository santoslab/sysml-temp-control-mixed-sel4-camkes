// #Sireum
package slang.runtimemonitor

import org.sireum._
import slang._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object ModelInfo {
  val TempSensor_tsp_ts_MI : Component =
    Component(
      name = "TempSensor_tsp_ts",
      id = Arch.TempControlSystem_Instance_tsp_ts.id.toZ,
      dispatchProtocol = iDispatchProtocol.Periodic,
      state = ISZ(
        Port(
          name = "currentTemp",
          id = Arch.TempControlSystem_Instance_tsp_ts.currentTemp.id.toZ,
          kind = PortKind.Data,
          direction = StateDirection.Out,
          slangType = ""),
        Port(
          name = "tempChanged",
          id = Arch.TempControlSystem_Instance_tsp_ts.tempChanged.id.toZ,
          kind = PortKind.Event,
          direction = StateDirection.Out,
          slangType = "")))

  val TempControl_tcp_tc_MI : Component =
    Component(
      name = "TempControl_tcp_tc",
      id = Arch.TempControlSystem_Instance_tcp_tc.id.toZ,
      dispatchProtocol = iDispatchProtocol.Sporadic,
      state = ISZ(
        StateVariable(
          name = "In_currentSetPoint",
          id = 0,
          direction = StateDirection.In,
          slangType = "TempControlMixedSeL4CAmKES.SetPoint"),
        StateVariable(
          name = "In_currentFanState",
          id = 1,
          direction = StateDirection.In,
          slangType = "TempControlMixedSeL4CAmKES.FanCmd.Type"),
        StateVariable(
          name = "In_latestTemp",
          id = 2,
          direction = StateDirection.In,
          slangType = "TempControlMixedSeL4CAmKES.Temperature"),
        StateVariable(
          name = "currentSetPoint",
          id = 0,
          direction = StateDirection.Out,
          slangType = "TempControlMixedSeL4CAmKES.SetPoint"),
        StateVariable(
          name = "currentFanState",
          id = 1,
          direction = StateDirection.Out,
          slangType = "TempControlMixedSeL4CAmKES.FanCmd.Type"),
        StateVariable(
          name = "latestTemp",
          id = 2,
          direction = StateDirection.Out,
          slangType = "TempControlMixedSeL4CAmKES.Temperature"),
        Port(
          name = "currentTemp",
          id = Arch.TempControlSystem_Instance_tcp_tc.currentTemp.id.toZ,
          kind = PortKind.Data,
          direction = StateDirection.In,
          slangType = ""),
        Port(
          name = "tempChanged",
          id = Arch.TempControlSystem_Instance_tcp_tc.tempChanged.id.toZ,
          kind = PortKind.Event,
          direction = StateDirection.In,
          slangType = ""),
        Port(
          name = "fanAck",
          id = Arch.TempControlSystem_Instance_tcp_tc.fanAck.id.toZ,
          kind = PortKind.EventData,
          direction = StateDirection.In,
          slangType = ""),
        Port(
          name = "setPoint",
          id = Arch.TempControlSystem_Instance_tcp_tc.setPoint.id.toZ,
          kind = PortKind.EventData,
          direction = StateDirection.In,
          slangType = ""),
        Port(
          name = "fanCmd",
          id = Arch.TempControlSystem_Instance_tcp_tc.fanCmd.id.toZ,
          kind = PortKind.EventData,
          direction = StateDirection.Out,
          slangType = "")))

  val Fan_fp_f_MI : Component =
    Component(
      name = "Fan_fp_f",
      id = Arch.TempControlSystem_Instance_fp_f.id.toZ,
      dispatchProtocol = iDispatchProtocol.Periodic,
      state = ISZ(
        Port(
          name = "fanCmd",
          id = Arch.TempControlSystem_Instance_fp_f.fanCmd.id.toZ,
          kind = PortKind.EventData,
          direction = StateDirection.In,
          slangType = ""),
        Port(
          name = "fanAck",
          id = Arch.TempControlSystem_Instance_fp_f.fanAck.id.toZ,
          kind = PortKind.EventData,
          direction = StateDirection.Out,
          slangType = "")))

  val modelInfo: ModelInfo =
    ModelInfo(ISZ(
     TempSensor_tsp_ts_MI,
     TempControl_tcp_tc_MI,
     Fan_fp_f_MI))
}

@datatype class ModelInfo(val components: ISZ[Component])

@datatype class Component(val name: String,
                          val id: Z,
                          val dispatchProtocol: iDispatchProtocol.Type,
                          val state: ISZ[StateElement])

@enum object iDispatchProtocol {
  "Sporadic"
  "Periodic"
}

@enum object StateDirection {
  "In"
  "Out"
}

@sig trait StateElement {
  def name: String

  def id: Z

  def slangType: String

  def direction: StateDirection.Type
}

@enum object PortKind {
  "Data"
  "Event"
  "EventData"
}

@datatype class Port(val name: String,
                     val id: Z,
                     val kind: PortKind.Type,
                     val direction: StateDirection.Type,
                     val slangType: String) extends StateElement

@datatype class StateVariable(val name: String,
                              val id: Z,
                              val direction: StateDirection.Type,
                              val slangType: String) extends StateElement
