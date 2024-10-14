// #Sireum

package slang_rm.TempControlMixedSeL4CAmKES

import org.sireum._
import art._
import slang_rm._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object TempSensor_tsp_ts_EntryPoint_Companion {

  var last_api_currentTemp: Option[TempControlMixedSeL4CAmKES.Temperature] = None()

  /** get the value of outgoing data port currentTemp.  If a 'fresh' value wasn't sent
    * during the last dispatch then return last_api_currentTemp.get.
    * Note: this requires outgoing data ports to be initialized during the
    * initialization phase or prior to system testing.
    */
  def get_api_currentTemp: TempControlMixedSeL4CAmKES.Temperature = {
    Art.observeOutPortVariable(Arch.TempControlSystem_Instance_tsp_ts.operational_api.currentTemp_Id) match {
      case Some(TempControlMixedSeL4CAmKES.Temperature_Payload(value)) =>
        last_api_currentTemp = Some(value)
        return value
      case _ if last_api_currentTemp.isEmpty =>
        assert(F, "No value found on outgoing data port currentTemp.\n                  Note: values placed during the initialization phase will persist across dispatches")
        halt("No value found on outgoing data port currentTemp.\n                  Note: values placed during the initialization phase will persist across dispatches")
      case _ => return last_api_currentTemp.get
    }
  }
  var preStateContainer_wL: Option[TempSensor_tsp_ts_PreState_Container_PS] = None()

  def pre_initialise(): Unit = {
    // assume/require contracts cannot refer to incoming ports or
    // state variables so nothing to do here
  }

  def post_initialise(): Unit = {
    // block the component while its post-state values are retrieved
    val postStateContainer_wL =
      TempSensor_tsp_ts_PostState_Container_PS(
        api_tempChanged = Art.observeOutPortVariable(Arch.TempControlSystem_Instance_tsp_ts.operational_api.tempChanged_Id).asInstanceOf[Option[art.Empty]],
        api_currentTemp = get_api_currentTemp)

    // the rest can now be performed via a different thread
    slang_rm.runtimemonitor.RuntimeMonitor.observeInitialisePostState(Arch.TempControlSystem_Instance_tsp_ts.id, slang_rm.runtimemonitor.ObservationKind.TempControlSystem_Instance_tsp_ts_postInit, postStateContainer_wL)
  }

  def pre_compute(): Unit = {
    // block the component while its pre-state values are retrieved
    preStateContainer_wL = Some(
      TempSensor_tsp_ts_PreState_Container_PS())

    // the rest can now be performed via a different thread
    slang_rm.runtimemonitor.RuntimeMonitor.observeComputePreState(Arch.TempControlSystem_Instance_tsp_ts.id, slang_rm.runtimemonitor.ObservationKind.TempControlSystem_Instance_tsp_ts_preCompute, preStateContainer_wL.asInstanceOf[Option[art.DataContent]])
  }

  def post_compute(): Unit = {
    // block the component while its post-state values are retrieved
    val postStateContainer_wL =
      TempSensor_tsp_ts_PostState_Container_PS(
        api_tempChanged = Art.observeOutPortVariable(Arch.TempControlSystem_Instance_tsp_ts.operational_api.tempChanged_Id).asInstanceOf[Option[art.Empty]],
        api_currentTemp = get_api_currentTemp)

    // the rest can now be performed via a different thread
    slang_rm.runtimemonitor.RuntimeMonitor.observeComputePrePostState(Arch.TempControlSystem_Instance_tsp_ts.id, slang_rm.runtimemonitor.ObservationKind.TempControlSystem_Instance_tsp_ts_postCompute, preStateContainer_wL.asInstanceOf[Option[art.DataContent]], postStateContainer_wL)
  }
}