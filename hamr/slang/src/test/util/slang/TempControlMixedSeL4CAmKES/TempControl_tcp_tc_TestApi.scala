// #Sireum

package slang.TempControlMixedSeL4CAmKES

import org.sireum._
import art.Art
import slang._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun
@msig trait TempControl_tcp_tc_TestApi {

  def BeforeEntrypoint(): Unit = {
    Art.initTest(Arch.TempControlSystem_Instance_tcp_tc)
  }

  def AfterEntrypoint(): Unit = {
    Art.finalizeTest(Arch.TempControlSystem_Instance_tcp_tc)
  }

  def testCompute(): Unit = {
    Art.manuallyClearOutput()
    Art.testCompute(Arch.TempControlSystem_Instance_tcp_tc)
  }

  def testInitialise(): Unit = {
    Art.manuallyClearOutput()
    Art.testInitialise(Arch.TempControlSystem_Instance_tcp_tc)
  }

  /** helper function to set the values of all input ports.
   * @param currentTemp payload for data port currentTemp
   * @param tempChanged the number of events to place in the tempChanged event port queue.
   *   ART currently supports single element event queues so at most
   *   one event will be placed in the queue.
   * @param fanAck payloads for event data port fanAck.
   *   ART currently supports single element event data queues so
   *   only the last element of fanAck will be used
   * @param setPoint payloads for event data port setPoint.
   *   ART currently supports single element event data queues so
   *   only the last element of setPoint will be used
   */
  def put_concrete_inputs(currentTemp : TempControlMixedSeL4CAmKES.Temperature,
                          tempChanged : Z,
                          fanAck : ISZ[TempControlMixedSeL4CAmKES.FanAck.Type],
                          setPoint : ISZ[TempControlMixedSeL4CAmKES.SetPoint]): Unit = {
    put_currentTemp(currentTemp)
    for(i <- 0 until tempChanged) {
      put_tempChanged()
    }
    for(v <- fanAck){
      put_fanAck(v)
    }
    for(v <- setPoint){
      put_setPoint(v)
    }
  }


  /** helper function to check TempControl_tcp_tc's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param fanCmd method that will be called with the payloads to be sent
   *        on the outgoing event data port 'fanCmd'.
   */
  def check_concrete_output(fanCmd: ISZ[TempControlMixedSeL4CAmKES.FanCmd.Type] => B): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var fanCmdValue: ISZ[TempControlMixedSeL4CAmKES.FanCmd.Type] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_fanCmd().nonEmpty) { fanCmdValue = fanCmdValue :+ get_fanCmd().get }
    if(!fanCmd(fanCmdValue)) {
      testFailures = testFailures :+ st"'fanCmd' did not match expected: received ${fanCmdValue.size} events with the following payloads ${fanCmdValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in DataPort
  def put_currentTemp(value : TempControlMixedSeL4CAmKES.Temperature): Unit = {
    Art.insertInInfrastructurePort(Arch.TempControlSystem_Instance_tcp_tc.operational_api.currentTemp_Id, TempControlMixedSeL4CAmKES.Temperature_Payload(value))
  }

  // setter for in EventPort
  def put_tempChanged(): Unit = {
    Art.insertInInfrastructurePort(Arch.TempControlSystem_Instance_tcp_tc.operational_api.tempChanged_Id, art.Empty())
  }

  // setter for in EventDataPort
  def put_fanAck(value : TempControlMixedSeL4CAmKES.FanAck.Type): Unit = {
    Art.insertInInfrastructurePort(Arch.TempControlSystem_Instance_tcp_tc.operational_api.fanAck_Id, TempControlMixedSeL4CAmKES.FanAck_Payload(value))
  }

  // setter for in EventDataPort
  def put_setPoint(value : TempControlMixedSeL4CAmKES.SetPoint): Unit = {
    Art.insertInInfrastructurePort(Arch.TempControlSystem_Instance_tcp_tc.operational_api.setPoint_Id, TempControlMixedSeL4CAmKES.SetPoint_Payload(value))
  }

  // getter for out EventDataPort
  def get_fanCmd(): Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = {
    val value: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = get_fanCmd_payload() match {
      case Some(TempControlMixedSeL4CAmKES.FanCmd_Payload(v)) => Some(v)
      case Some(v) => halt(s"Unexpected payload on port fanCmd.  Expecting 'TempControlMixedSeL4CAmKES.FanCmd_Payload' but received ${v}")
      case _ => None[TempControlMixedSeL4CAmKES.FanCmd.Type]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_fanCmd_payload(): Option[TempControlMixedSeL4CAmKES.FanCmd_Payload] = {
    return Art.observeOutInfrastructurePort(Arch.TempControlSystem_Instance_tcp_tc.initialization_api.fanCmd_Id).asInstanceOf[Option[TempControlMixedSeL4CAmKES.FanCmd_Payload]]
  }

}