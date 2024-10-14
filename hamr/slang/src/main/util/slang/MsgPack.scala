// #Sireum
// @formatter:off

// This file is auto-generated from Temperature.scala, SetPoint.scala, TempUnit.scala, FanCmd.scala, FanAck.scala, Temperature.scala, SetPoint.scala, TempUnit.scala, FanCmd.scala, FanAck.scala, Heat.scala, Interface_Interaction.scala, Air_Interaction.scala, Temperature.scala, SetPoint.scala, TempUnit.scala, FanCmd.scala, FanAck.scala, PhysicalTemp.scala, TempWstatus.scala, Temp.scala, On_Off.scala, Failure_Flag.scala, ValueStatus.scala, Status.scala, Regulator_Mode.scala, Monitor_Mode.scala, Base_Types.scala, GUMBO__Library.scala, GUMBO__Library.scala, GUMBO__Library.scala, GUMBO__Library.scala, TempSensor_tsp_ts_Containers.scala, TempControl_tcp_tc_Containers.scala, Fan_fp_f_Containers.scala, ObservationKind.scala, Container.scala, DataContent.scala, Aux_Types.scala

package slang

import org.sireum._

object MsgPack {

  object Constants {

    val TempControlMixedTemperature: Z = -32

    val TempControlMixedTemperature_Payload: Z = -31

    val TempControlMixedSetPoint: Z = -30

    val TempControlMixedSetPoint_Payload: Z = -29

    val TempControlMixedTempUnit_Payload: Z = -28

    val TempControlMixedFanCmd_Payload: Z = -27

    val TempControlMixedFanAck_Payload: Z = -26

    val TempControlMixedSeL4CAmKESTemperature: Z = -25

    val TempControlMixedSeL4CAmKESTemperature_Payload: Z = -24

    val TempControlMixedSeL4CAmKESSetPoint: Z = -23

    val TempControlMixedSeL4CAmKESSetPoint_Payload: Z = -22

    val TempControlMixedSeL4CAmKESTempUnit_Payload: Z = -21

    val TempControlMixedSeL4CAmKESFanCmd_Payload: Z = -20

    val TempControlMixedSeL4CAmKESFanAck_Payload: Z = -19

    val Isolette_EnvironmentHeat: Z = -18

    val Isolette_EnvironmentHeat_Payload: Z = -17

    val Isolette_EnvironmentInterface_Interaction: Z = -16

    val Isolette_EnvironmentInterface_Interaction_Payload: Z = -15

    val Isolette_EnvironmentAir_Interaction: Z = -14

    val Isolette_EnvironmentAir_Interaction_Payload: Z = -13

    val TempControlPeriodicTemperature: Z = -12

    val TempControlPeriodicTemperature_Payload: Z = -11

    val TempControlPeriodicSetPoint: Z = -10

    val TempControlPeriodicSetPoint_Payload: Z = -9

    val TempControlPeriodicTempUnit_Payload: Z = -8

    val TempControlPeriodicFanCmd_Payload: Z = -7

    val TempControlPeriodicFanAck_Payload: Z = -6

    val Isolette_Data_ModelPhysicalTemp: Z = -5

    val Isolette_Data_ModelPhysicalTemp_Payload: Z = -4

    val Isolette_Data_ModelTempWstatus: Z = -3

    val Isolette_Data_ModelTempWstatus_Payload: Z = -2

    val Isolette_Data_ModelTemp: Z = -1

    val Isolette_Data_ModelTemp_Payload: Z = 0

    val Isolette_Data_ModelOn_Off_Payload: Z = 1

    val Isolette_Data_ModelFailure_Flag: Z = 2

    val Isolette_Data_ModelFailure_Flag_Payload: Z = 3

    val Isolette_Data_ModelValueStatus_Payload: Z = 4

    val Isolette_Data_ModelStatus_Payload: Z = 5

    val Isolette_Data_ModelRegulator_Mode_Payload: Z = 6

    val Isolette_Data_ModelMonitor_Mode_Payload: Z = 7

    val Base_TypesBoolean_Payload: Z = 8

    val Base_TypesInteger_Payload: Z = 9

    val Base_TypesInteger_8_Payload: Z = 10

    val Base_TypesInteger_16_Payload: Z = 11

    val Base_TypesInteger_32_Payload: Z = 12

    val Base_TypesInteger_64_Payload: Z = 13

    val Base_TypesUnsigned_8_Payload: Z = 14

    val Base_TypesUnsigned_16_Payload: Z = 15

    val Base_TypesUnsigned_32_Payload: Z = 16

    val Base_TypesUnsigned_64_Payload: Z = 17

    val Base_TypesFloat_Payload: Z = 18

    val Base_TypesFloat_32_Payload: Z = 19

    val Base_TypesFloat_64_Payload: Z = 20

    val Base_TypesCharacter_Payload: Z = 21

    val Base_TypesString_Payload: Z = 22

    val Base_TypesBits_Payload: Z = 23

    val TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P: Z = 24

    val TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS: Z = 25

    val TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P: Z = 26

    val TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS: Z = 27

    val TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P: Z = 28

    val TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS: Z = 29

    val TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P: Z = 30

    val TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS: Z = 31

    val TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P: Z = 32

    val TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS: Z = 33

    val TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P: Z = 34

    val TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS: Z = 35

    val utilEmptyContainer: Z = 36

    val _artEmpty: Z = 37

  }

  object Writer {

    @record class Default(val writer: MessagePack.Writer.Impl) extends Writer

  }

  @msig trait Writer {

    def writer: MessagePack.Writer

    def writeTempControlMixedTemperature(o: TempControlMixed.Temperature): Unit = {
      writer.writeZ(Constants.TempControlMixedTemperature)
      writer.writeF32(o.degrees)
      writeTempControlMixedTempUnitType(o.unit)
    }

    def writeTempControlMixedTemperature_Payload(o: TempControlMixed.Temperature_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedTemperature_Payload)
      writeTempControlMixedTemperature(o.value)
    }

    def writeTempControlMixedSetPoint(o: TempControlMixed.SetPoint): Unit = {
      writer.writeZ(Constants.TempControlMixedSetPoint)
      writeTempControlMixedTemperature(o.low)
      writeTempControlMixedTemperature(o.high)
    }

    def writeTempControlMixedSetPoint_Payload(o: TempControlMixed.SetPoint_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedSetPoint_Payload)
      writeTempControlMixedSetPoint(o.value)
    }

    def writeTempControlMixedTempUnitType(o: TempControlMixed.TempUnit.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlMixedTempUnit_Payload(o: TempControlMixed.TempUnit_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedTempUnit_Payload)
      writeTempControlMixedTempUnitType(o.value)
    }

    def writeTempControlMixedFanCmdType(o: TempControlMixed.FanCmd.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlMixedFanCmd_Payload(o: TempControlMixed.FanCmd_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedFanCmd_Payload)
      writeTempControlMixedFanCmdType(o.value)
    }

    def writeTempControlMixedFanAckType(o: TempControlMixed.FanAck.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlMixedFanAck_Payload(o: TempControlMixed.FanAck_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedFanAck_Payload)
      writeTempControlMixedFanAckType(o.value)
    }

    def writeTempControlMixedSeL4CAmKESTemperature(o: TempControlMixedSeL4CAmKES.Temperature): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTemperature)
      writer.writeF32(o.degrees)
      writeTempControlMixedSeL4CAmKESTempUnitType(o.unit)
    }

    def writeTempControlMixedSeL4CAmKESTemperature_Payload(o: TempControlMixedSeL4CAmKES.Temperature_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTemperature_Payload)
      writeTempControlMixedSeL4CAmKESTemperature(o.value)
    }

    def writeTempControlMixedSeL4CAmKESSetPoint(o: TempControlMixedSeL4CAmKES.SetPoint): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESSetPoint)
      writeTempControlMixedSeL4CAmKESTemperature(o.low)
      writeTempControlMixedSeL4CAmKESTemperature(o.high)
    }

    def writeTempControlMixedSeL4CAmKESSetPoint_Payload(o: TempControlMixedSeL4CAmKES.SetPoint_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESSetPoint_Payload)
      writeTempControlMixedSeL4CAmKESSetPoint(o.value)
    }

    def writeTempControlMixedSeL4CAmKESTempUnitType(o: TempControlMixedSeL4CAmKES.TempUnit.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlMixedSeL4CAmKESTempUnit_Payload(o: TempControlMixedSeL4CAmKES.TempUnit_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempUnit_Payload)
      writeTempControlMixedSeL4CAmKESTempUnitType(o.value)
    }

    def writeTempControlMixedSeL4CAmKESFanCmdType(o: TempControlMixedSeL4CAmKES.FanCmd.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlMixedSeL4CAmKESFanCmd_Payload(o: TempControlMixedSeL4CAmKES.FanCmd_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESFanCmd_Payload)
      writeTempControlMixedSeL4CAmKESFanCmdType(o.value)
    }

    def writeTempControlMixedSeL4CAmKESFanAckType(o: TempControlMixedSeL4CAmKES.FanAck.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlMixedSeL4CAmKESFanAck_Payload(o: TempControlMixedSeL4CAmKES.FanAck_Payload): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESFanAck_Payload)
      writeTempControlMixedSeL4CAmKESFanAckType(o.value)
    }

    def writeIsolette_EnvironmentHeat(o: Isolette_Environment.Heat): Unit = {
      writer.writeZ(Constants.Isolette_EnvironmentHeat)
      writer.writeB(o.dummyField)
    }

    def writeIsolette_EnvironmentHeat_Payload(o: Isolette_Environment.Heat_Payload): Unit = {
      writer.writeZ(Constants.Isolette_EnvironmentHeat_Payload)
      writeIsolette_EnvironmentHeat(o.value)
    }

    def writeIsolette_EnvironmentInterface_Interaction(o: Isolette_Environment.Interface_Interaction): Unit = {
      writer.writeZ(Constants.Isolette_EnvironmentInterface_Interaction)
      writer.writeB(o.dummyField)
    }

    def writeIsolette_EnvironmentInterface_Interaction_Payload(o: Isolette_Environment.Interface_Interaction_Payload): Unit = {
      writer.writeZ(Constants.Isolette_EnvironmentInterface_Interaction_Payload)
      writeIsolette_EnvironmentInterface_Interaction(o.value)
    }

    def writeIsolette_EnvironmentAir_Interaction(o: Isolette_Environment.Air_Interaction): Unit = {
      writer.writeZ(Constants.Isolette_EnvironmentAir_Interaction)
      writer.writeB(o.dummyField)
    }

    def writeIsolette_EnvironmentAir_Interaction_Payload(o: Isolette_Environment.Air_Interaction_Payload): Unit = {
      writer.writeZ(Constants.Isolette_EnvironmentAir_Interaction_Payload)
      writeIsolette_EnvironmentAir_Interaction(o.value)
    }

    def writeTempControlPeriodicTemperature(o: TempControlPeriodic.Temperature): Unit = {
      writer.writeZ(Constants.TempControlPeriodicTemperature)
      writer.writeF32(o.degrees)
      writeTempControlPeriodicTempUnitType(o.unit)
    }

    def writeTempControlPeriodicTemperature_Payload(o: TempControlPeriodic.Temperature_Payload): Unit = {
      writer.writeZ(Constants.TempControlPeriodicTemperature_Payload)
      writeTempControlPeriodicTemperature(o.value)
    }

    def writeTempControlPeriodicSetPoint(o: TempControlPeriodic.SetPoint): Unit = {
      writer.writeZ(Constants.TempControlPeriodicSetPoint)
      writeTempControlPeriodicTemperature(o.low)
      writeTempControlPeriodicTemperature(o.high)
    }

    def writeTempControlPeriodicSetPoint_Payload(o: TempControlPeriodic.SetPoint_Payload): Unit = {
      writer.writeZ(Constants.TempControlPeriodicSetPoint_Payload)
      writeTempControlPeriodicSetPoint(o.value)
    }

    def writeTempControlPeriodicTempUnitType(o: TempControlPeriodic.TempUnit.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlPeriodicTempUnit_Payload(o: TempControlPeriodic.TempUnit_Payload): Unit = {
      writer.writeZ(Constants.TempControlPeriodicTempUnit_Payload)
      writeTempControlPeriodicTempUnitType(o.value)
    }

    def writeTempControlPeriodicFanCmdType(o: TempControlPeriodic.FanCmd.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlPeriodicFanCmd_Payload(o: TempControlPeriodic.FanCmd_Payload): Unit = {
      writer.writeZ(Constants.TempControlPeriodicFanCmd_Payload)
      writeTempControlPeriodicFanCmdType(o.value)
    }

    def writeTempControlPeriodicFanAckType(o: TempControlPeriodic.FanAck.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeTempControlPeriodicFanAck_Payload(o: TempControlPeriodic.FanAck_Payload): Unit = {
      writer.writeZ(Constants.TempControlPeriodicFanAck_Payload)
      writeTempControlPeriodicFanAckType(o.value)
    }

    def writeIsolette_Data_ModelPhysicalTemp(o: Isolette_Data_Model.PhysicalTemp): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelPhysicalTemp)
      writer.writeF32(o.degrees)
    }

    def writeIsolette_Data_ModelPhysicalTemp_Payload(o: Isolette_Data_Model.PhysicalTemp_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelPhysicalTemp_Payload)
      writeIsolette_Data_ModelPhysicalTemp(o.value)
    }

    def writeIsolette_Data_ModelTempWstatus(o: Isolette_Data_Model.TempWstatus): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelTempWstatus)
      writer.writeF32(o.degrees)
      writeIsolette_Data_ModelValueStatusType(o.status)
    }

    def writeIsolette_Data_ModelTempWstatus_Payload(o: Isolette_Data_Model.TempWstatus_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelTempWstatus_Payload)
      writeIsolette_Data_ModelTempWstatus(o.value)
    }

    def writeIsolette_Data_ModelTemp(o: Isolette_Data_Model.Temp): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelTemp)
      writer.writeF32(o.degrees)
    }

    def writeIsolette_Data_ModelTemp_Payload(o: Isolette_Data_Model.Temp_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelTemp_Payload)
      writeIsolette_Data_ModelTemp(o.value)
    }

    def writeIsolette_Data_ModelOn_OffType(o: Isolette_Data_Model.On_Off.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeIsolette_Data_ModelOn_Off_Payload(o: Isolette_Data_Model.On_Off_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelOn_Off_Payload)
      writeIsolette_Data_ModelOn_OffType(o.value)
    }

    def writeIsolette_Data_ModelFailure_Flag(o: Isolette_Data_Model.Failure_Flag): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelFailure_Flag)
      writer.writeB(o.flag)
    }

    def writeIsolette_Data_ModelFailure_Flag_Payload(o: Isolette_Data_Model.Failure_Flag_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelFailure_Flag_Payload)
      writeIsolette_Data_ModelFailure_Flag(o.value)
    }

    def writeIsolette_Data_ModelValueStatusType(o: Isolette_Data_Model.ValueStatus.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeIsolette_Data_ModelValueStatus_Payload(o: Isolette_Data_Model.ValueStatus_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelValueStatus_Payload)
      writeIsolette_Data_ModelValueStatusType(o.value)
    }

    def writeIsolette_Data_ModelStatusType(o: Isolette_Data_Model.Status.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeIsolette_Data_ModelStatus_Payload(o: Isolette_Data_Model.Status_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelStatus_Payload)
      writeIsolette_Data_ModelStatusType(o.value)
    }

    def writeIsolette_Data_ModelRegulator_ModeType(o: Isolette_Data_Model.Regulator_Mode.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeIsolette_Data_ModelRegulator_Mode_Payload(o: Isolette_Data_Model.Regulator_Mode_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelRegulator_Mode_Payload)
      writeIsolette_Data_ModelRegulator_ModeType(o.value)
    }

    def writeIsolette_Data_ModelMonitor_ModeType(o: Isolette_Data_Model.Monitor_Mode.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeIsolette_Data_ModelMonitor_Mode_Payload(o: Isolette_Data_Model.Monitor_Mode_Payload): Unit = {
      writer.writeZ(Constants.Isolette_Data_ModelMonitor_Mode_Payload)
      writeIsolette_Data_ModelMonitor_ModeType(o.value)
    }

    def writeBase_TypesBoolean_Payload(o: Base_Types.Boolean_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesBoolean_Payload)
      writer.writeB(o.value)
    }

    def writeBase_TypesInteger_Payload(o: Base_Types.Integer_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_Payload)
      writer.writeZ(o.value)
    }

    def writeBase_TypesInteger_8_Payload(o: Base_Types.Integer_8_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_8_Payload)
      writer.writeS8(o.value)
    }

    def writeBase_TypesInteger_16_Payload(o: Base_Types.Integer_16_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_16_Payload)
      writer.writeS16(o.value)
    }

    def writeBase_TypesInteger_32_Payload(o: Base_Types.Integer_32_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_32_Payload)
      writer.writeS32(o.value)
    }

    def writeBase_TypesInteger_64_Payload(o: Base_Types.Integer_64_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesInteger_64_Payload)
      writer.writeS64(o.value)
    }

    def writeBase_TypesUnsigned_8_Payload(o: Base_Types.Unsigned_8_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesUnsigned_8_Payload)
      writer.writeU8(o.value)
    }

    def writeBase_TypesUnsigned_16_Payload(o: Base_Types.Unsigned_16_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesUnsigned_16_Payload)
      writer.writeU16(o.value)
    }

    def writeBase_TypesUnsigned_32_Payload(o: Base_Types.Unsigned_32_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesUnsigned_32_Payload)
      writer.writeU32(o.value)
    }

    def writeBase_TypesUnsigned_64_Payload(o: Base_Types.Unsigned_64_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesUnsigned_64_Payload)
      writer.writeU64(o.value)
    }

    def writeBase_TypesFloat_Payload(o: Base_Types.Float_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesFloat_Payload)
      writer.writeR(o.value)
    }

    def writeBase_TypesFloat_32_Payload(o: Base_Types.Float_32_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesFloat_32_Payload)
      writer.writeF32(o.value)
    }

    def writeBase_TypesFloat_64_Payload(o: Base_Types.Float_64_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesFloat_64_Payload)
      writer.writeF64(o.value)
    }

    def writeBase_TypesCharacter_Payload(o: Base_Types.Character_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesCharacter_Payload)
      writer.writeC(o.value)
    }

    def writeBase_TypesString_Payload(o: Base_Types.String_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesString_Payload)
      writer.writeString(o.value)
    }

    def writeBase_TypesBits_Payload(o: Base_Types.Bits_Payload): Unit = {
      writer.writeZ(Constants.Base_TypesBits_Payload)
      writer.writeISZ(o.value, writer.writeB _)
    }

    def writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container): Unit = {
      o match {
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o)
      }
    }

    def writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P)
    }

    def writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS)
    }

    def writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container): Unit = {
      o match {
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o)
      }
    }

    def writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P)
      writer.writeOption(o.api_tempChanged, write_artEmpty _)
      writeTempControlMixedSeL4CAmKESTemperature(o.api_currentTemp)
    }

    def writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS)
      writer.writeOption(o.api_tempChanged, write_artEmpty _)
      writeTempControlMixedSeL4CAmKESTemperature(o.api_currentTemp)
    }

    def writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container): Unit = {
      o match {
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o)
      }
    }

    def writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P)
      writer.writeOption(o.api_tempChanged, write_artEmpty _)
      writer.writeOption(o.api_fanAck, writeTempControlMixedSeL4CAmKESFanAckType _)
      writer.writeOption(o.api_setPoint, writeTempControlMixedSeL4CAmKESSetPoint _)
      writeTempControlMixedSeL4CAmKESTemperature(o.api_currentTemp)
    }

    def writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS)
      writeTempControlMixedSeL4CAmKESFanCmdType(o.In_currentFanState)
      writeTempControlMixedSeL4CAmKESSetPoint(o.In_currentSetPoint)
      writeTempControlMixedSeL4CAmKESTemperature(o.In_latestTemp)
      writer.writeOption(o.api_tempChanged, write_artEmpty _)
      writer.writeOption(o.api_fanAck, writeTempControlMixedSeL4CAmKESFanAckType _)
      writer.writeOption(o.api_setPoint, writeTempControlMixedSeL4CAmKESSetPoint _)
      writeTempControlMixedSeL4CAmKESTemperature(o.api_currentTemp)
    }

    def writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container): Unit = {
      o match {
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o)
      }
    }

    def writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P)
      writer.writeOption(o.api_fanCmd, writeTempControlMixedSeL4CAmKESFanCmdType _)
    }

    def writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS)
      writeTempControlMixedSeL4CAmKESFanCmdType(o.currentFanState)
      writeTempControlMixedSeL4CAmKESSetPoint(o.currentSetPoint)
      writeTempControlMixedSeL4CAmKESTemperature(o.latestTemp)
      writer.writeOption(o.api_fanCmd, writeTempControlMixedSeL4CAmKESFanCmdType _)
    }

    def writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container): Unit = {
      o match {
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P => writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS => writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o)
      }
    }

    def writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P)
      writer.writeOption(o.api_fanCmd, writeTempControlMixedSeL4CAmKESFanCmdType _)
    }

    def writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS)
      writer.writeOption(o.api_fanCmd, writeTempControlMixedSeL4CAmKESFanCmdType _)
    }

    def writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container): Unit = {
      o match {
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P => writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS => writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o)
      }
    }

    def writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P)
      writer.writeOption(o.api_fanAck, writeTempControlMixedSeL4CAmKESFanAckType _)
    }

    def writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS): Unit = {
      writer.writeZ(Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS)
      writer.writeOption(o.api_fanAck, writeTempControlMixedSeL4CAmKESFanAckType _)
    }

    def writeruntimemonitorObservationKindType(o: runtimemonitor.ObservationKind.Type): Unit = {
      writer.writeZ(o.ordinal)
    }

    def writeutilContainer(o: util.Container): Unit = {
      o match {
        case o: util.EmptyContainer => writeutilEmptyContainer(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P => writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS => writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P => writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS => writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o)
      }
    }

    def writeutilEmptyContainer(o: util.EmptyContainer): Unit = {
      writer.writeZ(Constants.utilEmptyContainer)
    }

    def write_artDataContent(o: art.DataContent): Unit = {
      o match {
        case o: art.Empty => write_artEmpty(o)
        case o: Base_Types.Boolean_Payload => writeBase_TypesBoolean_Payload(o)
        case o: Base_Types.Integer_Payload => writeBase_TypesInteger_Payload(o)
        case o: Base_Types.Integer_8_Payload => writeBase_TypesInteger_8_Payload(o)
        case o: Base_Types.Integer_16_Payload => writeBase_TypesInteger_16_Payload(o)
        case o: Base_Types.Integer_32_Payload => writeBase_TypesInteger_32_Payload(o)
        case o: Base_Types.Integer_64_Payload => writeBase_TypesInteger_64_Payload(o)
        case o: Base_Types.Unsigned_8_Payload => writeBase_TypesUnsigned_8_Payload(o)
        case o: Base_Types.Unsigned_16_Payload => writeBase_TypesUnsigned_16_Payload(o)
        case o: Base_Types.Unsigned_32_Payload => writeBase_TypesUnsigned_32_Payload(o)
        case o: Base_Types.Unsigned_64_Payload => writeBase_TypesUnsigned_64_Payload(o)
        case o: Base_Types.Float_Payload => writeBase_TypesFloat_Payload(o)
        case o: Base_Types.Float_32_Payload => writeBase_TypesFloat_32_Payload(o)
        case o: Base_Types.Float_64_Payload => writeBase_TypesFloat_64_Payload(o)
        case o: Base_Types.Character_Payload => writeBase_TypesCharacter_Payload(o)
        case o: Base_Types.String_Payload => writeBase_TypesString_Payload(o)
        case o: Base_Types.Bits_Payload => writeBase_TypesBits_Payload(o)
        case o: util.EmptyContainer => writeutilEmptyContainer(o)
        case o: TempControlMixed.FanCmd_Payload => writeTempControlMixedFanCmd_Payload(o)
        case o: TempControlMixed.FanAck_Payload => writeTempControlMixedFanAck_Payload(o)
        case o: Isolette_Data_Model.Temp_Payload => writeIsolette_Data_ModelTemp_Payload(o)
        case o: TempControlMixed.TempUnit_Payload => writeTempControlMixedTempUnit_Payload(o)
        case o: Isolette_Environment.Heat_Payload => writeIsolette_EnvironmentHeat_Payload(o)
        case o: TempControlMixed.SetPoint_Payload => writeTempControlMixedSetPoint_Payload(o)
        case o: TempControlPeriodic.FanCmd_Payload => writeTempControlPeriodicFanCmd_Payload(o)
        case o: Isolette_Data_Model.On_Off_Payload => writeIsolette_Data_ModelOn_Off_Payload(o)
        case o: TempControlPeriodic.FanAck_Payload => writeTempControlPeriodicFanAck_Payload(o)
        case o: Isolette_Data_Model.Status_Payload => writeIsolette_Data_ModelStatus_Payload(o)
        case o: TempControlPeriodic.TempUnit_Payload => writeTempControlPeriodicTempUnit_Payload(o)
        case o: TempControlMixed.Temperature_Payload => writeTempControlMixedTemperature_Payload(o)
        case o: TempControlPeriodic.SetPoint_Payload => writeTempControlPeriodicSetPoint_Payload(o)
        case o: Isolette_Data_Model.ValueStatus_Payload => writeIsolette_Data_ModelValueStatus_Payload(o)
        case o: Isolette_Data_Model.TempWstatus_Payload => writeIsolette_Data_ModelTempWstatus_Payload(o)
        case o: TempControlPeriodic.Temperature_Payload => writeTempControlPeriodicTemperature_Payload(o)
        case o: Isolette_Data_Model.Monitor_Mode_Payload => writeIsolette_Data_ModelMonitor_Mode_Payload(o)
        case o: Isolette_Data_Model.Failure_Flag_Payload => writeIsolette_Data_ModelFailure_Flag_Payload(o)
        case o: Isolette_Data_Model.PhysicalTemp_Payload => writeIsolette_Data_ModelPhysicalTemp_Payload(o)
        case o: TempControlMixedSeL4CAmKES.FanCmd_Payload => writeTempControlMixedSeL4CAmKESFanCmd_Payload(o)
        case o: TempControlMixedSeL4CAmKES.FanAck_Payload => writeTempControlMixedSeL4CAmKESFanAck_Payload(o)
        case o: Isolette_Data_Model.Regulator_Mode_Payload => writeIsolette_Data_ModelRegulator_Mode_Payload(o)
        case o: TempControlMixedSeL4CAmKES.TempUnit_Payload => writeTempControlMixedSeL4CAmKESTempUnit_Payload(o)
        case o: TempControlMixedSeL4CAmKES.SetPoint_Payload => writeTempControlMixedSeL4CAmKESSetPoint_Payload(o)
        case o: Isolette_Environment.Air_Interaction_Payload => writeIsolette_EnvironmentAir_Interaction_Payload(o)
        case o: TempControlMixedSeL4CAmKES.Temperature_Payload => writeTempControlMixedSeL4CAmKESTemperature_Payload(o)
        case o: Isolette_Environment.Interface_Interaction_Payload => writeIsolette_EnvironmentInterface_Interaction_Payload(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P => writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS => writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P => writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS => writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS => writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS => writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o)
      }
    }

    def write_artEmpty(o: art.Empty): Unit = {
      writer.writeZ(Constants._artEmpty)
    }

    def result: ISZ[U8] = {
      return writer.result
    }

  }

  object Reader {

    @record class Default(val reader: MessagePack.Reader.Impl) extends Reader {
      def errorOpt: Option[MessagePack.ErrorMsg] = {
        return reader.errorOpt
      }
    }

  }

  @msig trait Reader {

    def reader: MessagePack.Reader

    def readTempControlMixedTemperature(): TempControlMixed.Temperature = {
      val r = readTempControlMixedTemperatureT(F)
      return r
    }

    def readTempControlMixedTemperatureT(typeParsed: B): TempControlMixed.Temperature = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedTemperature)
      }
      val degrees = reader.readF32()
      val unit = readTempControlMixedTempUnitType()
      return TempControlMixed.Temperature(degrees, unit)
    }

    def readTempControlMixedTemperature_Payload(): TempControlMixed.Temperature_Payload = {
      val r = readTempControlMixedTemperature_PayloadT(F)
      return r
    }

    def readTempControlMixedTemperature_PayloadT(typeParsed: B): TempControlMixed.Temperature_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedTemperature_Payload)
      }
      val value = readTempControlMixedTemperature()
      return TempControlMixed.Temperature_Payload(value)
    }

    def readTempControlMixedSetPoint(): TempControlMixed.SetPoint = {
      val r = readTempControlMixedSetPointT(F)
      return r
    }

    def readTempControlMixedSetPointT(typeParsed: B): TempControlMixed.SetPoint = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSetPoint)
      }
      val low = readTempControlMixedTemperature()
      val high = readTempControlMixedTemperature()
      return TempControlMixed.SetPoint(low, high)
    }

    def readTempControlMixedSetPoint_Payload(): TempControlMixed.SetPoint_Payload = {
      val r = readTempControlMixedSetPoint_PayloadT(F)
      return r
    }

    def readTempControlMixedSetPoint_PayloadT(typeParsed: B): TempControlMixed.SetPoint_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSetPoint_Payload)
      }
      val value = readTempControlMixedSetPoint()
      return TempControlMixed.SetPoint_Payload(value)
    }

    def readTempControlMixedTempUnitType(): TempControlMixed.TempUnit.Type = {
      val r = reader.readZ()
      return TempControlMixed.TempUnit.byOrdinal(r).get
    }

    def readTempControlMixedTempUnit_Payload(): TempControlMixed.TempUnit_Payload = {
      val r = readTempControlMixedTempUnit_PayloadT(F)
      return r
    }

    def readTempControlMixedTempUnit_PayloadT(typeParsed: B): TempControlMixed.TempUnit_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedTempUnit_Payload)
      }
      val value = readTempControlMixedTempUnitType()
      return TempControlMixed.TempUnit_Payload(value)
    }

    def readTempControlMixedFanCmdType(): TempControlMixed.FanCmd.Type = {
      val r = reader.readZ()
      return TempControlMixed.FanCmd.byOrdinal(r).get
    }

    def readTempControlMixedFanCmd_Payload(): TempControlMixed.FanCmd_Payload = {
      val r = readTempControlMixedFanCmd_PayloadT(F)
      return r
    }

    def readTempControlMixedFanCmd_PayloadT(typeParsed: B): TempControlMixed.FanCmd_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedFanCmd_Payload)
      }
      val value = readTempControlMixedFanCmdType()
      return TempControlMixed.FanCmd_Payload(value)
    }

    def readTempControlMixedFanAckType(): TempControlMixed.FanAck.Type = {
      val r = reader.readZ()
      return TempControlMixed.FanAck.byOrdinal(r).get
    }

    def readTempControlMixedFanAck_Payload(): TempControlMixed.FanAck_Payload = {
      val r = readTempControlMixedFanAck_PayloadT(F)
      return r
    }

    def readTempControlMixedFanAck_PayloadT(typeParsed: B): TempControlMixed.FanAck_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedFanAck_Payload)
      }
      val value = readTempControlMixedFanAckType()
      return TempControlMixed.FanAck_Payload(value)
    }

    def readTempControlMixedSeL4CAmKESTemperature(): TempControlMixedSeL4CAmKES.Temperature = {
      val r = readTempControlMixedSeL4CAmKESTemperatureT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTemperatureT(typeParsed: B): TempControlMixedSeL4CAmKES.Temperature = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTemperature)
      }
      val degrees = reader.readF32()
      val unit = readTempControlMixedSeL4CAmKESTempUnitType()
      return TempControlMixedSeL4CAmKES.Temperature(degrees, unit)
    }

    def readTempControlMixedSeL4CAmKESTemperature_Payload(): TempControlMixedSeL4CAmKES.Temperature_Payload = {
      val r = readTempControlMixedSeL4CAmKESTemperature_PayloadT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTemperature_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.Temperature_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTemperature_Payload)
      }
      val value = readTempControlMixedSeL4CAmKESTemperature()
      return TempControlMixedSeL4CAmKES.Temperature_Payload(value)
    }

    def readTempControlMixedSeL4CAmKESSetPoint(): TempControlMixedSeL4CAmKES.SetPoint = {
      val r = readTempControlMixedSeL4CAmKESSetPointT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESSetPointT(typeParsed: B): TempControlMixedSeL4CAmKES.SetPoint = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESSetPoint)
      }
      val low = readTempControlMixedSeL4CAmKESTemperature()
      val high = readTempControlMixedSeL4CAmKESTemperature()
      return TempControlMixedSeL4CAmKES.SetPoint(low, high)
    }

    def readTempControlMixedSeL4CAmKESSetPoint_Payload(): TempControlMixedSeL4CAmKES.SetPoint_Payload = {
      val r = readTempControlMixedSeL4CAmKESSetPoint_PayloadT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESSetPoint_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.SetPoint_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESSetPoint_Payload)
      }
      val value = readTempControlMixedSeL4CAmKESSetPoint()
      return TempControlMixedSeL4CAmKES.SetPoint_Payload(value)
    }

    def readTempControlMixedSeL4CAmKESTempUnitType(): TempControlMixedSeL4CAmKES.TempUnit.Type = {
      val r = reader.readZ()
      return TempControlMixedSeL4CAmKES.TempUnit.byOrdinal(r).get
    }

    def readTempControlMixedSeL4CAmKESTempUnit_Payload(): TempControlMixedSeL4CAmKES.TempUnit_Payload = {
      val r = readTempControlMixedSeL4CAmKESTempUnit_PayloadT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempUnit_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.TempUnit_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempUnit_Payload)
      }
      val value = readTempControlMixedSeL4CAmKESTempUnitType()
      return TempControlMixedSeL4CAmKES.TempUnit_Payload(value)
    }

    def readTempControlMixedSeL4CAmKESFanCmdType(): TempControlMixedSeL4CAmKES.FanCmd.Type = {
      val r = reader.readZ()
      return TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(r).get
    }

    def readTempControlMixedSeL4CAmKESFanCmd_Payload(): TempControlMixedSeL4CAmKES.FanCmd_Payload = {
      val r = readTempControlMixedSeL4CAmKESFanCmd_PayloadT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESFanCmd_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.FanCmd_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESFanCmd_Payload)
      }
      val value = readTempControlMixedSeL4CAmKESFanCmdType()
      return TempControlMixedSeL4CAmKES.FanCmd_Payload(value)
    }

    def readTempControlMixedSeL4CAmKESFanAckType(): TempControlMixedSeL4CAmKES.FanAck.Type = {
      val r = reader.readZ()
      return TempControlMixedSeL4CAmKES.FanAck.byOrdinal(r).get
    }

    def readTempControlMixedSeL4CAmKESFanAck_Payload(): TempControlMixedSeL4CAmKES.FanAck_Payload = {
      val r = readTempControlMixedSeL4CAmKESFanAck_PayloadT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESFanAck_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.FanAck_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESFanAck_Payload)
      }
      val value = readTempControlMixedSeL4CAmKESFanAckType()
      return TempControlMixedSeL4CAmKES.FanAck_Payload(value)
    }

    def readIsolette_EnvironmentHeat(): Isolette_Environment.Heat = {
      val r = readIsolette_EnvironmentHeatT(F)
      return r
    }

    def readIsolette_EnvironmentHeatT(typeParsed: B): Isolette_Environment.Heat = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_EnvironmentHeat)
      }
      val dummyField = reader.readB()
      return Isolette_Environment.Heat(dummyField)
    }

    def readIsolette_EnvironmentHeat_Payload(): Isolette_Environment.Heat_Payload = {
      val r = readIsolette_EnvironmentHeat_PayloadT(F)
      return r
    }

    def readIsolette_EnvironmentHeat_PayloadT(typeParsed: B): Isolette_Environment.Heat_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_EnvironmentHeat_Payload)
      }
      val value = readIsolette_EnvironmentHeat()
      return Isolette_Environment.Heat_Payload(value)
    }

    def readIsolette_EnvironmentInterface_Interaction(): Isolette_Environment.Interface_Interaction = {
      val r = readIsolette_EnvironmentInterface_InteractionT(F)
      return r
    }

    def readIsolette_EnvironmentInterface_InteractionT(typeParsed: B): Isolette_Environment.Interface_Interaction = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_EnvironmentInterface_Interaction)
      }
      val dummyField = reader.readB()
      return Isolette_Environment.Interface_Interaction(dummyField)
    }

    def readIsolette_EnvironmentInterface_Interaction_Payload(): Isolette_Environment.Interface_Interaction_Payload = {
      val r = readIsolette_EnvironmentInterface_Interaction_PayloadT(F)
      return r
    }

    def readIsolette_EnvironmentInterface_Interaction_PayloadT(typeParsed: B): Isolette_Environment.Interface_Interaction_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_EnvironmentInterface_Interaction_Payload)
      }
      val value = readIsolette_EnvironmentInterface_Interaction()
      return Isolette_Environment.Interface_Interaction_Payload(value)
    }

    def readIsolette_EnvironmentAir_Interaction(): Isolette_Environment.Air_Interaction = {
      val r = readIsolette_EnvironmentAir_InteractionT(F)
      return r
    }

    def readIsolette_EnvironmentAir_InteractionT(typeParsed: B): Isolette_Environment.Air_Interaction = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_EnvironmentAir_Interaction)
      }
      val dummyField = reader.readB()
      return Isolette_Environment.Air_Interaction(dummyField)
    }

    def readIsolette_EnvironmentAir_Interaction_Payload(): Isolette_Environment.Air_Interaction_Payload = {
      val r = readIsolette_EnvironmentAir_Interaction_PayloadT(F)
      return r
    }

    def readIsolette_EnvironmentAir_Interaction_PayloadT(typeParsed: B): Isolette_Environment.Air_Interaction_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_EnvironmentAir_Interaction_Payload)
      }
      val value = readIsolette_EnvironmentAir_Interaction()
      return Isolette_Environment.Air_Interaction_Payload(value)
    }

    def readTempControlPeriodicTemperature(): TempControlPeriodic.Temperature = {
      val r = readTempControlPeriodicTemperatureT(F)
      return r
    }

    def readTempControlPeriodicTemperatureT(typeParsed: B): TempControlPeriodic.Temperature = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlPeriodicTemperature)
      }
      val degrees = reader.readF32()
      val unit = readTempControlPeriodicTempUnitType()
      return TempControlPeriodic.Temperature(degrees, unit)
    }

    def readTempControlPeriodicTemperature_Payload(): TempControlPeriodic.Temperature_Payload = {
      val r = readTempControlPeriodicTemperature_PayloadT(F)
      return r
    }

    def readTempControlPeriodicTemperature_PayloadT(typeParsed: B): TempControlPeriodic.Temperature_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlPeriodicTemperature_Payload)
      }
      val value = readTempControlPeriodicTemperature()
      return TempControlPeriodic.Temperature_Payload(value)
    }

    def readTempControlPeriodicSetPoint(): TempControlPeriodic.SetPoint = {
      val r = readTempControlPeriodicSetPointT(F)
      return r
    }

    def readTempControlPeriodicSetPointT(typeParsed: B): TempControlPeriodic.SetPoint = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlPeriodicSetPoint)
      }
      val low = readTempControlPeriodicTemperature()
      val high = readTempControlPeriodicTemperature()
      return TempControlPeriodic.SetPoint(low, high)
    }

    def readTempControlPeriodicSetPoint_Payload(): TempControlPeriodic.SetPoint_Payload = {
      val r = readTempControlPeriodicSetPoint_PayloadT(F)
      return r
    }

    def readTempControlPeriodicSetPoint_PayloadT(typeParsed: B): TempControlPeriodic.SetPoint_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlPeriodicSetPoint_Payload)
      }
      val value = readTempControlPeriodicSetPoint()
      return TempControlPeriodic.SetPoint_Payload(value)
    }

    def readTempControlPeriodicTempUnitType(): TempControlPeriodic.TempUnit.Type = {
      val r = reader.readZ()
      return TempControlPeriodic.TempUnit.byOrdinal(r).get
    }

    def readTempControlPeriodicTempUnit_Payload(): TempControlPeriodic.TempUnit_Payload = {
      val r = readTempControlPeriodicTempUnit_PayloadT(F)
      return r
    }

    def readTempControlPeriodicTempUnit_PayloadT(typeParsed: B): TempControlPeriodic.TempUnit_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlPeriodicTempUnit_Payload)
      }
      val value = readTempControlPeriodicTempUnitType()
      return TempControlPeriodic.TempUnit_Payload(value)
    }

    def readTempControlPeriodicFanCmdType(): TempControlPeriodic.FanCmd.Type = {
      val r = reader.readZ()
      return TempControlPeriodic.FanCmd.byOrdinal(r).get
    }

    def readTempControlPeriodicFanCmd_Payload(): TempControlPeriodic.FanCmd_Payload = {
      val r = readTempControlPeriodicFanCmd_PayloadT(F)
      return r
    }

    def readTempControlPeriodicFanCmd_PayloadT(typeParsed: B): TempControlPeriodic.FanCmd_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlPeriodicFanCmd_Payload)
      }
      val value = readTempControlPeriodicFanCmdType()
      return TempControlPeriodic.FanCmd_Payload(value)
    }

    def readTempControlPeriodicFanAckType(): TempControlPeriodic.FanAck.Type = {
      val r = reader.readZ()
      return TempControlPeriodic.FanAck.byOrdinal(r).get
    }

    def readTempControlPeriodicFanAck_Payload(): TempControlPeriodic.FanAck_Payload = {
      val r = readTempControlPeriodicFanAck_PayloadT(F)
      return r
    }

    def readTempControlPeriodicFanAck_PayloadT(typeParsed: B): TempControlPeriodic.FanAck_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlPeriodicFanAck_Payload)
      }
      val value = readTempControlPeriodicFanAckType()
      return TempControlPeriodic.FanAck_Payload(value)
    }

    def readIsolette_Data_ModelPhysicalTemp(): Isolette_Data_Model.PhysicalTemp = {
      val r = readIsolette_Data_ModelPhysicalTempT(F)
      return r
    }

    def readIsolette_Data_ModelPhysicalTempT(typeParsed: B): Isolette_Data_Model.PhysicalTemp = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelPhysicalTemp)
      }
      val degrees = reader.readF32()
      return Isolette_Data_Model.PhysicalTemp(degrees)
    }

    def readIsolette_Data_ModelPhysicalTemp_Payload(): Isolette_Data_Model.PhysicalTemp_Payload = {
      val r = readIsolette_Data_ModelPhysicalTemp_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelPhysicalTemp_PayloadT(typeParsed: B): Isolette_Data_Model.PhysicalTemp_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelPhysicalTemp_Payload)
      }
      val value = readIsolette_Data_ModelPhysicalTemp()
      return Isolette_Data_Model.PhysicalTemp_Payload(value)
    }

    def readIsolette_Data_ModelTempWstatus(): Isolette_Data_Model.TempWstatus = {
      val r = readIsolette_Data_ModelTempWstatusT(F)
      return r
    }

    def readIsolette_Data_ModelTempWstatusT(typeParsed: B): Isolette_Data_Model.TempWstatus = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelTempWstatus)
      }
      val degrees = reader.readF32()
      val status = readIsolette_Data_ModelValueStatusType()
      return Isolette_Data_Model.TempWstatus(degrees, status)
    }

    def readIsolette_Data_ModelTempWstatus_Payload(): Isolette_Data_Model.TempWstatus_Payload = {
      val r = readIsolette_Data_ModelTempWstatus_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelTempWstatus_PayloadT(typeParsed: B): Isolette_Data_Model.TempWstatus_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelTempWstatus_Payload)
      }
      val value = readIsolette_Data_ModelTempWstatus()
      return Isolette_Data_Model.TempWstatus_Payload(value)
    }

    def readIsolette_Data_ModelTemp(): Isolette_Data_Model.Temp = {
      val r = readIsolette_Data_ModelTempT(F)
      return r
    }

    def readIsolette_Data_ModelTempT(typeParsed: B): Isolette_Data_Model.Temp = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelTemp)
      }
      val degrees = reader.readF32()
      return Isolette_Data_Model.Temp(degrees)
    }

    def readIsolette_Data_ModelTemp_Payload(): Isolette_Data_Model.Temp_Payload = {
      val r = readIsolette_Data_ModelTemp_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelTemp_PayloadT(typeParsed: B): Isolette_Data_Model.Temp_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelTemp_Payload)
      }
      val value = readIsolette_Data_ModelTemp()
      return Isolette_Data_Model.Temp_Payload(value)
    }

    def readIsolette_Data_ModelOn_OffType(): Isolette_Data_Model.On_Off.Type = {
      val r = reader.readZ()
      return Isolette_Data_Model.On_Off.byOrdinal(r).get
    }

    def readIsolette_Data_ModelOn_Off_Payload(): Isolette_Data_Model.On_Off_Payload = {
      val r = readIsolette_Data_ModelOn_Off_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelOn_Off_PayloadT(typeParsed: B): Isolette_Data_Model.On_Off_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelOn_Off_Payload)
      }
      val value = readIsolette_Data_ModelOn_OffType()
      return Isolette_Data_Model.On_Off_Payload(value)
    }

    def readIsolette_Data_ModelFailure_Flag(): Isolette_Data_Model.Failure_Flag = {
      val r = readIsolette_Data_ModelFailure_FlagT(F)
      return r
    }

    def readIsolette_Data_ModelFailure_FlagT(typeParsed: B): Isolette_Data_Model.Failure_Flag = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelFailure_Flag)
      }
      val flag = reader.readB()
      return Isolette_Data_Model.Failure_Flag(flag)
    }

    def readIsolette_Data_ModelFailure_Flag_Payload(): Isolette_Data_Model.Failure_Flag_Payload = {
      val r = readIsolette_Data_ModelFailure_Flag_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelFailure_Flag_PayloadT(typeParsed: B): Isolette_Data_Model.Failure_Flag_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelFailure_Flag_Payload)
      }
      val value = readIsolette_Data_ModelFailure_Flag()
      return Isolette_Data_Model.Failure_Flag_Payload(value)
    }

    def readIsolette_Data_ModelValueStatusType(): Isolette_Data_Model.ValueStatus.Type = {
      val r = reader.readZ()
      return Isolette_Data_Model.ValueStatus.byOrdinal(r).get
    }

    def readIsolette_Data_ModelValueStatus_Payload(): Isolette_Data_Model.ValueStatus_Payload = {
      val r = readIsolette_Data_ModelValueStatus_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelValueStatus_PayloadT(typeParsed: B): Isolette_Data_Model.ValueStatus_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelValueStatus_Payload)
      }
      val value = readIsolette_Data_ModelValueStatusType()
      return Isolette_Data_Model.ValueStatus_Payload(value)
    }

    def readIsolette_Data_ModelStatusType(): Isolette_Data_Model.Status.Type = {
      val r = reader.readZ()
      return Isolette_Data_Model.Status.byOrdinal(r).get
    }

    def readIsolette_Data_ModelStatus_Payload(): Isolette_Data_Model.Status_Payload = {
      val r = readIsolette_Data_ModelStatus_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelStatus_PayloadT(typeParsed: B): Isolette_Data_Model.Status_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelStatus_Payload)
      }
      val value = readIsolette_Data_ModelStatusType()
      return Isolette_Data_Model.Status_Payload(value)
    }

    def readIsolette_Data_ModelRegulator_ModeType(): Isolette_Data_Model.Regulator_Mode.Type = {
      val r = reader.readZ()
      return Isolette_Data_Model.Regulator_Mode.byOrdinal(r).get
    }

    def readIsolette_Data_ModelRegulator_Mode_Payload(): Isolette_Data_Model.Regulator_Mode_Payload = {
      val r = readIsolette_Data_ModelRegulator_Mode_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelRegulator_Mode_PayloadT(typeParsed: B): Isolette_Data_Model.Regulator_Mode_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelRegulator_Mode_Payload)
      }
      val value = readIsolette_Data_ModelRegulator_ModeType()
      return Isolette_Data_Model.Regulator_Mode_Payload(value)
    }

    def readIsolette_Data_ModelMonitor_ModeType(): Isolette_Data_Model.Monitor_Mode.Type = {
      val r = reader.readZ()
      return Isolette_Data_Model.Monitor_Mode.byOrdinal(r).get
    }

    def readIsolette_Data_ModelMonitor_Mode_Payload(): Isolette_Data_Model.Monitor_Mode_Payload = {
      val r = readIsolette_Data_ModelMonitor_Mode_PayloadT(F)
      return r
    }

    def readIsolette_Data_ModelMonitor_Mode_PayloadT(typeParsed: B): Isolette_Data_Model.Monitor_Mode_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Isolette_Data_ModelMonitor_Mode_Payload)
      }
      val value = readIsolette_Data_ModelMonitor_ModeType()
      return Isolette_Data_Model.Monitor_Mode_Payload(value)
    }

    def readBase_TypesBoolean_Payload(): Base_Types.Boolean_Payload = {
      val r = readBase_TypesBoolean_PayloadT(F)
      return r
    }

    def readBase_TypesBoolean_PayloadT(typeParsed: B): Base_Types.Boolean_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesBoolean_Payload)
      }
      val value = reader.readB()
      return Base_Types.Boolean_Payload(value)
    }

    def readBase_TypesInteger_Payload(): Base_Types.Integer_Payload = {
      val r = readBase_TypesInteger_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_PayloadT(typeParsed: B): Base_Types.Integer_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_Payload)
      }
      val value = reader.readZ()
      return Base_Types.Integer_Payload(value)
    }

    def readBase_TypesInteger_8_Payload(): Base_Types.Integer_8_Payload = {
      val r = readBase_TypesInteger_8_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_8_PayloadT(typeParsed: B): Base_Types.Integer_8_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_8_Payload)
      }
      val value = reader.readS8()
      return Base_Types.Integer_8_Payload(value)
    }

    def readBase_TypesInteger_16_Payload(): Base_Types.Integer_16_Payload = {
      val r = readBase_TypesInteger_16_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_16_PayloadT(typeParsed: B): Base_Types.Integer_16_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_16_Payload)
      }
      val value = reader.readS16()
      return Base_Types.Integer_16_Payload(value)
    }

    def readBase_TypesInteger_32_Payload(): Base_Types.Integer_32_Payload = {
      val r = readBase_TypesInteger_32_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_32_PayloadT(typeParsed: B): Base_Types.Integer_32_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_32_Payload)
      }
      val value = reader.readS32()
      return Base_Types.Integer_32_Payload(value)
    }

    def readBase_TypesInteger_64_Payload(): Base_Types.Integer_64_Payload = {
      val r = readBase_TypesInteger_64_PayloadT(F)
      return r
    }

    def readBase_TypesInteger_64_PayloadT(typeParsed: B): Base_Types.Integer_64_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesInteger_64_Payload)
      }
      val value = reader.readS64()
      return Base_Types.Integer_64_Payload(value)
    }

    def readBase_TypesUnsigned_8_Payload(): Base_Types.Unsigned_8_Payload = {
      val r = readBase_TypesUnsigned_8_PayloadT(F)
      return r
    }

    def readBase_TypesUnsigned_8_PayloadT(typeParsed: B): Base_Types.Unsigned_8_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesUnsigned_8_Payload)
      }
      val value = reader.readU8()
      return Base_Types.Unsigned_8_Payload(value)
    }

    def readBase_TypesUnsigned_16_Payload(): Base_Types.Unsigned_16_Payload = {
      val r = readBase_TypesUnsigned_16_PayloadT(F)
      return r
    }

    def readBase_TypesUnsigned_16_PayloadT(typeParsed: B): Base_Types.Unsigned_16_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesUnsigned_16_Payload)
      }
      val value = reader.readU16()
      return Base_Types.Unsigned_16_Payload(value)
    }

    def readBase_TypesUnsigned_32_Payload(): Base_Types.Unsigned_32_Payload = {
      val r = readBase_TypesUnsigned_32_PayloadT(F)
      return r
    }

    def readBase_TypesUnsigned_32_PayloadT(typeParsed: B): Base_Types.Unsigned_32_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesUnsigned_32_Payload)
      }
      val value = reader.readU32()
      return Base_Types.Unsigned_32_Payload(value)
    }

    def readBase_TypesUnsigned_64_Payload(): Base_Types.Unsigned_64_Payload = {
      val r = readBase_TypesUnsigned_64_PayloadT(F)
      return r
    }

    def readBase_TypesUnsigned_64_PayloadT(typeParsed: B): Base_Types.Unsigned_64_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesUnsigned_64_Payload)
      }
      val value = reader.readU64()
      return Base_Types.Unsigned_64_Payload(value)
    }

    def readBase_TypesFloat_Payload(): Base_Types.Float_Payload = {
      val r = readBase_TypesFloat_PayloadT(F)
      return r
    }

    def readBase_TypesFloat_PayloadT(typeParsed: B): Base_Types.Float_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesFloat_Payload)
      }
      val value = reader.readR()
      return Base_Types.Float_Payload(value)
    }

    def readBase_TypesFloat_32_Payload(): Base_Types.Float_32_Payload = {
      val r = readBase_TypesFloat_32_PayloadT(F)
      return r
    }

    def readBase_TypesFloat_32_PayloadT(typeParsed: B): Base_Types.Float_32_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesFloat_32_Payload)
      }
      val value = reader.readF32()
      return Base_Types.Float_32_Payload(value)
    }

    def readBase_TypesFloat_64_Payload(): Base_Types.Float_64_Payload = {
      val r = readBase_TypesFloat_64_PayloadT(F)
      return r
    }

    def readBase_TypesFloat_64_PayloadT(typeParsed: B): Base_Types.Float_64_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesFloat_64_Payload)
      }
      val value = reader.readF64()
      return Base_Types.Float_64_Payload(value)
    }

    def readBase_TypesCharacter_Payload(): Base_Types.Character_Payload = {
      val r = readBase_TypesCharacter_PayloadT(F)
      return r
    }

    def readBase_TypesCharacter_PayloadT(typeParsed: B): Base_Types.Character_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesCharacter_Payload)
      }
      val value = reader.readC()
      return Base_Types.Character_Payload(value)
    }

    def readBase_TypesString_Payload(): Base_Types.String_Payload = {
      val r = readBase_TypesString_PayloadT(F)
      return r
    }

    def readBase_TypesString_PayloadT(typeParsed: B): Base_Types.String_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesString_Payload)
      }
      val value = reader.readString()
      return Base_Types.String_Payload(value)
    }

    def readBase_TypesBits_Payload(): Base_Types.Bits_Payload = {
      val r = readBase_TypesBits_PayloadT(F)
      return r
    }

    def readBase_TypesBits_PayloadT(typeParsed: B): Base_Types.Bits_Payload = {
      if (!typeParsed) {
        reader.expectZ(Constants.Base_TypesBits_Payload)
      }
      val value = reader.readISZ(reader.readB _)
      return Base_Types.Bits_Payload(value)
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container.")
          val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(T)
          return r
      }
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P = {
      val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P)
      }
      return TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P()
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS = {
      val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS)
      }
      return TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS()
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container.")
          val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(T)
          return r
      }
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P = {
      val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P)
      }
      val api_tempChanged = reader.readOption(read_artEmpty _)
      val api_currentTemp = readTempControlMixedSeL4CAmKESTemperature()
      return TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P(api_tempChanged, api_currentTemp)
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS = {
      val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS)
      }
      val api_tempChanged = reader.readOption(read_artEmpty _)
      val api_currentTemp = readTempControlMixedSeL4CAmKESTemperature()
      return TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS(api_tempChanged, api_currentTemp)
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container.")
          val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(T)
          return r
      }
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P = {
      val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P)
      }
      val api_tempChanged = reader.readOption(read_artEmpty _)
      val api_fanAck = reader.readOption(readTempControlMixedSeL4CAmKESFanAckType _)
      val api_setPoint = reader.readOption(readTempControlMixedSeL4CAmKESSetPoint _)
      val api_currentTemp = readTempControlMixedSeL4CAmKESTemperature()
      return TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS = {
      val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS)
      }
      val In_currentFanState = readTempControlMixedSeL4CAmKESFanCmdType()
      val In_currentSetPoint = readTempControlMixedSeL4CAmKESSetPoint()
      val In_latestTemp = readTempControlMixedSeL4CAmKESTemperature()
      val api_tempChanged = reader.readOption(read_artEmpty _)
      val api_fanAck = reader.readOption(readTempControlMixedSeL4CAmKESFanAckType _)
      val api_setPoint = reader.readOption(readTempControlMixedSeL4CAmKESSetPoint _)
      val api_currentTemp = readTempControlMixedSeL4CAmKESTemperature()
      return TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS(In_currentFanState, In_currentSetPoint, In_latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container.")
          val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T)
          return r
      }
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P = {
      val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P)
      }
      val api_fanCmd = reader.readOption(readTempControlMixedSeL4CAmKESFanCmdType _)
      return TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P(api_fanCmd)
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS = {
      val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS)
      }
      val currentFanState = readTempControlMixedSeL4CAmKESFanCmdType()
      val currentSetPoint = readTempControlMixedSeL4CAmKESSetPoint()
      val latestTemp = readTempControlMixedSeL4CAmKESTemperature()
      val api_fanCmd = reader.readOption(readTempControlMixedSeL4CAmKESFanCmdType _)
      return TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS(currentFanState, currentSetPoint, latestTemp, api_fanCmd)
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container.")
          val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(T)
          return r
      }
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P = {
      val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P)
      }
      val api_fanCmd = reader.readOption(readTempControlMixedSeL4CAmKESFanCmdType _)
      return TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P(api_fanCmd)
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS = {
      val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS)
      }
      val api_fanCmd = reader.readOption(readTempControlMixedSeL4CAmKESFanCmdType _)
      return TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS(api_fanCmd)
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container.")
          val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(T)
          return r
      }
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P = {
      val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P)
      }
      val api_fanAck = reader.readOption(readTempControlMixedSeL4CAmKESFanAckType _)
      return TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P(api_fanAck)
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS = {
      val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(F)
      return r
    }

    def readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS = {
      if (!typeParsed) {
        reader.expectZ(Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS)
      }
      val api_fanAck = reader.readOption(readTempControlMixedSeL4CAmKESFanAckType _)
      return TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS(api_fanAck)
    }

    def readruntimemonitorObservationKindType(): runtimemonitor.ObservationKind.Type = {
      val r = reader.readZ()
      return runtimemonitor.ObservationKind.byOrdinal(r).get
    }

    def readutilContainer(): util.Container = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants.utilEmptyContainer => val r = readutilEmptyContainerT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of util.Container.")
          val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T)
          return r
      }
    }

    def readutilEmptyContainer(): util.EmptyContainer = {
      val r = readutilEmptyContainerT(F)
      return r
    }

    def readutilEmptyContainerT(typeParsed: B): util.EmptyContainer = {
      if (!typeParsed) {
        reader.expectZ(Constants.utilEmptyContainer)
      }
      return util.EmptyContainer()
    }

    def read_artDataContent(): art.DataContent = {
      val i = reader.curr
      val t = reader.readZ()
      t match {
        case Constants._artEmpty => val r = read_artEmptyT(T); return r
        case Constants.Base_TypesBoolean_Payload => val r = readBase_TypesBoolean_PayloadT(T); return r
        case Constants.Base_TypesInteger_Payload => val r = readBase_TypesInteger_PayloadT(T); return r
        case Constants.Base_TypesInteger_8_Payload => val r = readBase_TypesInteger_8_PayloadT(T); return r
        case Constants.Base_TypesInteger_16_Payload => val r = readBase_TypesInteger_16_PayloadT(T); return r
        case Constants.Base_TypesInteger_32_Payload => val r = readBase_TypesInteger_32_PayloadT(T); return r
        case Constants.Base_TypesInteger_64_Payload => val r = readBase_TypesInteger_64_PayloadT(T); return r
        case Constants.Base_TypesUnsigned_8_Payload => val r = readBase_TypesUnsigned_8_PayloadT(T); return r
        case Constants.Base_TypesUnsigned_16_Payload => val r = readBase_TypesUnsigned_16_PayloadT(T); return r
        case Constants.Base_TypesUnsigned_32_Payload => val r = readBase_TypesUnsigned_32_PayloadT(T); return r
        case Constants.Base_TypesUnsigned_64_Payload => val r = readBase_TypesUnsigned_64_PayloadT(T); return r
        case Constants.Base_TypesFloat_Payload => val r = readBase_TypesFloat_PayloadT(T); return r
        case Constants.Base_TypesFloat_32_Payload => val r = readBase_TypesFloat_32_PayloadT(T); return r
        case Constants.Base_TypesFloat_64_Payload => val r = readBase_TypesFloat_64_PayloadT(T); return r
        case Constants.Base_TypesCharacter_Payload => val r = readBase_TypesCharacter_PayloadT(T); return r
        case Constants.Base_TypesString_Payload => val r = readBase_TypesString_PayloadT(T); return r
        case Constants.Base_TypesBits_Payload => val r = readBase_TypesBits_PayloadT(T); return r
        case Constants.utilEmptyContainer => val r = readutilEmptyContainerT(T); return r
        case Constants.TempControlMixedFanCmd_Payload => val r = readTempControlMixedFanCmd_PayloadT(T); return r
        case Constants.TempControlMixedFanAck_Payload => val r = readTempControlMixedFanAck_PayloadT(T); return r
        case Constants.Isolette_Data_ModelTemp_Payload => val r = readIsolette_Data_ModelTemp_PayloadT(T); return r
        case Constants.TempControlMixedTempUnit_Payload => val r = readTempControlMixedTempUnit_PayloadT(T); return r
        case Constants.Isolette_EnvironmentHeat_Payload => val r = readIsolette_EnvironmentHeat_PayloadT(T); return r
        case Constants.TempControlMixedSetPoint_Payload => val r = readTempControlMixedSetPoint_PayloadT(T); return r
        case Constants.TempControlPeriodicFanCmd_Payload => val r = readTempControlPeriodicFanCmd_PayloadT(T); return r
        case Constants.Isolette_Data_ModelOn_Off_Payload => val r = readIsolette_Data_ModelOn_Off_PayloadT(T); return r
        case Constants.TempControlPeriodicFanAck_Payload => val r = readTempControlPeriodicFanAck_PayloadT(T); return r
        case Constants.Isolette_Data_ModelStatus_Payload => val r = readIsolette_Data_ModelStatus_PayloadT(T); return r
        case Constants.TempControlPeriodicTempUnit_Payload => val r = readTempControlPeriodicTempUnit_PayloadT(T); return r
        case Constants.TempControlMixedTemperature_Payload => val r = readTempControlMixedTemperature_PayloadT(T); return r
        case Constants.TempControlPeriodicSetPoint_Payload => val r = readTempControlPeriodicSetPoint_PayloadT(T); return r
        case Constants.Isolette_Data_ModelValueStatus_Payload => val r = readIsolette_Data_ModelValueStatus_PayloadT(T); return r
        case Constants.Isolette_Data_ModelTempWstatus_Payload => val r = readIsolette_Data_ModelTempWstatus_PayloadT(T); return r
        case Constants.TempControlPeriodicTemperature_Payload => val r = readTempControlPeriodicTemperature_PayloadT(T); return r
        case Constants.Isolette_Data_ModelMonitor_Mode_Payload => val r = readIsolette_Data_ModelMonitor_Mode_PayloadT(T); return r
        case Constants.Isolette_Data_ModelFailure_Flag_Payload => val r = readIsolette_Data_ModelFailure_Flag_PayloadT(T); return r
        case Constants.Isolette_Data_ModelPhysicalTemp_Payload => val r = readIsolette_Data_ModelPhysicalTemp_PayloadT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFanCmd_Payload => val r = readTempControlMixedSeL4CAmKESFanCmd_PayloadT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFanAck_Payload => val r = readTempControlMixedSeL4CAmKESFanAck_PayloadT(T); return r
        case Constants.Isolette_Data_ModelRegulator_Mode_Payload => val r = readIsolette_Data_ModelRegulator_Mode_PayloadT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempUnit_Payload => val r = readTempControlMixedSeL4CAmKESTempUnit_PayloadT(T); return r
        case Constants.TempControlMixedSeL4CAmKESSetPoint_Payload => val r = readTempControlMixedSeL4CAmKESSetPoint_PayloadT(T); return r
        case Constants.Isolette_EnvironmentAir_Interaction_Payload => val r = readIsolette_EnvironmentAir_Interaction_PayloadT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTemperature_Payload => val r = readTempControlMixedSeL4CAmKESTemperature_PayloadT(T); return r
        case Constants.Isolette_EnvironmentInterface_Interaction_Payload => val r = readIsolette_EnvironmentInterface_Interaction_PayloadT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(T); return r
        case Constants.TempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS => val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
        case _ =>
          reader.error(i, s"$t is not a valid type of art.DataContent.")
          val r = readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T)
          return r
      }
    }

    def read_artEmpty(): art.Empty = {
      val r = read_artEmptyT(F)
      return r
    }

    def read_artEmptyT(typeParsed: B): art.Empty = {
      if (!typeParsed) {
        reader.expectZ(Constants._artEmpty)
      }
      return art.Empty()
    }

  }

  def to[T](data: ISZ[U8], f: Reader => T): Either[T, MessagePack.ErrorMsg] = {
    val rd = Reader.Default(MessagePack.reader(data))
    rd.reader.init()
    val r = f(rd)
    rd.errorOpt match {
      case Some(e) => return Either.Right(e)
      case _ => return Either.Left(r)
    }
  }

  def fromTempControlMixedTemperature(o: TempControlMixed.Temperature, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedTemperature(o)
    return w.result
  }

  def toTempControlMixedTemperature(data: ISZ[U8]): Either[TempControlMixed.Temperature, MessagePack.ErrorMsg] = {
    def fTempControlMixedTemperature(reader: Reader): TempControlMixed.Temperature = {
      val r = reader.readTempControlMixedTemperature()
      return r
    }
    val r = to(data, fTempControlMixedTemperature _)
    return r
  }

  def fromTempControlMixedTemperature_Payload(o: TempControlMixed.Temperature_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedTemperature_Payload(o)
    return w.result
  }

  def toTempControlMixedTemperature_Payload(data: ISZ[U8]): Either[TempControlMixed.Temperature_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedTemperature_Payload(reader: Reader): TempControlMixed.Temperature_Payload = {
      val r = reader.readTempControlMixedTemperature_Payload()
      return r
    }
    val r = to(data, fTempControlMixedTemperature_Payload _)
    return r
  }

  def fromTempControlMixedSetPoint(o: TempControlMixed.SetPoint, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSetPoint(o)
    return w.result
  }

  def toTempControlMixedSetPoint(data: ISZ[U8]): Either[TempControlMixed.SetPoint, MessagePack.ErrorMsg] = {
    def fTempControlMixedSetPoint(reader: Reader): TempControlMixed.SetPoint = {
      val r = reader.readTempControlMixedSetPoint()
      return r
    }
    val r = to(data, fTempControlMixedSetPoint _)
    return r
  }

  def fromTempControlMixedSetPoint_Payload(o: TempControlMixed.SetPoint_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSetPoint_Payload(o)
    return w.result
  }

  def toTempControlMixedSetPoint_Payload(data: ISZ[U8]): Either[TempControlMixed.SetPoint_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedSetPoint_Payload(reader: Reader): TempControlMixed.SetPoint_Payload = {
      val r = reader.readTempControlMixedSetPoint_Payload()
      return r
    }
    val r = to(data, fTempControlMixedSetPoint_Payload _)
    return r
  }

  def fromTempControlMixedTempUnit_Payload(o: TempControlMixed.TempUnit_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedTempUnit_Payload(o)
    return w.result
  }

  def toTempControlMixedTempUnit_Payload(data: ISZ[U8]): Either[TempControlMixed.TempUnit_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedTempUnit_Payload(reader: Reader): TempControlMixed.TempUnit_Payload = {
      val r = reader.readTempControlMixedTempUnit_Payload()
      return r
    }
    val r = to(data, fTempControlMixedTempUnit_Payload _)
    return r
  }

  def fromTempControlMixedFanCmd_Payload(o: TempControlMixed.FanCmd_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedFanCmd_Payload(o)
    return w.result
  }

  def toTempControlMixedFanCmd_Payload(data: ISZ[U8]): Either[TempControlMixed.FanCmd_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedFanCmd_Payload(reader: Reader): TempControlMixed.FanCmd_Payload = {
      val r = reader.readTempControlMixedFanCmd_Payload()
      return r
    }
    val r = to(data, fTempControlMixedFanCmd_Payload _)
    return r
  }

  def fromTempControlMixedFanAck_Payload(o: TempControlMixed.FanAck_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedFanAck_Payload(o)
    return w.result
  }

  def toTempControlMixedFanAck_Payload(data: ISZ[U8]): Either[TempControlMixed.FanAck_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedFanAck_Payload(reader: Reader): TempControlMixed.FanAck_Payload = {
      val r = reader.readTempControlMixedFanAck_Payload()
      return r
    }
    val r = to(data, fTempControlMixedFanAck_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTemperature(o: TempControlMixedSeL4CAmKES.Temperature, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTemperature(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTemperature(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.Temperature, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTemperature(reader: Reader): TempControlMixedSeL4CAmKES.Temperature = {
      val r = reader.readTempControlMixedSeL4CAmKESTemperature()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTemperature _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTemperature_Payload(o: TempControlMixedSeL4CAmKES.Temperature_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTemperature_Payload(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTemperature_Payload(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.Temperature_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTemperature_Payload(reader: Reader): TempControlMixedSeL4CAmKES.Temperature_Payload = {
      val r = reader.readTempControlMixedSeL4CAmKESTemperature_Payload()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTemperature_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESSetPoint(o: TempControlMixedSeL4CAmKES.SetPoint, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESSetPoint(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESSetPoint(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.SetPoint, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESSetPoint(reader: Reader): TempControlMixedSeL4CAmKES.SetPoint = {
      val r = reader.readTempControlMixedSeL4CAmKESSetPoint()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESSetPoint _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESSetPoint_Payload(o: TempControlMixedSeL4CAmKES.SetPoint_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESSetPoint_Payload(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESSetPoint_Payload(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.SetPoint_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESSetPoint_Payload(reader: Reader): TempControlMixedSeL4CAmKES.SetPoint_Payload = {
      val r = reader.readTempControlMixedSeL4CAmKESSetPoint_Payload()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESSetPoint_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempUnit_Payload(o: TempControlMixedSeL4CAmKES.TempUnit_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempUnit_Payload(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempUnit_Payload(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempUnit_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempUnit_Payload(reader: Reader): TempControlMixedSeL4CAmKES.TempUnit_Payload = {
      val r = reader.readTempControlMixedSeL4CAmKESTempUnit_Payload()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempUnit_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFanCmd_Payload(o: TempControlMixedSeL4CAmKES.FanCmd_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESFanCmd_Payload(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESFanCmd_Payload(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.FanCmd_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFanCmd_Payload(reader: Reader): TempControlMixedSeL4CAmKES.FanCmd_Payload = {
      val r = reader.readTempControlMixedSeL4CAmKESFanCmd_Payload()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESFanCmd_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFanAck_Payload(o: TempControlMixedSeL4CAmKES.FanAck_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESFanAck_Payload(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESFanAck_Payload(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.FanAck_Payload, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFanAck_Payload(reader: Reader): TempControlMixedSeL4CAmKES.FanAck_Payload = {
      val r = reader.readTempControlMixedSeL4CAmKESFanAck_Payload()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESFanAck_Payload _)
    return r
  }

  def fromIsolette_EnvironmentHeat(o: Isolette_Environment.Heat, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_EnvironmentHeat(o)
    return w.result
  }

  def toIsolette_EnvironmentHeat(data: ISZ[U8]): Either[Isolette_Environment.Heat, MessagePack.ErrorMsg] = {
    def fIsolette_EnvironmentHeat(reader: Reader): Isolette_Environment.Heat = {
      val r = reader.readIsolette_EnvironmentHeat()
      return r
    }
    val r = to(data, fIsolette_EnvironmentHeat _)
    return r
  }

  def fromIsolette_EnvironmentHeat_Payload(o: Isolette_Environment.Heat_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_EnvironmentHeat_Payload(o)
    return w.result
  }

  def toIsolette_EnvironmentHeat_Payload(data: ISZ[U8]): Either[Isolette_Environment.Heat_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_EnvironmentHeat_Payload(reader: Reader): Isolette_Environment.Heat_Payload = {
      val r = reader.readIsolette_EnvironmentHeat_Payload()
      return r
    }
    val r = to(data, fIsolette_EnvironmentHeat_Payload _)
    return r
  }

  def fromIsolette_EnvironmentInterface_Interaction(o: Isolette_Environment.Interface_Interaction, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_EnvironmentInterface_Interaction(o)
    return w.result
  }

  def toIsolette_EnvironmentInterface_Interaction(data: ISZ[U8]): Either[Isolette_Environment.Interface_Interaction, MessagePack.ErrorMsg] = {
    def fIsolette_EnvironmentInterface_Interaction(reader: Reader): Isolette_Environment.Interface_Interaction = {
      val r = reader.readIsolette_EnvironmentInterface_Interaction()
      return r
    }
    val r = to(data, fIsolette_EnvironmentInterface_Interaction _)
    return r
  }

  def fromIsolette_EnvironmentInterface_Interaction_Payload(o: Isolette_Environment.Interface_Interaction_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_EnvironmentInterface_Interaction_Payload(o)
    return w.result
  }

  def toIsolette_EnvironmentInterface_Interaction_Payload(data: ISZ[U8]): Either[Isolette_Environment.Interface_Interaction_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_EnvironmentInterface_Interaction_Payload(reader: Reader): Isolette_Environment.Interface_Interaction_Payload = {
      val r = reader.readIsolette_EnvironmentInterface_Interaction_Payload()
      return r
    }
    val r = to(data, fIsolette_EnvironmentInterface_Interaction_Payload _)
    return r
  }

  def fromIsolette_EnvironmentAir_Interaction(o: Isolette_Environment.Air_Interaction, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_EnvironmentAir_Interaction(o)
    return w.result
  }

  def toIsolette_EnvironmentAir_Interaction(data: ISZ[U8]): Either[Isolette_Environment.Air_Interaction, MessagePack.ErrorMsg] = {
    def fIsolette_EnvironmentAir_Interaction(reader: Reader): Isolette_Environment.Air_Interaction = {
      val r = reader.readIsolette_EnvironmentAir_Interaction()
      return r
    }
    val r = to(data, fIsolette_EnvironmentAir_Interaction _)
    return r
  }

  def fromIsolette_EnvironmentAir_Interaction_Payload(o: Isolette_Environment.Air_Interaction_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_EnvironmentAir_Interaction_Payload(o)
    return w.result
  }

  def toIsolette_EnvironmentAir_Interaction_Payload(data: ISZ[U8]): Either[Isolette_Environment.Air_Interaction_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_EnvironmentAir_Interaction_Payload(reader: Reader): Isolette_Environment.Air_Interaction_Payload = {
      val r = reader.readIsolette_EnvironmentAir_Interaction_Payload()
      return r
    }
    val r = to(data, fIsolette_EnvironmentAir_Interaction_Payload _)
    return r
  }

  def fromTempControlPeriodicTemperature(o: TempControlPeriodic.Temperature, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlPeriodicTemperature(o)
    return w.result
  }

  def toTempControlPeriodicTemperature(data: ISZ[U8]): Either[TempControlPeriodic.Temperature, MessagePack.ErrorMsg] = {
    def fTempControlPeriodicTemperature(reader: Reader): TempControlPeriodic.Temperature = {
      val r = reader.readTempControlPeriodicTemperature()
      return r
    }
    val r = to(data, fTempControlPeriodicTemperature _)
    return r
  }

  def fromTempControlPeriodicTemperature_Payload(o: TempControlPeriodic.Temperature_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlPeriodicTemperature_Payload(o)
    return w.result
  }

  def toTempControlPeriodicTemperature_Payload(data: ISZ[U8]): Either[TempControlPeriodic.Temperature_Payload, MessagePack.ErrorMsg] = {
    def fTempControlPeriodicTemperature_Payload(reader: Reader): TempControlPeriodic.Temperature_Payload = {
      val r = reader.readTempControlPeriodicTemperature_Payload()
      return r
    }
    val r = to(data, fTempControlPeriodicTemperature_Payload _)
    return r
  }

  def fromTempControlPeriodicSetPoint(o: TempControlPeriodic.SetPoint, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlPeriodicSetPoint(o)
    return w.result
  }

  def toTempControlPeriodicSetPoint(data: ISZ[U8]): Either[TempControlPeriodic.SetPoint, MessagePack.ErrorMsg] = {
    def fTempControlPeriodicSetPoint(reader: Reader): TempControlPeriodic.SetPoint = {
      val r = reader.readTempControlPeriodicSetPoint()
      return r
    }
    val r = to(data, fTempControlPeriodicSetPoint _)
    return r
  }

  def fromTempControlPeriodicSetPoint_Payload(o: TempControlPeriodic.SetPoint_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlPeriodicSetPoint_Payload(o)
    return w.result
  }

  def toTempControlPeriodicSetPoint_Payload(data: ISZ[U8]): Either[TempControlPeriodic.SetPoint_Payload, MessagePack.ErrorMsg] = {
    def fTempControlPeriodicSetPoint_Payload(reader: Reader): TempControlPeriodic.SetPoint_Payload = {
      val r = reader.readTempControlPeriodicSetPoint_Payload()
      return r
    }
    val r = to(data, fTempControlPeriodicSetPoint_Payload _)
    return r
  }

  def fromTempControlPeriodicTempUnit_Payload(o: TempControlPeriodic.TempUnit_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlPeriodicTempUnit_Payload(o)
    return w.result
  }

  def toTempControlPeriodicTempUnit_Payload(data: ISZ[U8]): Either[TempControlPeriodic.TempUnit_Payload, MessagePack.ErrorMsg] = {
    def fTempControlPeriodicTempUnit_Payload(reader: Reader): TempControlPeriodic.TempUnit_Payload = {
      val r = reader.readTempControlPeriodicTempUnit_Payload()
      return r
    }
    val r = to(data, fTempControlPeriodicTempUnit_Payload _)
    return r
  }

  def fromTempControlPeriodicFanCmd_Payload(o: TempControlPeriodic.FanCmd_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlPeriodicFanCmd_Payload(o)
    return w.result
  }

  def toTempControlPeriodicFanCmd_Payload(data: ISZ[U8]): Either[TempControlPeriodic.FanCmd_Payload, MessagePack.ErrorMsg] = {
    def fTempControlPeriodicFanCmd_Payload(reader: Reader): TempControlPeriodic.FanCmd_Payload = {
      val r = reader.readTempControlPeriodicFanCmd_Payload()
      return r
    }
    val r = to(data, fTempControlPeriodicFanCmd_Payload _)
    return r
  }

  def fromTempControlPeriodicFanAck_Payload(o: TempControlPeriodic.FanAck_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlPeriodicFanAck_Payload(o)
    return w.result
  }

  def toTempControlPeriodicFanAck_Payload(data: ISZ[U8]): Either[TempControlPeriodic.FanAck_Payload, MessagePack.ErrorMsg] = {
    def fTempControlPeriodicFanAck_Payload(reader: Reader): TempControlPeriodic.FanAck_Payload = {
      val r = reader.readTempControlPeriodicFanAck_Payload()
      return r
    }
    val r = to(data, fTempControlPeriodicFanAck_Payload _)
    return r
  }

  def fromIsolette_Data_ModelPhysicalTemp(o: Isolette_Data_Model.PhysicalTemp, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelPhysicalTemp(o)
    return w.result
  }

  def toIsolette_Data_ModelPhysicalTemp(data: ISZ[U8]): Either[Isolette_Data_Model.PhysicalTemp, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelPhysicalTemp(reader: Reader): Isolette_Data_Model.PhysicalTemp = {
      val r = reader.readIsolette_Data_ModelPhysicalTemp()
      return r
    }
    val r = to(data, fIsolette_Data_ModelPhysicalTemp _)
    return r
  }

  def fromIsolette_Data_ModelPhysicalTemp_Payload(o: Isolette_Data_Model.PhysicalTemp_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelPhysicalTemp_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelPhysicalTemp_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.PhysicalTemp_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelPhysicalTemp_Payload(reader: Reader): Isolette_Data_Model.PhysicalTemp_Payload = {
      val r = reader.readIsolette_Data_ModelPhysicalTemp_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelPhysicalTemp_Payload _)
    return r
  }

  def fromIsolette_Data_ModelTempWstatus(o: Isolette_Data_Model.TempWstatus, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelTempWstatus(o)
    return w.result
  }

  def toIsolette_Data_ModelTempWstatus(data: ISZ[U8]): Either[Isolette_Data_Model.TempWstatus, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelTempWstatus(reader: Reader): Isolette_Data_Model.TempWstatus = {
      val r = reader.readIsolette_Data_ModelTempWstatus()
      return r
    }
    val r = to(data, fIsolette_Data_ModelTempWstatus _)
    return r
  }

  def fromIsolette_Data_ModelTempWstatus_Payload(o: Isolette_Data_Model.TempWstatus_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelTempWstatus_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelTempWstatus_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.TempWstatus_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelTempWstatus_Payload(reader: Reader): Isolette_Data_Model.TempWstatus_Payload = {
      val r = reader.readIsolette_Data_ModelTempWstatus_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelTempWstatus_Payload _)
    return r
  }

  def fromIsolette_Data_ModelTemp(o: Isolette_Data_Model.Temp, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelTemp(o)
    return w.result
  }

  def toIsolette_Data_ModelTemp(data: ISZ[U8]): Either[Isolette_Data_Model.Temp, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelTemp(reader: Reader): Isolette_Data_Model.Temp = {
      val r = reader.readIsolette_Data_ModelTemp()
      return r
    }
    val r = to(data, fIsolette_Data_ModelTemp _)
    return r
  }

  def fromIsolette_Data_ModelTemp_Payload(o: Isolette_Data_Model.Temp_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelTemp_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelTemp_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.Temp_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelTemp_Payload(reader: Reader): Isolette_Data_Model.Temp_Payload = {
      val r = reader.readIsolette_Data_ModelTemp_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelTemp_Payload _)
    return r
  }

  def fromIsolette_Data_ModelOn_Off_Payload(o: Isolette_Data_Model.On_Off_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelOn_Off_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelOn_Off_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.On_Off_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelOn_Off_Payload(reader: Reader): Isolette_Data_Model.On_Off_Payload = {
      val r = reader.readIsolette_Data_ModelOn_Off_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelOn_Off_Payload _)
    return r
  }

  def fromIsolette_Data_ModelFailure_Flag(o: Isolette_Data_Model.Failure_Flag, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelFailure_Flag(o)
    return w.result
  }

  def toIsolette_Data_ModelFailure_Flag(data: ISZ[U8]): Either[Isolette_Data_Model.Failure_Flag, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelFailure_Flag(reader: Reader): Isolette_Data_Model.Failure_Flag = {
      val r = reader.readIsolette_Data_ModelFailure_Flag()
      return r
    }
    val r = to(data, fIsolette_Data_ModelFailure_Flag _)
    return r
  }

  def fromIsolette_Data_ModelFailure_Flag_Payload(o: Isolette_Data_Model.Failure_Flag_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelFailure_Flag_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelFailure_Flag_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.Failure_Flag_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelFailure_Flag_Payload(reader: Reader): Isolette_Data_Model.Failure_Flag_Payload = {
      val r = reader.readIsolette_Data_ModelFailure_Flag_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelFailure_Flag_Payload _)
    return r
  }

  def fromIsolette_Data_ModelValueStatus_Payload(o: Isolette_Data_Model.ValueStatus_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelValueStatus_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelValueStatus_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.ValueStatus_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelValueStatus_Payload(reader: Reader): Isolette_Data_Model.ValueStatus_Payload = {
      val r = reader.readIsolette_Data_ModelValueStatus_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelValueStatus_Payload _)
    return r
  }

  def fromIsolette_Data_ModelStatus_Payload(o: Isolette_Data_Model.Status_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelStatus_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelStatus_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.Status_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelStatus_Payload(reader: Reader): Isolette_Data_Model.Status_Payload = {
      val r = reader.readIsolette_Data_ModelStatus_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelStatus_Payload _)
    return r
  }

  def fromIsolette_Data_ModelRegulator_Mode_Payload(o: Isolette_Data_Model.Regulator_Mode_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelRegulator_Mode_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelRegulator_Mode_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.Regulator_Mode_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelRegulator_Mode_Payload(reader: Reader): Isolette_Data_Model.Regulator_Mode_Payload = {
      val r = reader.readIsolette_Data_ModelRegulator_Mode_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelRegulator_Mode_Payload _)
    return r
  }

  def fromIsolette_Data_ModelMonitor_Mode_Payload(o: Isolette_Data_Model.Monitor_Mode_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeIsolette_Data_ModelMonitor_Mode_Payload(o)
    return w.result
  }

  def toIsolette_Data_ModelMonitor_Mode_Payload(data: ISZ[U8]): Either[Isolette_Data_Model.Monitor_Mode_Payload, MessagePack.ErrorMsg] = {
    def fIsolette_Data_ModelMonitor_Mode_Payload(reader: Reader): Isolette_Data_Model.Monitor_Mode_Payload = {
      val r = reader.readIsolette_Data_ModelMonitor_Mode_Payload()
      return r
    }
    val r = to(data, fIsolette_Data_ModelMonitor_Mode_Payload _)
    return r
  }

  def fromBase_TypesBoolean_Payload(o: Base_Types.Boolean_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesBoolean_Payload(o)
    return w.result
  }

  def toBase_TypesBoolean_Payload(data: ISZ[U8]): Either[Base_Types.Boolean_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesBoolean_Payload(reader: Reader): Base_Types.Boolean_Payload = {
      val r = reader.readBase_TypesBoolean_Payload()
      return r
    }
    val r = to(data, fBase_TypesBoolean_Payload _)
    return r
  }

  def fromBase_TypesInteger_Payload(o: Base_Types.Integer_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_Payload(data: ISZ[U8]): Either[Base_Types.Integer_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_Payload(reader: Reader): Base_Types.Integer_Payload = {
      val r = reader.readBase_TypesInteger_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_Payload _)
    return r
  }

  def fromBase_TypesInteger_8_Payload(o: Base_Types.Integer_8_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_8_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_8_Payload(data: ISZ[U8]): Either[Base_Types.Integer_8_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_8_Payload(reader: Reader): Base_Types.Integer_8_Payload = {
      val r = reader.readBase_TypesInteger_8_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_8_Payload _)
    return r
  }

  def fromBase_TypesInteger_16_Payload(o: Base_Types.Integer_16_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_16_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_16_Payload(data: ISZ[U8]): Either[Base_Types.Integer_16_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_16_Payload(reader: Reader): Base_Types.Integer_16_Payload = {
      val r = reader.readBase_TypesInteger_16_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_16_Payload _)
    return r
  }

  def fromBase_TypesInteger_32_Payload(o: Base_Types.Integer_32_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_32_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_32_Payload(data: ISZ[U8]): Either[Base_Types.Integer_32_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_32_Payload(reader: Reader): Base_Types.Integer_32_Payload = {
      val r = reader.readBase_TypesInteger_32_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_32_Payload _)
    return r
  }

  def fromBase_TypesInteger_64_Payload(o: Base_Types.Integer_64_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesInteger_64_Payload(o)
    return w.result
  }

  def toBase_TypesInteger_64_Payload(data: ISZ[U8]): Either[Base_Types.Integer_64_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesInteger_64_Payload(reader: Reader): Base_Types.Integer_64_Payload = {
      val r = reader.readBase_TypesInteger_64_Payload()
      return r
    }
    val r = to(data, fBase_TypesInteger_64_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_8_Payload(o: Base_Types.Unsigned_8_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesUnsigned_8_Payload(o)
    return w.result
  }

  def toBase_TypesUnsigned_8_Payload(data: ISZ[U8]): Either[Base_Types.Unsigned_8_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesUnsigned_8_Payload(reader: Reader): Base_Types.Unsigned_8_Payload = {
      val r = reader.readBase_TypesUnsigned_8_Payload()
      return r
    }
    val r = to(data, fBase_TypesUnsigned_8_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_16_Payload(o: Base_Types.Unsigned_16_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesUnsigned_16_Payload(o)
    return w.result
  }

  def toBase_TypesUnsigned_16_Payload(data: ISZ[U8]): Either[Base_Types.Unsigned_16_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesUnsigned_16_Payload(reader: Reader): Base_Types.Unsigned_16_Payload = {
      val r = reader.readBase_TypesUnsigned_16_Payload()
      return r
    }
    val r = to(data, fBase_TypesUnsigned_16_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_32_Payload(o: Base_Types.Unsigned_32_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesUnsigned_32_Payload(o)
    return w.result
  }

  def toBase_TypesUnsigned_32_Payload(data: ISZ[U8]): Either[Base_Types.Unsigned_32_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesUnsigned_32_Payload(reader: Reader): Base_Types.Unsigned_32_Payload = {
      val r = reader.readBase_TypesUnsigned_32_Payload()
      return r
    }
    val r = to(data, fBase_TypesUnsigned_32_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_64_Payload(o: Base_Types.Unsigned_64_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesUnsigned_64_Payload(o)
    return w.result
  }

  def toBase_TypesUnsigned_64_Payload(data: ISZ[U8]): Either[Base_Types.Unsigned_64_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesUnsigned_64_Payload(reader: Reader): Base_Types.Unsigned_64_Payload = {
      val r = reader.readBase_TypesUnsigned_64_Payload()
      return r
    }
    val r = to(data, fBase_TypesUnsigned_64_Payload _)
    return r
  }

  def fromBase_TypesFloat_Payload(o: Base_Types.Float_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesFloat_Payload(o)
    return w.result
  }

  def toBase_TypesFloat_Payload(data: ISZ[U8]): Either[Base_Types.Float_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesFloat_Payload(reader: Reader): Base_Types.Float_Payload = {
      val r = reader.readBase_TypesFloat_Payload()
      return r
    }
    val r = to(data, fBase_TypesFloat_Payload _)
    return r
  }

  def fromBase_TypesFloat_32_Payload(o: Base_Types.Float_32_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesFloat_32_Payload(o)
    return w.result
  }

  def toBase_TypesFloat_32_Payload(data: ISZ[U8]): Either[Base_Types.Float_32_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesFloat_32_Payload(reader: Reader): Base_Types.Float_32_Payload = {
      val r = reader.readBase_TypesFloat_32_Payload()
      return r
    }
    val r = to(data, fBase_TypesFloat_32_Payload _)
    return r
  }

  def fromBase_TypesFloat_64_Payload(o: Base_Types.Float_64_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesFloat_64_Payload(o)
    return w.result
  }

  def toBase_TypesFloat_64_Payload(data: ISZ[U8]): Either[Base_Types.Float_64_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesFloat_64_Payload(reader: Reader): Base_Types.Float_64_Payload = {
      val r = reader.readBase_TypesFloat_64_Payload()
      return r
    }
    val r = to(data, fBase_TypesFloat_64_Payload _)
    return r
  }

  def fromBase_TypesCharacter_Payload(o: Base_Types.Character_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesCharacter_Payload(o)
    return w.result
  }

  def toBase_TypesCharacter_Payload(data: ISZ[U8]): Either[Base_Types.Character_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesCharacter_Payload(reader: Reader): Base_Types.Character_Payload = {
      val r = reader.readBase_TypesCharacter_Payload()
      return r
    }
    val r = to(data, fBase_TypesCharacter_Payload _)
    return r
  }

  def fromBase_TypesString_Payload(o: Base_Types.String_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesString_Payload(o)
    return w.result
  }

  def toBase_TypesString_Payload(data: ISZ[U8]): Either[Base_Types.String_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesString_Payload(reader: Reader): Base_Types.String_Payload = {
      val r = reader.readBase_TypesString_Payload()
      return r
    }
    val r = to(data, fBase_TypesString_Payload _)
    return r
  }

  def fromBase_TypesBits_Payload(o: Base_Types.Bits_Payload, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeBase_TypesBits_Payload(o)
    return w.result
  }

  def toBase_TypesBits_Payload(data: ISZ[U8]): Either[Base_Types.Bits_Payload, MessagePack.ErrorMsg] = {
    def fBase_TypesBits_Payload(reader: Reader): Base_Types.Bits_Payload = {
      val r = reader.readBase_TypesBits_Payload()
      return r
    }
    val r = to(data, fBase_TypesBits_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(reader: Reader): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container = {
      val r = reader.readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(reader: Reader): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P = {
      val r = reader.readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(reader: Reader): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS = {
      val r = reader.readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(reader: Reader): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container = {
      val r = reader.readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(reader: Reader): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P = {
      val r = reader.readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(reader: Reader): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS = {
      val r = reader.readTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(reader: Reader): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container = {
      val r = reader.readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(reader: Reader): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P = {
      val r = reader.readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(reader: Reader): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS = {
      val r = reader.readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(reader: Reader): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container = {
      val r = reader.readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(reader: Reader): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P = {
      val r = reader.readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(reader: Reader): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS = {
      val r = reader.readTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(reader: Reader): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container = {
      val r = reader.readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(reader: Reader): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P = {
      val r = reader.readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(reader: Reader): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS = {
      val r = reader.readTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(reader: Reader): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container = {
      val r = reader.readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(reader: Reader): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P = {
      val r = reader.readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o)
    return w.result
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(data: ISZ[U8]): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS, MessagePack.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(reader: Reader): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS = {
      val r = reader.readTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS()
      return r
    }
    val r = to(data, fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS _)
    return r
  }

  def fromutilContainer(o: util.Container, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeutilContainer(o)
    return w.result
  }

  def toutilContainer(data: ISZ[U8]): Either[util.Container, MessagePack.ErrorMsg] = {
    def futilContainer(reader: Reader): util.Container = {
      val r = reader.readutilContainer()
      return r
    }
    val r = to(data, futilContainer _)
    return r
  }

  def fromutilEmptyContainer(o: util.EmptyContainer, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.writeutilEmptyContainer(o)
    return w.result
  }

  def toutilEmptyContainer(data: ISZ[U8]): Either[util.EmptyContainer, MessagePack.ErrorMsg] = {
    def futilEmptyContainer(reader: Reader): util.EmptyContainer = {
      val r = reader.readutilEmptyContainer()
      return r
    }
    val r = to(data, futilEmptyContainer _)
    return r
  }

  def from_artDataContent(o: art.DataContent, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.write_artDataContent(o)
    return w.result
  }

  def to_artDataContent(data: ISZ[U8]): Either[art.DataContent, MessagePack.ErrorMsg] = {
    def f_artDataContent(reader: Reader): art.DataContent = {
      val r = reader.read_artDataContent()
      return r
    }
    val r = to(data, f_artDataContent _)
    return r
  }

  def from_artEmpty(o: art.Empty, pooling: B): ISZ[U8] = {
    val w = Writer.Default(MessagePack.writer(pooling))
    w.write_artEmpty(o)
    return w.result
  }

  def to_artEmpty(data: ISZ[U8]): Either[art.Empty, MessagePack.ErrorMsg] = {
    def f_artEmpty(reader: Reader): art.Empty = {
      val r = reader.read_artEmpty()
      return r
    }
    val r = to(data, f_artEmpty _)
    return r
  }

}