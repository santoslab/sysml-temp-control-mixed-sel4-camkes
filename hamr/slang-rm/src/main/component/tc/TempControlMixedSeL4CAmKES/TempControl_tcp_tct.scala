// #Sireum

package tc.TempControlMixedSeL4CAmKES

import org.sireum._
import tc._

// This file will not be overwritten so is safe to edit
object TempControl_tcp_tct {

  // BEGIN STATE VARS
  var currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint = TempControlMixedSeL4CAmKES.SetPoint.example()

  var currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type = TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(0).get

  var latestTemp: TempControlMixedSeL4CAmKES.Temperature = TempControlMixedSeL4CAmKES.Temperature.example()

  var fanError: Base_Types.Boolean = Base_Types.Boolean_example()
  // END STATE VARS

  def initialise(api: TempControl_Initialization_Api): Unit = {
    Contract(
      Requires(
        // BEGIN INITIALIZES REQUIRES
        // assume AADL_Requirement
        //   All outgoing event ports must be empty
        api.fanCmd.isEmpty
        // END INITIALIZES REQUIRES
      ),
      Modifies(
        // BEGIN INITIALIZES MODIFIES
        currentSetPoint,
        currentFanState,
        latestTemp
        // END INITIALIZES MODIFIES
      ),
      Ensures(
        // BEGIN INITIALIZES ENSURES
        // guarantee defaultSetPoint
        currentSetPoint.low.degrees == 70.0f &
          currentSetPoint.high.degrees == 90.0f,
        // guarantee defaultFanStates
        currentFanState == FanCmd.Off,
        // guarantee defaultLatestTemp
        latestTemp.degrees == 72.0f
        // END INITIALIZES ENSURES
      )
    )
    // The Initialize Entry Point must initialize all component local state and all output data ports.
    currentSetPoint = SetPoint(
      Temperature(70.0f, TempUnit.Fahrenheit),
      Temperature(90.0f, TempUnit.Fahrenheit))
    currentFanState = FanCmd.Off
    latestTemp = Temperature(72.0f, TempUnit.Fahrenheit)

    // initialize output data ports
    //  (no output data ports to initialize)
  }

  def handle_tempChanged(api: TempControl_Operational_Api): Unit = {
    Contract(
      Requires(
        // BEGIN COMPUTE REQUIRES tempChanged
        // assume HAMR-Guarantee built-in
        //   The spec var corresponding to the handled event must be non-empty
        api.tempChanged.nonEmpty,
        // assume AADL_Requirement
        //   All outgoing event ports must be empty
        api.fanCmd.isEmpty,
        // assume a1
        //   "If the previously received currentTemp was less than the previously
        //   received setPoint then the last fan command must have been Off"
        !(In(fanError)) &
          (In(latestTemp)).degrees < (In(currentSetPoint)).low.degrees __>:
          In(currentFanState) == FanCmd.Off,
        // assume a2
        //   "If the previously received currentTemp was more than the previously
        //   received setPoint then the last fan command must have been On"
        !(In(fanError)) &
          (In(latestTemp)).degrees > (In(currentSetPoint)).high.degrees __>:
          In(currentFanState) == FanCmd.On
        // END COMPUTE REQUIRES tempChanged
      ),
      Modifies(
        // BEGIN COMPUTE MODIFIES tempChanged
        currentSetPoint,
        currentFanState,
        latestTemp,
        fanError
        // END COMPUTE MODIFIES tempChanged
      ),
      Ensures(
        // BEGIN COMPUTE ENSURES tempChanged
        // guarantee errorState
        //   "If the fan sent FanAck.Error then continue sending the
        //   last fan command until the fan sends FanAck.Ok"
        fanError __>:
          In(currentFanState) == currentFanState &&
            (api.fanCmd.nonEmpty &&
              api.fanCmd.get == currentFanState),
        // guarantee TC_Req_01
        //   "If the current temperature is less than the set point, then the fan state shall be Off."
        !fanError &
          latestTemp.degrees < currentSetPoint.low.degrees __>:
          currentFanState == FanCmd.Off,
        // guarantee TC_Req_02
        //   "If the current temperature is greater than the set point,
        //   then the fan state shall be On."
        !fanError &
          latestTemp.degrees > currentSetPoint.high.degrees __>:
          currentFanState == FanCmd.On,
        // guarantee TC_Req_03
        //   "If the current temperature is greater than or equal to the
        //   current low set point and less than or equal to the current high set point,
        //   then the current fan state is maintained."
        !fanError &
          (latestTemp.degrees >= currentSetPoint.low.degrees &
            latestTemp.degrees <= currentSetPoint.high.degrees) __>:
          currentFanState == In(currentFanState),
        // guarantee mustSendFanCmd
        //   "If the local record of the fan state was updated,
        //   then send a fan command event with this updated value."
        (!fanError &
           In(currentFanState) != currentFanState __>:
           api.fanCmd.nonEmpty &&
             api.fanCmd.get == currentFanState) &&
          (!fanError &
            currentFanState == In(currentFanState) __>:
            api.fanCmd.isEmpty),
        // guarantees tempChanged
        latestTemp == api.currentTemp,
        // guarantees setPointNotModified
        currentSetPoint == In(currentSetPoint)
        // END COMPUTE ENSURES tempChanged
      )
    )
    // log to indicate that that a tempChanged event was received/handled
    //api.logInfo("received tempChanged")

    // get current temp from currentTemp in data port
    latestTemp = api.get_currentTemp().get // since this is a data port, the .get always succeeds

    api.logInfo(s"Received :$latestTemp")

    // compute command to send to fan
    perform_fan_control(api)
  }

  def handle_fanAck(api: TempControl_Operational_Api, value: TempControlMixedSeL4CAmKES.FanAck.Type): Unit = {
    Contract(
      Requires(
        // BEGIN COMPUTE REQUIRES fanAck
        // assume HAMR-Guarantee built-in
        //   The spec var corresponding to the handled event must be non-empty and
        //   the passed in payload must be the same as the spec var's value
        api.fanAck.nonEmpty &&
        api.fanAck.get == value,
        // assume AADL_Requirement
        //   All outgoing event ports must be empty
        api.fanCmd.isEmpty,
        // assume a1
        //   "If the previously received currentTemp was less than the previously
        //   received setPoint then the last fan command must have been Off"
        !(In(fanError)) &
          (In(latestTemp)).degrees < (In(currentSetPoint)).low.degrees __>:
          In(currentFanState) == FanCmd.Off,
        // assume a2
        //   "If the previously received currentTemp was more than the previously
        //   received setPoint then the last fan command must have been On"
        !(In(fanError)) &
          (In(latestTemp)).degrees > (In(currentSetPoint)).high.degrees __>:
          In(currentFanState) == FanCmd.On
        // END COMPUTE REQUIRES fanAck
      ),
      Modifies(
        // BEGIN COMPUTE MODIFIES fanAck
        currentSetPoint,
        currentFanState,
        latestTemp,
        fanError
        // END COMPUTE MODIFIES fanAck
      ),
      Ensures(
        // BEGIN COMPUTE ENSURES fanAck
        // guarantee errorState
        //   "If the fan sent FanAck.Error then continue sending the
        //   last fan command until the fan sends FanAck.Ok"
        fanError __>:
          In(currentFanState) == currentFanState &&
            (api.fanCmd.nonEmpty &&
              api.fanCmd.get == currentFanState),
        // guarantee TC_Req_01
        //   "If the current temperature is less than the set point, then the fan state shall be Off."
        !fanError &
          latestTemp.degrees < currentSetPoint.low.degrees __>:
          currentFanState == FanCmd.Off,
        // guarantee TC_Req_02
        //   "If the current temperature is greater than the set point,
        //   then the fan state shall be On."
        !fanError &
          latestTemp.degrees > currentSetPoint.high.degrees __>:
          currentFanState == FanCmd.On,
        // guarantee TC_Req_03
        //   "If the current temperature is greater than or equal to the
        //   current low set point and less than or equal to the current high set point,
        //   then the current fan state is maintained."
        !fanError &
          (latestTemp.degrees >= currentSetPoint.low.degrees &
            latestTemp.degrees <= currentSetPoint.high.degrees) __>:
          currentFanState == In(currentFanState),
        // guarantee mustSendFanCmd
        //   "If the local record of the fan state was updated,
        //   then send a fan command event with this updated value."
        (!fanError &
           In(currentFanState) != currentFanState __>:
           api.fanCmd.nonEmpty &&
             api.fanCmd.get == currentFanState) &&
          (!fanError &
            currentFanState == In(currentFanState) __>:
            api.fanCmd.isEmpty),
        // guarantees setPointNotModified
        currentSetPoint == In(currentSetPoint),
        // guarantees lastTempNotModified
        latestTemp == In(latestTemp),
        // guarantees manageErrorState
        (api.fanAck.get == FanAck.Ok __>:
           !fanError) &
          (api.fanAck.get == FanAck.Error __>:
            fanError)
        // END COMPUTE ENSURES fanAck
      )
    )
    value match {
      case FanAck.Ok =>
        // Log actuation succeeded
        api.logInfo("Fan actuation worked.")
        fanError = F
      case FanAck.Error =>
        api.logError("Fan actuation failed!")
        fanError = T
    }
    perform_fan_control(api)
  }

  def handle_setPoint(api: TempControl_Operational_Api, value: TempControlMixedSeL4CAmKES.SetPoint): Unit = {
    Contract(
      Requires(
        // BEGIN COMPUTE REQUIRES setPoint
        // assume HAMR-Guarantee built-in
        //   The spec var corresponding to the handled event must be non-empty and
        //   the passed in payload must be the same as the spec var's value
        api.setPoint.nonEmpty &&
        api.setPoint.get == value,
        // assume AADL_Requirement
        //   All outgoing event ports must be empty
        api.fanCmd.isEmpty,
        // assume a1
        //   "If the previously received currentTemp was less than the previously
        //   received setPoint then the last fan command must have been Off"
        !(In(fanError)) &
          (In(latestTemp)).degrees < (In(currentSetPoint)).low.degrees __>:
          In(currentFanState) == FanCmd.Off,
        // assume a2
        //   "If the previously received currentTemp was more than the previously
        //   received setPoint then the last fan command must have been On"
        !(In(fanError)) &
          (In(latestTemp)).degrees > (In(currentSetPoint)).high.degrees __>:
          In(currentFanState) == FanCmd.On
        // END COMPUTE REQUIRES setPoint
      ),
      Modifies(
        // BEGIN COMPUTE MODIFIES setPoint
        currentSetPoint,
        currentFanState,
        latestTemp,
        fanError
        // END COMPUTE MODIFIES setPoint
      ),
      Ensures(
        // BEGIN COMPUTE ENSURES setPoint
        // guarantee errorState
        //   "If the fan sent FanAck.Error then continue sending the
        //   last fan command until the fan sends FanAck.Ok"
        fanError __>:
          In(currentFanState) == currentFanState &&
            (api.fanCmd.nonEmpty &&
              api.fanCmd.get == currentFanState),
        // guarantee TC_Req_01
        //   "If the current temperature is less than the set point, then the fan state shall be Off."
        !fanError &
          latestTemp.degrees < currentSetPoint.low.degrees __>:
          currentFanState == FanCmd.Off,
        // guarantee TC_Req_02
        //   "If the current temperature is greater than the set point,
        //   then the fan state shall be On."
        !fanError &
          latestTemp.degrees > currentSetPoint.high.degrees __>:
          currentFanState == FanCmd.On,
        // guarantee TC_Req_03
        //   "If the current temperature is greater than or equal to the
        //   current low set point and less than or equal to the current high set point,
        //   then the current fan state is maintained."
        !fanError &
          (latestTemp.degrees >= currentSetPoint.low.degrees &
            latestTemp.degrees <= currentSetPoint.high.degrees) __>:
          currentFanState == In(currentFanState),
        // guarantee mustSendFanCmd
        //   "If the local record of the fan state was updated,
        //   then send a fan command event with this updated value."
        (!fanError &
           In(currentFanState) != currentFanState __>:
           api.fanCmd.nonEmpty &&
             api.fanCmd.get == currentFanState) &&
          (!fanError &
            currentFanState == In(currentFanState) __>:
            api.fanCmd.isEmpty),
        // guarantees setPointChanged
        currentSetPoint == api.setPoint.get,
        // guarantees latestTempNotModified
        latestTemp == In(latestTemp)
        // END COMPUTE ENSURES setPoint
      )
    )
    // log to indicate that that a setPoint event was received/handled
    // on the setPoint in event data port
    // api.logInfo(s"received setPoint $value")  // remove for now because Logika cannot handle string interpolation
    api.logInfo("received setPoint")
    // assign the setPoint record (containing both low and high set points)
    // to a component local variable "setPoint" that holds the current set point values
    currentSetPoint = value

    // compute command to send to fan
    perform_fan_control(api)
  }


  //--------------------------------------------
  //
  //  p e r f o r m _ f a n _ c o n t r o l
  //
  //  Helper function to control the fan after
  //    change to current temperature, or
  //    change to set point.
  //
  //--------------------------------------------

  def perform_fan_control(api: TempControl_Operational_Api) : Unit = {
    Contract(
      // For now we need to manually specify that we assume that output event ports are empty at start of method.
      // This is because if we do not call "put value" on them, we need to be able to conclude that the ports are still empty
      // in the post-condition.
      Requires(api.fanCmd.isEmpty),
      Modifies(api, // modifies api.fancmd (since we don't have precise frame conditions for records, we have to assume that all
        // ghost variables for ports are modified
        currentFanState),
      Ensures(// current have to "manually" give frame-condition for all input data-like port states
        api.currentTemp == In(api).currentTemp,

        api.setPoint == In(api).setPoint,

        api.fanAck == In(api).fanAck,
        // post-conditions - control logic
        (!fanError & latestTemp.degrees < currentSetPoint.low.degrees) ->:
          (currentFanState == FanCmd.Off),
        (!fanError & latestTemp.degrees > currentSetPoint.high.degrees) ->:
          (currentFanState == FanCmd.On),
        // The following clause combines the control law logic with the logic for decided if we need to send a fan command
        //  (i.e., did our desired state for fan change).   It might be cleaner (better compositional reasoning) to
        // separate these.
        (!fanError & latestTemp.degrees >= currentSetPoint.low.degrees & latestTemp.degrees <= currentSetPoint.high.degrees)
          ->: (currentFanState == In(currentFanState) & api.fanCmd == None[FanCmd.Type]()),
        // post-condition - communication logic
        (!fanError & currentFanState != In(currentFanState)) ->: (api.fanCmd == Some(currentFanState)),
        ((!fanError & currentFanState == In(currentFanState))) ->: (api.fanCmd.isEmpty),
        fanError ->: (In(currentFanState) == currentFanState & api.fanCmd == Some(currentFanState))
      )
    )
    if (fanError) {
      api.put_fanCmd(currentFanState)
    } else {
      val oldFanState = currentFanState
      if (latestTemp.degrees < currentSetPoint.low.degrees) {
        // if current temp is below low set point,
        currentFanState = FanCmd.Off
      } else if (latestTemp.degrees > currentSetPoint.high.degrees) {
        // if current temp exceeds high set point,
        currentFanState = FanCmd.On
      } else {
        //api.logInfo("Fan state unchanged")
        // DEMO: Uncommenting this line will lead Logika to find a post-condition violation
        //   i.e., a fan command is being sent when it shouldn't be sent
        // api.put_fanCmd(currentFanState)
      }
      if (currentFanState != oldFanState) {
        // if we change the desired fanState, send new command to fan to change its state
        api.put_fanCmd(currentFanState)
      }
    }
  }

  def finalise(api: TempControl_Operational_Api): Unit = { }
}