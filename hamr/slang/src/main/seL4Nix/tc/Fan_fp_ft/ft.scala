// #Sireum

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

package tc.Fan_fp_ft

import org.sireum._
import art._
import art.Art.BridgeId._
import art.Art.PortId._
import art.DispatchPropertyProtocol._
import art.PortMode._
import tc._
import tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_seL4Nix

object ft extends App {

  val ftBridge : tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge = {
    val fanCmd = Port[TempControlMixedSeL4CAmKES.FanCmd.Type] (id = portId"0", name = "TempControlSystem_Instance_fp_ft_fanCmd", mode = EventIn)
    val fanAck = Port[TempControlMixedSeL4CAmKES.FanAck.Type] (id = portId"1", name = "TempControlSystem_Instance_fp_ft_fanAck", mode = EventOut)

    tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge(
      id = bridgeId"0",
      name = "TempControlSystem_Instance_fp_ft",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      fanCmd = fanCmd,
      fanAck = fanAck
    )
  }

  val entryPoints: Bridge.EntryPoints = ftBridge.entryPoints
  val noData: Option[DataContent] = None()

  // fanCmd: In EventDataPort TempControlMixedSeL4CAmKES.FanCmd
  val fanCmd_id: Art.PortId = ftBridge.fanCmd.id
  var fanCmd_port: Option[DataContent] = noData

  // fanAck: Out EventDataPort TempControlMixedSeL4CAmKES.FanAck
  val fanAck_id: Art.PortId = ftBridge.fanAck.id
  var fanAck_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = IS()
    if(!Fan_fp_ft_seL4Nix.fanCmd_IsEmpty()) {
      portIds = portIds :+ fanCmd_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == fanCmd_id) {
      return fanCmd_port
    } else {
      halt(s"Unexpected: ft.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    fanCmd_port = Fan_fp_ft_seL4Nix.fanCmd_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == fanAck_id) {
      fanAck_port = Some(data)
    } else {
      halt(s"Unexpected: ft.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(fanAck_port.nonEmpty) {
      Fan_fp_ft_seL4Nix.fanAck_Send(fanAck_port.get)
      fanAck_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(portId"0", Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(portId"0", None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Boolean_Payload(Base_Types.Boolean_example()))
      printDataContent(Base_Types.Integer_Payload(Base_Types.Integer_example()))
      printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_example()))
      printDataContent(Base_Types.Integer_16_Payload(Base_Types.Integer_16_example()))
      printDataContent(Base_Types.Integer_32_Payload(Base_Types.Integer_32_example()))
      printDataContent(Base_Types.Integer_64_Payload(Base_Types.Integer_64_example()))
      printDataContent(Base_Types.Unsigned_8_Payload(Base_Types.Unsigned_8_example()))
      printDataContent(Base_Types.Unsigned_16_Payload(Base_Types.Unsigned_16_example()))
      printDataContent(Base_Types.Unsigned_32_Payload(Base_Types.Unsigned_32_example()))
      printDataContent(Base_Types.Unsigned_64_Payload(Base_Types.Unsigned_64_example()))
      printDataContent(Base_Types.Float_Payload(Base_Types.Float_example()))
      printDataContent(Base_Types.Float_32_Payload(Base_Types.Float_32_example()))
      printDataContent(Base_Types.Float_64_Payload(Base_Types.Float_64_example()))
      printDataContent(Base_Types.Character_Payload(Base_Types.Character_example()))
      printDataContent(Base_Types.String_Payload(Base_Types.String_example()))
      printDataContent(TempControlMixedSeL4CAmKES.Temperature_Payload(TempControlMixedSeL4CAmKES.Temperature.example()))
      printDataContent(TempControlMixedSeL4CAmKES.TempUnit_Payload(TempControlMixedSeL4CAmKES.TempUnit.byOrdinal(0).get))
      printDataContent(TempControlMixedSeL4CAmKES.SetPoint_Payload(TempControlMixedSeL4CAmKES.SetPoint.example()))
      printDataContent(TempControlMixedSeL4CAmKES.FanCmd_Payload(TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(0).get))
      printDataContent(TempControlMixedSeL4CAmKES.FanAck_Payload(TempControlMixedSeL4CAmKES.FanAck.byOrdinal(0).get))
      printDataContent(Isolette_Environment.Heat_Payload(Isolette_Environment.Heat.example()))
      printDataContent(Isolette_Environment.Interface_Interaction_Payload(Isolette_Environment.Interface_Interaction.example()))
      printDataContent(Isolette_Environment.Air_Interaction_Payload(Isolette_Environment.Air_Interaction.example()))
      printDataContent(TempControlMixed.Temperature_Payload(TempControlMixed.Temperature.example()))
      printDataContent(TempControlMixed.SetPoint_Payload(TempControlMixed.SetPoint.example()))
      printDataContent(TempControlMixed.TempUnit_Payload(TempControlMixed.TempUnit.byOrdinal(0).get))
      printDataContent(TempControlMixed.FanCmd_Payload(TempControlMixed.FanCmd.byOrdinal(0).get))
      printDataContent(TempControlMixed.FanAck_Payload(TempControlMixed.FanAck.byOrdinal(0).get))
      printDataContent(TempControlPeriodic.Temperature_Payload(TempControlPeriodic.Temperature.example()))
      printDataContent(TempControlPeriodic.SetPoint_Payload(TempControlPeriodic.SetPoint.example()))
      printDataContent(TempControlPeriodic.TempUnit_Payload(TempControlPeriodic.TempUnit.byOrdinal(0).get))
      printDataContent(TempControlPeriodic.FanCmd_Payload(TempControlPeriodic.FanCmd.byOrdinal(0).get))
      printDataContent(TempControlPeriodic.FanAck_Payload(TempControlPeriodic.FanAck.byOrdinal(0).get))
      printDataContent(Isolette_Data_Model.PhysicalTemp_Payload(Isolette_Data_Model.PhysicalTemp.example()))
      printDataContent(Isolette_Data_Model.TempWstatus_Payload(Isolette_Data_Model.TempWstatus.example()))
      printDataContent(Isolette_Data_Model.Temp_Payload(Isolette_Data_Model.Temp.example()))
      printDataContent(Isolette_Data_Model.On_Off_Payload(Isolette_Data_Model.On_Off.byOrdinal(0).get))
      printDataContent(Isolette_Data_Model.Failure_Flag_Payload(Isolette_Data_Model.Failure_Flag.example()))
      printDataContent(Isolette_Data_Model.ValueStatus_Payload(Isolette_Data_Model.ValueStatus.byOrdinal(0).get))
      printDataContent(Isolette_Data_Model.Status_Payload(Isolette_Data_Model.Status.byOrdinal(0).get))
      printDataContent(Isolette_Data_Model.Regulator_Mode_Payload(Isolette_Data_Model.Regulator_Mode.byOrdinal(0).get))
      printDataContent(Isolette_Data_Model.Monitor_Mode_Payload(Isolette_Data_Model.Monitor_Mode.byOrdinal(0).get))
      printDataContent(art.Empty())

      tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_initialization_api.get.logInfo("")
      tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_initialization_api.get.logDebug("")
      tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_initialization_api.get.logError("")
      tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_operational_api.get.logInfo("")
      tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_operational_api.get.logDebug("")
      tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_operational_api.get.logError("")
      val apiUsage_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_operational_api.get.get_fanCmd()
      tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_initialization_api.get.put_fanAck(TempControlMixedSeL4CAmKES.FanAck.byOrdinal(0).get)
      tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.c_operational_api.get.put_fanAck(TempControlMixedSeL4CAmKES.FanAck.byOrdinal(0).get)
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(ftBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(ftBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(ftBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}