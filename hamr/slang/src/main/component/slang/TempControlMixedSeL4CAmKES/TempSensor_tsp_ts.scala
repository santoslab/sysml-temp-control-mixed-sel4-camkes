// #Sireum

package slang.TempControlMixedSeL4CAmKES

import org.sireum._
import slang._

// This file will not be overwritten so is safe to edit
object TempSensor_tsp_ts {

  // BEGIN FUNCTIONS
  @strictpure def defaultTempDegrees(): Base_Types.Float_32 = 72.0f
  // END FUNCTIONS

  def initialise(api: TempSensor_Initialization_Api): Unit = {
    Contract(
      Requires(
        // BEGIN INITIALIZES REQUIRES
        // assume AADL_Requirement
        //   All outgoing event ports must be empty
        api.tempChanged.isEmpty
        // END INITIALIZES REQUIRES
      ),
      Ensures(
        // BEGIN INITIALIZES ENSURES
        // guarantee initializes
        api.currentTemp.degrees == TempSensor_tsp_ts.defaultTempDegrees()
        // END INITIALIZES ENSURES
      )
    )
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_currentTemp(TempControlMixedSeL4CAmKES.Temperature.example())
    api.put_tempChanged()
  }

  def timeTriggered(api: TempSensor_Operational_Api): Unit = {
    // example api usage


  }

  def finalise(api: TempSensor_Operational_Api): Unit = { }
}
