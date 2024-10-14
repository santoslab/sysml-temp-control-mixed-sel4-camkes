// #Sireum

package slang.TempControlMixedSeL4CAmKES

import org.sireum._
import slang._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun
object TempSensor_tsp_ts_GumboX {
  /** I-Guar: Integration constraint on ts's outgoing data port currentTemp
    *
    * guarantee Sensor_Temperature_Range
    */
  @strictpure def I_Guar_currentTemp(currentTemp: TempControlMixedSeL4CAmKES.Temperature): B =
    currentTemp.degrees >= -40.0f &
      currentTemp.degrees <= 122.0f

  // I_Guar-Guard: Integration constraint on ts's outgoing data port currentTemp
  @strictpure def I_Guar_Guard_currentTemp(currentTemp: Option[TempControlMixedSeL4CAmKES.Temperature]): B =
    currentTemp.nonEmpty -->: I_Guar_currentTemp(currentTemp.get)

  /** Initialize Entrypoint Contract
    *
    * guarantee initializes
    * @param api_currentTemp outgoing data port
    */
  @strictpure def initialize_initializes (
      api_currentTemp: TempControlMixedSeL4CAmKES.Temperature): B =
    api_currentTemp.degrees == TempSensor_tsp_ts.defaultTempDegrees()

  /** IEP-Guar: Initialize Entrypoint Contracts for ts
    *
    * @param api_tempChanged outgoing event port
    * @param api_currentTemp outgoing data port
    */
  @strictpure def initialize_IEP_Guar (
      api_tempChanged: Option[art.Empty],
      api_currentTemp: TempControlMixedSeL4CAmKES.Temperature): B =
    initialize_initializes(api_currentTemp)

  /** IEP-Post: Initialize Entrypoint Post-Condition
    *
    * @param api_tempChanged outgoing event port
    * @param api_currentTemp outgoing data port
    */
  @strictpure def inititialize_IEP_Post (
      api_tempChanged: Option[art.Empty],
      api_currentTemp: TempControlMixedSeL4CAmKES.Temperature): B =
    (// D-Inv-Guard: Datatype invariants for the types associated with ts's state variables and outgoing ports
     TempControlMixedSeL4CAmKES.Temperature.D_Inv_Temperature(api_currentTemp) & 

     // I-Guar-Guard: Integration constraints for ts's outgoing ports"
     I_Guar_currentTemp(api_currentTemp) & 

     // IEP-Guar: Initialize Entrypoint contract for ts
     initialize_IEP_Guar(api_tempChanged, api_currentTemp))

  /** IEP-Post: Initialize Entrypoint Post-Condition via container
    *
    * @param post Container holding the value of incoming ports and the pre-state values of state variables
    */
  @strictpure def inititialize_IEP_Post_Container (post: TempSensor_tsp_ts_PostState_Container_PS): B =
    inititialize_IEP_Post (
      api_tempChanged = post.api_tempChanged,
      api_currentTemp = post.api_currentTemp)

  /** CEP-Post: Compute Entrypoint Post-Condition for ts
    *
    * @param api_tempChanged outgoing event port
    * @param api_currentTemp outgoing data port
    */
  @strictpure def compute_CEP_Post (
      api_tempChanged: Option[art.Empty],
      api_currentTemp: TempControlMixedSeL4CAmKES.Temperature): B =
    (// D-Inv-Guard: Datatype invariants for the types associated with ts's state variables and outgoing ports
     TempControlMixedSeL4CAmKES.Temperature.D_Inv_Temperature(api_currentTemp) & 

     // I-Guar-Guard: Integration constraints for ts's outgoing ports
     I_Guar_currentTemp(api_currentTemp))

  /** CEP-Post: Compute Entrypoint Post-Condition for ts via containers
    *
    * @param pre Container holding the values of incoming ports and the pre-state values of state variables
    * @param post Container holding the values of outgoing ports and the post-state values of state variables
    */
  @strictpure def compute_CEP_Post_Container(
      pre: TempSensor_tsp_ts_PreState_Container_PS,
      post: TempSensor_tsp_ts_PostState_Container_PS): B =
    compute_CEP_Post(
      api_tempChanged = post.api_tempChanged,
      api_currentTemp = post.api_currentTemp)
}
