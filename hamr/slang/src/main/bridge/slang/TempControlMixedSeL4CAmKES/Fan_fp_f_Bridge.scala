// #Sireum

package slang.TempControlMixedSeL4CAmKES

import org.sireum._
import art._
import slang._
import slang.TempControlMixedSeL4CAmKES.{Fan_fp_f => component}

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

@datatype class Fan_fp_f_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  fanCmd: Port[TempControlMixedSeL4CAmKES.FanCmd.Type],
  fanAck: Port[TempControlMixedSeL4CAmKES.FanAck.Type]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    dataIns = ISZ[art.UPort](),

    dataOuts = ISZ[art.UPort](),

    eventIns = ISZ[art.UPort](fanCmd),

    eventOuts = ISZ[art.UPort](fanAck)
  )

  val initialization_api : Fan_Initialization_Api = {
    val api = Fan_Initialization_Api(
      id,
      fanCmd.id,
      fanAck.id
    )
    Fan_fp_f_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : Fan_Operational_Api = {
    val api = Fan_Operational_Api(
      id,
      fanCmd.id,
      fanAck.id
    )
    Fan_fp_f_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    Fan_fp_f_Bridge.EntryPoints(
      id,

      fanCmd.id,
      fanAck.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object Fan_fp_f_Bridge {

  var c_initialization_api: Option[Fan_Initialization_Api] = None()
  var c_operational_api: Option[Fan_Operational_Api] = None()

  @datatype class EntryPoints(
    Fan_fp_f_BridgeId : Art.BridgeId,
    fanCmd_Id : Art.PortId,
    fanAck_Id : Art.PortId,
    dispatchTriggers : Option[ISZ[Art.PortId]],
    initialization_api: Fan_Initialization_Api,
    operational_api: Fan_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = IS()

    val eventInPortIds: ISZ[Art.PortId] = IS(fanCmd_Id)

    val dataOutPortIds: ISZ[Art.PortId] = IS()

    val eventOutPortIds: ISZ[Art.PortId] = IS(fanAck_Id)

    def initialise(): Unit = {
      Fan_fp_f_EntryPoint_Companion.pre_initialise()

      // implement the following method in 'component':  def initialise(api: Fan_Initialization_Api): Unit = {}
      component.initialise(initialization_api)

      Fan_fp_f_EntryPoint_Companion.post_initialise()

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def compute(): Unit = {
      Fan_fp_f_Injection_Service.pre_receiveInput()

      Art.receiveInput(eventInPortIds, dataInPortIds)

      Fan_fp_f_EntryPoint_Companion.pre_compute()

      // implement the following in 'component':  def timeTriggered(api: Fan_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Fan_fp_f_EntryPoint_Companion.post_compute()

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: Fan_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    override
    def testInitialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: Fan_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: Fan_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }
  }
}