// #Sireum

package tc.TempControlMixedSeL4CAmKES

import org.sireum._
import tc._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

@enum object FanCmd {
  "On"
  "Off"
}

object FanCmd_Payload {
  def example(): FanCmd_Payload = {
    return FanCmd_Payload(TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(0).get)
  }
}

@datatype class FanCmd_Payload(value: TempControlMixedSeL4CAmKES.FanCmd.Type) extends art.DataContent
