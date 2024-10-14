// #Sireum

package slang_rm.TempControlPeriodic

import org.sireum._
import slang_rm._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

@enum object FanAck {
  "Ok"
  "Error"
}

object FanAck_Payload {
  def example(): FanAck_Payload = {
    return FanAck_Payload(TempControlPeriodic.FanAck.byOrdinal(0).get)
  }
}

@datatype class FanAck_Payload(value: TempControlPeriodic.FanAck.Type) extends art.DataContent
