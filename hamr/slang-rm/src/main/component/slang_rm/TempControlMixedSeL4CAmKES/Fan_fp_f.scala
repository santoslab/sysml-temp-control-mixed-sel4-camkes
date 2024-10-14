// #Sireum

package slang_rm.TempControlMixedSeL4CAmKES

import org.sireum._
import slang_rm._

// This file will not be overwritten so is safe to edit
object Fan_fp_f {

  def initialise(api: Fan_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_fanAck(TempControlMixedSeL4CAmKES.FanAck.byOrdinal(0).get)
  }

  def timeTriggered(api: Fan_Operational_Api): Unit = {
    // example api usage

    val apiUsage_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = api.get_fanCmd()
    api.logInfo(s"Received on event data port fanCmd: ${apiUsage_fanCmd}")
  }

  def finalise(api: Fan_Operational_Api): Unit = { }
}
