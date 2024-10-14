// #Sireum

package slang_rm.TempControlMixedSeL4CAmKES

import org.sireum._
import slang_rm._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object SetPoint {
  def example(): TempControlMixedSeL4CAmKES.SetPoint = {
    return TempControlMixedSeL4CAmKES.SetPoint(
      low = TempControlMixedSeL4CAmKES.Temperature.example(),
      high = TempControlMixedSeL4CAmKES.Temperature.example())
  }

  /** invariant SetPoint_Data_Invariant
    */
  @strictpure def SetPoint_Data_Invariant_Invariant(value: TempControlMixedSeL4CAmKES.SetPoint): B =
    value.low.degrees >= 50.0f &
      (value.high.degrees <= 110.0f &
        value.low.degrees <= value.high.degrees)

  /** D-Inv Data Invariant for TempControlMixedSeL4CAmKES.SetPoint
    */
  @strictpure def D_Inv_SetPoint(value: TempControlMixedSeL4CAmKES.SetPoint): B =
    (SetPoint_Data_Invariant_Invariant(value))

  /** D-Inv-Guard Data Invariant for TempControlMixedSeL4CAmKES.SetPoint
    */
  @strictpure def D_Inv_Guard_SetPoint(value: Option[TempControlMixedSeL4CAmKES.SetPoint]): B =
    value.nonEmpty -->: D_Inv_SetPoint(value.get)
}

@datatype class SetPoint(
  val low: TempControlMixedSeL4CAmKES.Temperature,
  val high: TempControlMixedSeL4CAmKES.Temperature) {
  @spec def SetPoint_Data_Invariant = Invariant(
    low.degrees >= 50.0f &
      (high.degrees <= 110.0f &
        low.degrees <= high.degrees)
  )
}

object SetPoint_Payload {
  def example(): SetPoint_Payload = {
    return SetPoint_Payload(TempControlMixedSeL4CAmKES.SetPoint.example())
  }
}

@datatype class SetPoint_Payload(value: TempControlMixedSeL4CAmKES.SetPoint) extends art.DataContent
