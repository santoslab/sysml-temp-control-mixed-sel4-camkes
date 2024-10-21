// #Sireum

package tc.TempControlPeriodic

import org.sireum._
import tc._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

@enum object TempUnit {
  "Fahrenheit"
  "Celsius"
  "Kelvin"
}

object TempUnit_Payload {
  def example(): TempUnit_Payload = {
    return TempUnit_Payload(TempControlPeriodic.TempUnit.byOrdinal(0).get)
  }
}

@datatype class TempUnit_Payload(value: TempControlPeriodic.TempUnit.Type) extends art.DataContent