// #Sireum

package tc.SlangTypeLibrary

import org.sireum._
import art._
import tc._

object SlangTypeLibrary extends App {
  def main(args: ISZ[String]): Z = {

    // touch each payload/type in case some are only used as a field in a record
    def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

    printDataContent(Base_Types.Boolean_Payload(Base_Types.Boolean_example()))
    printDataContent(Base_Types.Integer_Payload(Base_Types.Integer_example()))
    printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_example()))
    printDataContent(Base_Types.Integer_16_Payload(Base_Types.Integer_16_example()))
    printDataContent(Base_Types.Integer_32_Payload(Base_Types.Integer_32_example()))
    printDataContent(Base_Types.Integer_64_Payload(Base_Types.Integer_64_example()))
    printDataContent(Base_Types.Unsigned_8_Payload(Base_Types.Unsigned_8_example()))
    printDataContent(Base_Types.Unsigned_16_Payload(Base_Types.Unsigned_16_example()))
    printDataContent(Base_Types.Unsigned_32_Payload(Base_Types.Unsigned_32_example()))
    printDataContent(Base_Types.Unsigned_64_Payload(Base_Types.Unsigned_64_example()))
    printDataContent(Base_Types.Float_Payload(Base_Types.Float_example()))
    printDataContent(Base_Types.Float_32_Payload(Base_Types.Float_32_example()))
    printDataContent(Base_Types.Float_64_Payload(Base_Types.Float_64_example()))
    printDataContent(Base_Types.Character_Payload(Base_Types.Character_example()))
    printDataContent(Base_Types.String_Payload(Base_Types.String_example()))
    printDataContent(TempControlMixedSeL4CAmKES.Temperature_Payload(TempControlMixedSeL4CAmKES.Temperature.example()))
    printDataContent(TempControlMixedSeL4CAmKES.TempUnit_Payload(TempControlMixedSeL4CAmKES.TempUnit.byOrdinal(0).get))
    printDataContent(TempControlMixedSeL4CAmKES.SetPoint_Payload(TempControlMixedSeL4CAmKES.SetPoint.example()))
    printDataContent(TempControlMixedSeL4CAmKES.FanCmd_Payload(TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(0).get))
    printDataContent(TempControlMixedSeL4CAmKES.FanAck_Payload(TempControlMixedSeL4CAmKES.FanAck.byOrdinal(0).get))
    printDataContent(Isolette_Environment.Heat_Payload(Isolette_Environment.Heat.example()))
    printDataContent(Isolette_Environment.Interface_Interaction_Payload(Isolette_Environment.Interface_Interaction.example()))
    printDataContent(Isolette_Environment.Air_Interaction_Payload(Isolette_Environment.Air_Interaction.example()))
    printDataContent(TempControlMixed.Temperature_Payload(TempControlMixed.Temperature.example()))
    printDataContent(TempControlMixed.SetPoint_Payload(TempControlMixed.SetPoint.example()))
    printDataContent(TempControlMixed.TempUnit_Payload(TempControlMixed.TempUnit.byOrdinal(0).get))
    printDataContent(TempControlMixed.FanCmd_Payload(TempControlMixed.FanCmd.byOrdinal(0).get))
    printDataContent(TempControlMixed.FanAck_Payload(TempControlMixed.FanAck.byOrdinal(0).get))
    printDataContent(TempControlPeriodic.Temperature_Payload(TempControlPeriodic.Temperature.example()))
    printDataContent(TempControlPeriodic.SetPoint_Payload(TempControlPeriodic.SetPoint.example()))
    printDataContent(TempControlPeriodic.TempUnit_Payload(TempControlPeriodic.TempUnit.byOrdinal(0).get))
    printDataContent(TempControlPeriodic.FanCmd_Payload(TempControlPeriodic.FanCmd.byOrdinal(0).get))
    printDataContent(TempControlPeriodic.FanAck_Payload(TempControlPeriodic.FanAck.byOrdinal(0).get))
    printDataContent(Isolette_Data_Model.PhysicalTemp_Payload(Isolette_Data_Model.PhysicalTemp.example()))
    printDataContent(Isolette_Data_Model.TempWstatus_Payload(Isolette_Data_Model.TempWstatus.example()))
    printDataContent(Isolette_Data_Model.Temp_Payload(Isolette_Data_Model.Temp.example()))
    printDataContent(Isolette_Data_Model.On_Off_Payload(Isolette_Data_Model.On_Off.byOrdinal(0).get))
    printDataContent(Isolette_Data_Model.Failure_Flag_Payload(Isolette_Data_Model.Failure_Flag.example()))
    printDataContent(Isolette_Data_Model.ValueStatus_Payload(Isolette_Data_Model.ValueStatus.byOrdinal(0).get))
    printDataContent(Isolette_Data_Model.Status_Payload(Isolette_Data_Model.Status.byOrdinal(0).get))
    printDataContent(Isolette_Data_Model.Regulator_Mode_Payload(Isolette_Data_Model.Regulator_Mode.byOrdinal(0).get))
    printDataContent(Isolette_Data_Model.Monitor_Mode_Payload(Isolette_Data_Model.Monitor_Mode.byOrdinal(0).get))
    printDataContent(art.Empty())

    return 0
  }
}
