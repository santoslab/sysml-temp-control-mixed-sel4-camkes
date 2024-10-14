// #Sireum

package slang.TempControlMixed

import org.sireum._
import slang._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object SetPoint {
  def example(): TempControlMixed.SetPoint = {
    return TempControlMixed.SetPoint(
      low = TempControlMixed.Temperature.example(),
      high = TempControlMixed.Temperature.example())
  }

  /** invariant SetPoint_Data_Invariant
    */
  @strictpure def SetPoint_Data_Invariant_Invariant(value: TempControlMixed.SetPoint): B =
    value.low.degrees >= 50.0f &
      (value.high.degrees <= 110.0f &
        value.low.degrees <= value.high.degrees)

  /** D-Inv Data Invariant for TempControlMixed.SetPoint
    */
  @strictpure def D_Inv_SetPoint(value: TempControlMixed.SetPoint): B =
    (SetPoint_Data_Invariant_Invariant(value))

  /** D-Inv-Guard Data Invariant for TempControlMixed.SetPoint
    */
  @strictpure def D_Inv_Guard_SetPoint(value: Option[TempControlMixed.SetPoint]): B =
    value.nonEmpty -->: D_Inv_SetPoint(value.get)
}

@datatype class SetPoint(
  val low: TempControlMixed.Temperature,
  val high: TempControlMixed.Temperature) {
  @spec def SetPoint_Data_Invariant = Invariant(
    low.degrees >= 50.0f &
      (high.degrees <= 110.0f &
        low.degrees <= high.degrees)
  )
}

object SetPoint_Payload {
  def example(): SetPoint_Payload = {
    return SetPoint_Payload(TempControlMixed.SetPoint.example())
  }
}

@datatype class SetPoint_Payload(value: TempControlMixed.SetPoint) extends art.DataContent
