// #Sireum

package slang.TempControlMixedSeL4CAmKES

import org.sireum._
import slang._
import slang.GumboXUtil.GumboXResult

// Do not edit this file as it will be overwritten if HAMR codegen is rerun
@msig trait TempControl_tcp_tc_GumboX_TestHarness extends TempControl_tcp_tc_TestApi {
  def verbose: B

  /** Contract-based test harness for the initialise entry point
    */
  def testInitialiseCB(
      ): GumboXResult.Type = {

    if (verbose) {
      println(st"""Pre State Values:
                  """.render)
    }

    // [InvokeEntryPoint]: invoke the entry point test method
    testInitialise()

    // [RetrieveOutState]: retrieve values of the output ports via get operations and GUMBO declared local state variable
    val api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = get_fanCmd()
    val currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentSetPoint
    val currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentFanState
    val latestTemp: TempControlMixedSeL4CAmKES.Temperature = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.latestTemp

    if (verbose) {
      println(st"""Post State Values:
                  |  api_fanCmd = ${api_fanCmd.string}
                  |  currentSetPoint = ${currentSetPoint.string}
                  |  currentFanState = ${currentFanState.string}
                  |  latestTemp = ${latestTemp.string}""".render)
    }

    // [CheckPost]: invoke the oracle function
    val postResult = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc_GumboX.inititialize_IEP_Post(currentFanState, currentSetPoint, latestTemp, api_fanCmd)
    val result: GumboXResult.Type =
      if (!postResult) GumboXResult.Post_Condition_Fail
      else GumboXResult.Post_Condition_Pass

    return result
  }

  def testComputeCBJ(json: String): GumboXResult.Type = {
    slang.JSON.toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(json) match {
      case Either.Left(o) => return testComputeCBV(o)
      case Either.Right(msg) => halt(msg.string)
    }
  }

  def testComputeCBV(o: TempControl_tcp_tc_PreState_Container): GumboXResult.Type = {
    return testComputeCB(o.api_tempChanged, o.api_fanAck, o.api_setPoint, o.api_currentTemp)
  }

  /** Contract-based test harness for the compute entry point
    * @param api_tempChanged incoming event port
    * @param api_fanAck incoming event data port
    * @param api_setPoint incoming event data port
    * @param api_currentTemp incoming data port
    */
  def testComputeCB(
      api_tempChanged: Option[art.Empty],
      api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type],
      api_setPoint: Option[TempControlMixedSeL4CAmKES.SetPoint],
      api_currentTemp: TempControlMixedSeL4CAmKES.Temperature): GumboXResult.Type = {

    // [SaveInLocal]: retrieve and save the current (input) values of GUMBO-declared local state variables as retrieved from the component state
    val In_currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentSetPoint
    val In_currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentFanState
    val In_latestTemp: TempControlMixedSeL4CAmKES.Temperature = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.latestTemp

    // [CheckPre]: check/filter based on pre-condition.
    val CEP_Pre_Result: B = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc_GumboX.compute_CEP_Pre (In_currentFanState, In_currentSetPoint, In_latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    if (!CEP_Pre_Result) {
      return GumboXResult.Pre_Condition_Unsat
    }

    // [PutInPorts]: put values on the input ports
    if (api_tempChanged.nonEmpty) {
      put_tempChanged()
    }
    if (api_fanAck.nonEmpty) {
      put_fanAck(api_fanAck.get)
    }
    if (api_setPoint.nonEmpty) {
      put_setPoint(api_setPoint.get)
    }
    put_currentTemp(api_currentTemp)

    if (verbose) {
      println(st"""Pre State Values:
                  |  In_currentFanState = ${In_currentFanState.string}
                  |  In_currentSetPoint = ${In_currentSetPoint.string}
                  |  In_latestTemp = ${In_latestTemp.string}
                  |  api_tempChanged = ${api_tempChanged.string}
                  |  api_fanAck = ${api_fanAck.string}
                  |  api_setPoint = ${api_setPoint.string}
                  |  api_currentTemp = ${api_currentTemp.string}""".render)
    }

    // [InvokeEntryPoint]: invoke the entry point test method
    testCompute()

    // [RetrieveOutState]: retrieve values of the output ports via get operations and GUMBO declared local state variable
    val api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = get_fanCmd()
    val currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentSetPoint
    val currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentFanState
    val latestTemp: TempControlMixedSeL4CAmKES.Temperature = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.latestTemp

    if (verbose) {
      println(st"""Post State Values:
                  |  api_fanCmd = ${api_fanCmd.string}
                  |  currentSetPoint = ${currentSetPoint.string}
                  |  currentFanState = ${currentFanState.string}
                  |  latestTemp = ${latestTemp.string}""".render)
    }

    // [CheckPost]: invoke the oracle function
    val postResult = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc_GumboX.compute_CEP_Post(In_currentFanState, In_currentSetPoint, In_latestTemp, currentFanState, currentSetPoint, latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp, api_fanCmd)
    val result: GumboXResult.Type =
      if (!postResult) GumboXResult.Post_Condition_Fail
      else GumboXResult.Post_Condition_Pass

    return result
  }

  def testComputeCBwLJ(json: String): GumboXResult.Type = {
    slang.JSON.toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(json) match {
      case Either.Left(o) => return testComputeCBwLV(o)
      case Either.Right(msg) => halt(msg.string)
    }
  }

  def testComputeCBwLV(o: TempControl_tcp_tc_PreState_Container_PS): GumboXResult.Type = {
    return testComputeCBwL(o.In_currentFanState, o.In_currentSetPoint, o.In_latestTemp, o.api_tempChanged, o.api_fanAck, o.api_setPoint, o.api_currentTemp)
  }

  /** Contract-based test harness for the compute entry point
    * @param In_currentFanState pre-state state variable
    * @param In_currentSetPoint pre-state state variable
    * @param In_latestTemp pre-state state variable
    * @param api_tempChanged incoming event port
    * @param api_fanAck incoming event data port
    * @param api_setPoint incoming event data port
    * @param api_currentTemp incoming data port
    */
  def testComputeCBwL(
      In_currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type,
      In_currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint,
      In_latestTemp: TempControlMixedSeL4CAmKES.Temperature,
      api_tempChanged: Option[art.Empty],
      api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type],
      api_setPoint: Option[TempControlMixedSeL4CAmKES.SetPoint],
      api_currentTemp: TempControlMixedSeL4CAmKES.Temperature): GumboXResult.Type = {

    // [CheckPre]: check/filter based on pre-condition.
    val CEP_Pre_Result: B = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc_GumboX.compute_CEP_Pre (In_currentFanState, In_currentSetPoint, In_latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    if (!CEP_Pre_Result) {
      return GumboXResult.Pre_Condition_Unsat
    }

    // [PutInPorts]: put values on the input ports
    if (api_tempChanged.nonEmpty) {
      put_tempChanged()
    }
    if (api_fanAck.nonEmpty) {
      put_fanAck(api_fanAck.get)
    }
    if (api_setPoint.nonEmpty) {
      put_setPoint(api_setPoint.get)
    }
    put_currentTemp(api_currentTemp)

    // [SetInStateVars]: set the pre-state values of state variables
    slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentSetPoint = In_currentSetPoint
    slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentFanState = In_currentFanState
    slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.latestTemp = In_latestTemp

    if (verbose) {
      println(st"""Pre State Values:
                  |  In_currentFanState = ${In_currentFanState.string}
                  |  In_currentSetPoint = ${In_currentSetPoint.string}
                  |  In_latestTemp = ${In_latestTemp.string}
                  |  api_tempChanged = ${api_tempChanged.string}
                  |  api_fanAck = ${api_fanAck.string}
                  |  api_setPoint = ${api_setPoint.string}
                  |  api_currentTemp = ${api_currentTemp.string}""".render)
    }

    // [InvokeEntryPoint]: invoke the entry point test method
    testCompute()

    // [RetrieveOutState]: retrieve values of the output ports via get operations and GUMBO declared local state variable
    val api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = get_fanCmd()
    val currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentSetPoint
    val currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.currentFanState
    val latestTemp: TempControlMixedSeL4CAmKES.Temperature = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc.latestTemp

    if (verbose) {
      println(st"""Post State Values:
                  |  api_fanCmd = ${api_fanCmd.string}
                  |  currentSetPoint = ${currentSetPoint.string}
                  |  currentFanState = ${currentFanState.string}
                  |  latestTemp = ${latestTemp.string}""".render)
    }

    // [CheckPost]: invoke the oracle function
    val postResult = slang.TempControlMixedSeL4CAmKES.TempControl_tcp_tc_GumboX.compute_CEP_Post(In_currentFanState, In_currentSetPoint, In_latestTemp, currentFanState, currentSetPoint, latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp, api_fanCmd)
    val result: GumboXResult.Type =
      if (!postResult) GumboXResult.Post_Condition_Fail
      else GumboXResult.Post_Condition_Pass

    return result
  }
}