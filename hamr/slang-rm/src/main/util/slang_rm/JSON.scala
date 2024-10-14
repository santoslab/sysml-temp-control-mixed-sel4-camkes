// #Sireum
// @formatter:off

// This file is auto-generated from Temperature.scala, SetPoint.scala, TempUnit.scala, FanCmd.scala, FanAck.scala, Temperature.scala, SetPoint.scala, TempUnit.scala, FanCmd.scala, FanAck.scala, Heat.scala, Interface_Interaction.scala, Air_Interaction.scala, Temperature.scala, SetPoint.scala, TempUnit.scala, FanCmd.scala, FanAck.scala, PhysicalTemp.scala, TempWstatus.scala, Temp.scala, On_Off.scala, Failure_Flag.scala, ValueStatus.scala, Status.scala, Regulator_Mode.scala, Monitor_Mode.scala, Base_Types.scala, GUMBO__Library.scala, GUMBO__Library.scala, GUMBO__Library.scala, GUMBO__Library.scala, TempSensor_tsp_ts_Containers.scala, TempControl_tcp_tc_Containers.scala, Fan_fp_f_Containers.scala, ObservationKind.scala, Container.scala, DataContent.scala, Aux_Types.scala

package slang_rm

import org.sireum._
import org.sireum.Json.Printer._

object JSON {

  object Printer {

    @pure def printTempControlMixedTemperature(o: TempControlMixed.Temperature): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixed.Temperature""""),
        ("degrees", printF32(o.degrees)),
        ("unit", printTempControlMixedTempUnitType(o.unit))
      ))
    }

    @pure def printTempControlMixedTemperature_Payload(o: TempControlMixed.Temperature_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixed.Temperature_Payload""""),
        ("value", printTempControlMixedTemperature(o.value))
      ))
    }

    @pure def printTempControlMixedSetPoint(o: TempControlMixed.SetPoint): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixed.SetPoint""""),
        ("low", printTempControlMixedTemperature(o.low)),
        ("high", printTempControlMixedTemperature(o.high))
      ))
    }

    @pure def printTempControlMixedSetPoint_Payload(o: TempControlMixed.SetPoint_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixed.SetPoint_Payload""""),
        ("value", printTempControlMixedSetPoint(o.value))
      ))
    }

    @pure def printTempControlMixedTempUnitType(o: TempControlMixed.TempUnit.Type): ST = {
      val value: String = o match {
        case TempControlMixed.TempUnit.Fahrenheit => "Fahrenheit"
        case TempControlMixed.TempUnit.Celsius => "Celsius"
        case TempControlMixed.TempUnit.Kelvin => "Kelvin"
      }
      return printObject(ISZ(
        ("type", printString("TempControlMixed.TempUnit")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlMixedTempUnit_Payload(o: TempControlMixed.TempUnit_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixed.TempUnit_Payload""""),
        ("value", printTempControlMixedTempUnitType(o.value))
      ))
    }

    @pure def printTempControlMixedFanCmdType(o: TempControlMixed.FanCmd.Type): ST = {
      val value: String = o match {
        case TempControlMixed.FanCmd.On => "On"
        case TempControlMixed.FanCmd.Off => "Off"
      }
      return printObject(ISZ(
        ("type", printString("TempControlMixed.FanCmd")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlMixedFanCmd_Payload(o: TempControlMixed.FanCmd_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixed.FanCmd_Payload""""),
        ("value", printTempControlMixedFanCmdType(o.value))
      ))
    }

    @pure def printTempControlMixedFanAckType(o: TempControlMixed.FanAck.Type): ST = {
      val value: String = o match {
        case TempControlMixed.FanAck.Ok => "Ok"
        case TempControlMixed.FanAck.Error => "Error"
      }
      return printObject(ISZ(
        ("type", printString("TempControlMixed.FanAck")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlMixedFanAck_Payload(o: TempControlMixed.FanAck_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixed.FanAck_Payload""""),
        ("value", printTempControlMixedFanAckType(o.value))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTemperature(o: TempControlMixedSeL4CAmKES.Temperature): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.Temperature""""),
        ("degrees", printF32(o.degrees)),
        ("unit", printTempControlMixedSeL4CAmKESTempUnitType(o.unit))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTemperature_Payload(o: TempControlMixedSeL4CAmKES.Temperature_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.Temperature_Payload""""),
        ("value", printTempControlMixedSeL4CAmKESTemperature(o.value))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESSetPoint(o: TempControlMixedSeL4CAmKES.SetPoint): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.SetPoint""""),
        ("low", printTempControlMixedSeL4CAmKESTemperature(o.low)),
        ("high", printTempControlMixedSeL4CAmKESTemperature(o.high))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESSetPoint_Payload(o: TempControlMixedSeL4CAmKES.SetPoint_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.SetPoint_Payload""""),
        ("value", printTempControlMixedSeL4CAmKESSetPoint(o.value))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempUnitType(o: TempControlMixedSeL4CAmKES.TempUnit.Type): ST = {
      val value: String = o match {
        case TempControlMixedSeL4CAmKES.TempUnit.Fahrenheit => "Fahrenheit"
        case TempControlMixedSeL4CAmKES.TempUnit.Celsius => "Celsius"
        case TempControlMixedSeL4CAmKES.TempUnit.Kelvin => "Kelvin"
      }
      return printObject(ISZ(
        ("type", printString("TempControlMixedSeL4CAmKES.TempUnit")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempUnit_Payload(o: TempControlMixedSeL4CAmKES.TempUnit_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempUnit_Payload""""),
        ("value", printTempControlMixedSeL4CAmKESTempUnitType(o.value))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESFanCmdType(o: TempControlMixedSeL4CAmKES.FanCmd.Type): ST = {
      val value: String = o match {
        case TempControlMixedSeL4CAmKES.FanCmd.On => "On"
        case TempControlMixedSeL4CAmKES.FanCmd.Off => "Off"
      }
      return printObject(ISZ(
        ("type", printString("TempControlMixedSeL4CAmKES.FanCmd")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESFanCmd_Payload(o: TempControlMixedSeL4CAmKES.FanCmd_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.FanCmd_Payload""""),
        ("value", printTempControlMixedSeL4CAmKESFanCmdType(o.value))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESFanAckType(o: TempControlMixedSeL4CAmKES.FanAck.Type): ST = {
      val value: String = o match {
        case TempControlMixedSeL4CAmKES.FanAck.Ok => "Ok"
        case TempControlMixedSeL4CAmKES.FanAck.Error => "Error"
      }
      return printObject(ISZ(
        ("type", printString("TempControlMixedSeL4CAmKES.FanAck")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESFanAck_Payload(o: TempControlMixedSeL4CAmKES.FanAck_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.FanAck_Payload""""),
        ("value", printTempControlMixedSeL4CAmKESFanAckType(o.value))
      ))
    }

    @pure def printIsolette_EnvironmentHeat(o: Isolette_Environment.Heat): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Environment.Heat""""),
        ("dummyField", printB(o.dummyField))
      ))
    }

    @pure def printIsolette_EnvironmentHeat_Payload(o: Isolette_Environment.Heat_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Environment.Heat_Payload""""),
        ("value", printIsolette_EnvironmentHeat(o.value))
      ))
    }

    @pure def printIsolette_EnvironmentInterface_Interaction(o: Isolette_Environment.Interface_Interaction): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Environment.Interface_Interaction""""),
        ("dummyField", printB(o.dummyField))
      ))
    }

    @pure def printIsolette_EnvironmentInterface_Interaction_Payload(o: Isolette_Environment.Interface_Interaction_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Environment.Interface_Interaction_Payload""""),
        ("value", printIsolette_EnvironmentInterface_Interaction(o.value))
      ))
    }

    @pure def printIsolette_EnvironmentAir_Interaction(o: Isolette_Environment.Air_Interaction): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Environment.Air_Interaction""""),
        ("dummyField", printB(o.dummyField))
      ))
    }

    @pure def printIsolette_EnvironmentAir_Interaction_Payload(o: Isolette_Environment.Air_Interaction_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Environment.Air_Interaction_Payload""""),
        ("value", printIsolette_EnvironmentAir_Interaction(o.value))
      ))
    }

    @pure def printTempControlPeriodicTemperature(o: TempControlPeriodic.Temperature): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlPeriodic.Temperature""""),
        ("degrees", printF32(o.degrees)),
        ("unit", printTempControlPeriodicTempUnitType(o.unit))
      ))
    }

    @pure def printTempControlPeriodicTemperature_Payload(o: TempControlPeriodic.Temperature_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlPeriodic.Temperature_Payload""""),
        ("value", printTempControlPeriodicTemperature(o.value))
      ))
    }

    @pure def printTempControlPeriodicSetPoint(o: TempControlPeriodic.SetPoint): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlPeriodic.SetPoint""""),
        ("low", printTempControlPeriodicTemperature(o.low)),
        ("high", printTempControlPeriodicTemperature(o.high))
      ))
    }

    @pure def printTempControlPeriodicSetPoint_Payload(o: TempControlPeriodic.SetPoint_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlPeriodic.SetPoint_Payload""""),
        ("value", printTempControlPeriodicSetPoint(o.value))
      ))
    }

    @pure def printTempControlPeriodicTempUnitType(o: TempControlPeriodic.TempUnit.Type): ST = {
      val value: String = o match {
        case TempControlPeriodic.TempUnit.Fahrenheit => "Fahrenheit"
        case TempControlPeriodic.TempUnit.Celsius => "Celsius"
        case TempControlPeriodic.TempUnit.Kelvin => "Kelvin"
      }
      return printObject(ISZ(
        ("type", printString("TempControlPeriodic.TempUnit")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlPeriodicTempUnit_Payload(o: TempControlPeriodic.TempUnit_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlPeriodic.TempUnit_Payload""""),
        ("value", printTempControlPeriodicTempUnitType(o.value))
      ))
    }

    @pure def printTempControlPeriodicFanCmdType(o: TempControlPeriodic.FanCmd.Type): ST = {
      val value: String = o match {
        case TempControlPeriodic.FanCmd.On => "On"
        case TempControlPeriodic.FanCmd.Off => "Off"
      }
      return printObject(ISZ(
        ("type", printString("TempControlPeriodic.FanCmd")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlPeriodicFanCmd_Payload(o: TempControlPeriodic.FanCmd_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlPeriodic.FanCmd_Payload""""),
        ("value", printTempControlPeriodicFanCmdType(o.value))
      ))
    }

    @pure def printTempControlPeriodicFanAckType(o: TempControlPeriodic.FanAck.Type): ST = {
      val value: String = o match {
        case TempControlPeriodic.FanAck.Ok => "Ok"
        case TempControlPeriodic.FanAck.Error => "Error"
      }
      return printObject(ISZ(
        ("type", printString("TempControlPeriodic.FanAck")),
        ("value", printString(value))
      ))
    }

    @pure def printTempControlPeriodicFanAck_Payload(o: TempControlPeriodic.FanAck_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlPeriodic.FanAck_Payload""""),
        ("value", printTempControlPeriodicFanAckType(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelPhysicalTemp(o: Isolette_Data_Model.PhysicalTemp): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.PhysicalTemp""""),
        ("degrees", printF32(o.degrees))
      ))
    }

    @pure def printIsolette_Data_ModelPhysicalTemp_Payload(o: Isolette_Data_Model.PhysicalTemp_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.PhysicalTemp_Payload""""),
        ("value", printIsolette_Data_ModelPhysicalTemp(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelTempWstatus(o: Isolette_Data_Model.TempWstatus): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.TempWstatus""""),
        ("degrees", printF32(o.degrees)),
        ("status", printIsolette_Data_ModelValueStatusType(o.status))
      ))
    }

    @pure def printIsolette_Data_ModelTempWstatus_Payload(o: Isolette_Data_Model.TempWstatus_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.TempWstatus_Payload""""),
        ("value", printIsolette_Data_ModelTempWstatus(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelTemp(o: Isolette_Data_Model.Temp): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.Temp""""),
        ("degrees", printF32(o.degrees))
      ))
    }

    @pure def printIsolette_Data_ModelTemp_Payload(o: Isolette_Data_Model.Temp_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.Temp_Payload""""),
        ("value", printIsolette_Data_ModelTemp(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelOn_OffType(o: Isolette_Data_Model.On_Off.Type): ST = {
      val value: String = o match {
        case Isolette_Data_Model.On_Off.Onn => "Onn"
        case Isolette_Data_Model.On_Off.Off => "Off"
      }
      return printObject(ISZ(
        ("type", printString("Isolette_Data_Model.On_Off")),
        ("value", printString(value))
      ))
    }

    @pure def printIsolette_Data_ModelOn_Off_Payload(o: Isolette_Data_Model.On_Off_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.On_Off_Payload""""),
        ("value", printIsolette_Data_ModelOn_OffType(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelFailure_Flag(o: Isolette_Data_Model.Failure_Flag): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.Failure_Flag""""),
        ("flag", printB(o.flag))
      ))
    }

    @pure def printIsolette_Data_ModelFailure_Flag_Payload(o: Isolette_Data_Model.Failure_Flag_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.Failure_Flag_Payload""""),
        ("value", printIsolette_Data_ModelFailure_Flag(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelValueStatusType(o: Isolette_Data_Model.ValueStatus.Type): ST = {
      val value: String = o match {
        case Isolette_Data_Model.ValueStatus.Valid => "Valid"
        case Isolette_Data_Model.ValueStatus.Invalid => "Invalid"
      }
      return printObject(ISZ(
        ("type", printString("Isolette_Data_Model.ValueStatus")),
        ("value", printString(value))
      ))
    }

    @pure def printIsolette_Data_ModelValueStatus_Payload(o: Isolette_Data_Model.ValueStatus_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.ValueStatus_Payload""""),
        ("value", printIsolette_Data_ModelValueStatusType(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelStatusType(o: Isolette_Data_Model.Status.Type): ST = {
      val value: String = o match {
        case Isolette_Data_Model.Status.Init_Status => "Init_Status"
        case Isolette_Data_Model.Status.On_Status => "On_Status"
        case Isolette_Data_Model.Status.Failed_Status => "Failed_Status"
      }
      return printObject(ISZ(
        ("type", printString("Isolette_Data_Model.Status")),
        ("value", printString(value))
      ))
    }

    @pure def printIsolette_Data_ModelStatus_Payload(o: Isolette_Data_Model.Status_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.Status_Payload""""),
        ("value", printIsolette_Data_ModelStatusType(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelRegulator_ModeType(o: Isolette_Data_Model.Regulator_Mode.Type): ST = {
      val value: String = o match {
        case Isolette_Data_Model.Regulator_Mode.Init_Regulator_Mode => "Init_Regulator_Mode"
        case Isolette_Data_Model.Regulator_Mode.Normal_Regulator_Mode => "Normal_Regulator_Mode"
        case Isolette_Data_Model.Regulator_Mode.Failed_Regulator_Mode => "Failed_Regulator_Mode"
      }
      return printObject(ISZ(
        ("type", printString("Isolette_Data_Model.Regulator_Mode")),
        ("value", printString(value))
      ))
    }

    @pure def printIsolette_Data_ModelRegulator_Mode_Payload(o: Isolette_Data_Model.Regulator_Mode_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.Regulator_Mode_Payload""""),
        ("value", printIsolette_Data_ModelRegulator_ModeType(o.value))
      ))
    }

    @pure def printIsolette_Data_ModelMonitor_ModeType(o: Isolette_Data_Model.Monitor_Mode.Type): ST = {
      val value: String = o match {
        case Isolette_Data_Model.Monitor_Mode.Init_Monitor_Mode => "Init_Monitor_Mode"
        case Isolette_Data_Model.Monitor_Mode.Normal_Monitor_Mode => "Normal_Monitor_Mode"
        case Isolette_Data_Model.Monitor_Mode.Failed_Monitor_Mode => "Failed_Monitor_Mode"
      }
      return printObject(ISZ(
        ("type", printString("Isolette_Data_Model.Monitor_Mode")),
        ("value", printString(value))
      ))
    }

    @pure def printIsolette_Data_ModelMonitor_Mode_Payload(o: Isolette_Data_Model.Monitor_Mode_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Isolette_Data_Model.Monitor_Mode_Payload""""),
        ("value", printIsolette_Data_ModelMonitor_ModeType(o.value))
      ))
    }

    @pure def printBase_TypesBoolean_Payload(o: Base_Types.Boolean_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Boolean_Payload""""),
        ("value", printB(o.value))
      ))
    }

    @pure def printBase_TypesInteger_Payload(o: Base_Types.Integer_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_Payload""""),
        ("value", printZ(o.value))
      ))
    }

    @pure def printBase_TypesInteger_8_Payload(o: Base_Types.Integer_8_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_8_Payload""""),
        ("value", printS8(o.value))
      ))
    }

    @pure def printBase_TypesInteger_16_Payload(o: Base_Types.Integer_16_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_16_Payload""""),
        ("value", printS16(o.value))
      ))
    }

    @pure def printBase_TypesInteger_32_Payload(o: Base_Types.Integer_32_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_32_Payload""""),
        ("value", printS32(o.value))
      ))
    }

    @pure def printBase_TypesInteger_64_Payload(o: Base_Types.Integer_64_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Integer_64_Payload""""),
        ("value", printS64(o.value))
      ))
    }

    @pure def printBase_TypesUnsigned_8_Payload(o: Base_Types.Unsigned_8_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Unsigned_8_Payload""""),
        ("value", printU8(o.value))
      ))
    }

    @pure def printBase_TypesUnsigned_16_Payload(o: Base_Types.Unsigned_16_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Unsigned_16_Payload""""),
        ("value", printU16(o.value))
      ))
    }

    @pure def printBase_TypesUnsigned_32_Payload(o: Base_Types.Unsigned_32_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Unsigned_32_Payload""""),
        ("value", printU32(o.value))
      ))
    }

    @pure def printBase_TypesUnsigned_64_Payload(o: Base_Types.Unsigned_64_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Unsigned_64_Payload""""),
        ("value", printU64(o.value))
      ))
    }

    @pure def printBase_TypesFloat_Payload(o: Base_Types.Float_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Float_Payload""""),
        ("value", printR(o.value))
      ))
    }

    @pure def printBase_TypesFloat_32_Payload(o: Base_Types.Float_32_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Float_32_Payload""""),
        ("value", printF32(o.value))
      ))
    }

    @pure def printBase_TypesFloat_64_Payload(o: Base_Types.Float_64_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Float_64_Payload""""),
        ("value", printF64(o.value))
      ))
    }

    @pure def printBase_TypesCharacter_Payload(o: Base_Types.Character_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Character_Payload""""),
        ("value", printC(o.value))
      ))
    }

    @pure def printBase_TypesString_Payload(o: Base_Types.String_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.String_Payload""""),
        ("value", printString(o.value))
      ))
    }

    @pure def printBase_TypesBits_Payload(o: Base_Types.Bits_Payload): ST = {
      return printObject(ISZ(
        ("type", st""""Base_Types.Bits_Payload""""),
        ("value", printISZ(T, o.value, printB _))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container): ST = {
      o match {
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o)
      }
    }

    @pure def printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P"""")
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS"""")
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container): ST = {
      o match {
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o)
      }
    }

    @pure def printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P""""),
        ("api_tempChanged", printOption(F, o.api_tempChanged, print_artEmpty _)),
        ("api_currentTemp", printTempControlMixedSeL4CAmKESTemperature(o.api_currentTemp))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS""""),
        ("api_tempChanged", printOption(F, o.api_tempChanged, print_artEmpty _)),
        ("api_currentTemp", printTempControlMixedSeL4CAmKESTemperature(o.api_currentTemp))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container): ST = {
      o match {
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o)
      }
    }

    @pure def printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P""""),
        ("api_tempChanged", printOption(F, o.api_tempChanged, print_artEmpty _)),
        ("api_fanAck", printOption(F, o.api_fanAck, printTempControlMixedSeL4CAmKESFanAckType _)),
        ("api_setPoint", printOption(F, o.api_setPoint, printTempControlMixedSeL4CAmKESSetPoint _)),
        ("api_currentTemp", printTempControlMixedSeL4CAmKESTemperature(o.api_currentTemp))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS""""),
        ("In_currentFanState", printTempControlMixedSeL4CAmKESFanCmdType(o.In_currentFanState)),
        ("In_currentSetPoint", printTempControlMixedSeL4CAmKESSetPoint(o.In_currentSetPoint)),
        ("In_latestTemp", printTempControlMixedSeL4CAmKESTemperature(o.In_latestTemp)),
        ("api_tempChanged", printOption(F, o.api_tempChanged, print_artEmpty _)),
        ("api_fanAck", printOption(F, o.api_fanAck, printTempControlMixedSeL4CAmKESFanAckType _)),
        ("api_setPoint", printOption(F, o.api_setPoint, printTempControlMixedSeL4CAmKESSetPoint _)),
        ("api_currentTemp", printTempControlMixedSeL4CAmKESTemperature(o.api_currentTemp))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container): ST = {
      o match {
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o)
      }
    }

    @pure def printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P""""),
        ("api_fanCmd", printOption(F, o.api_fanCmd, printTempControlMixedSeL4CAmKESFanCmdType _))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS""""),
        ("currentFanState", printTempControlMixedSeL4CAmKESFanCmdType(o.currentFanState)),
        ("currentSetPoint", printTempControlMixedSeL4CAmKESSetPoint(o.currentSetPoint)),
        ("latestTemp", printTempControlMixedSeL4CAmKESTemperature(o.latestTemp)),
        ("api_fanCmd", printOption(F, o.api_fanCmd, printTempControlMixedSeL4CAmKESFanCmdType _))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container): ST = {
      o match {
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P => return printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS => return printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o)
      }
    }

    @pure def printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P""""),
        ("api_fanCmd", printOption(F, o.api_fanCmd, printTempControlMixedSeL4CAmKESFanCmdType _))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS""""),
        ("api_fanCmd", printOption(F, o.api_fanCmd, printTempControlMixedSeL4CAmKESFanCmdType _))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container): ST = {
      o match {
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P => return printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS => return printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o)
      }
    }

    @pure def printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P""""),
        ("api_fanAck", printOption(F, o.api_fanAck, printTempControlMixedSeL4CAmKESFanAckType _))
      ))
    }

    @pure def printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS): ST = {
      return printObject(ISZ(
        ("type", st""""TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS""""),
        ("api_fanAck", printOption(F, o.api_fanAck, printTempControlMixedSeL4CAmKESFanAckType _))
      ))
    }

    @pure def printruntimemonitorObservationKindType(o: runtimemonitor.ObservationKind.Type): ST = {
      val value: String = o match {
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_tsp_ts_postInit => "TempControlSystem_Instance_tsp_ts_postInit"
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_tsp_ts_preCompute => "TempControlSystem_Instance_tsp_ts_preCompute"
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_tsp_ts_postCompute => "TempControlSystem_Instance_tsp_ts_postCompute"
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_tcp_tc_postInit => "TempControlSystem_Instance_tcp_tc_postInit"
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_tcp_tc_preCompute => "TempControlSystem_Instance_tcp_tc_preCompute"
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_tcp_tc_postCompute => "TempControlSystem_Instance_tcp_tc_postCompute"
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_fp_f_postInit => "TempControlSystem_Instance_fp_f_postInit"
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_fp_f_preCompute => "TempControlSystem_Instance_fp_f_preCompute"
        case runtimemonitor.ObservationKind.TempControlSystem_Instance_fp_f_postCompute => "TempControlSystem_Instance_fp_f_postCompute"
      }
      return printObject(ISZ(
        ("type", printString("runtimemonitor.ObservationKind")),
        ("value", printString(value))
      ))
    }

    @pure def printutilContainer(o: util.Container): ST = {
      o match {
        case o: util.EmptyContainer => return printutilEmptyContainer(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P => return printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS => return printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P => return printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS => return printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o)
      }
    }

    @pure def printutilEmptyContainer(o: util.EmptyContainer): ST = {
      return printObject(ISZ(
        ("type", st""""util.EmptyContainer"""")
      ))
    }

    @pure def print_artDataContent(o: art.DataContent): ST = {
      o match {
        case o: art.Empty => return print_artEmpty(o)
        case o: Base_Types.Boolean_Payload => return printBase_TypesBoolean_Payload(o)
        case o: Base_Types.Integer_Payload => return printBase_TypesInteger_Payload(o)
        case o: Base_Types.Integer_8_Payload => return printBase_TypesInteger_8_Payload(o)
        case o: Base_Types.Integer_16_Payload => return printBase_TypesInteger_16_Payload(o)
        case o: Base_Types.Integer_32_Payload => return printBase_TypesInteger_32_Payload(o)
        case o: Base_Types.Integer_64_Payload => return printBase_TypesInteger_64_Payload(o)
        case o: Base_Types.Unsigned_8_Payload => return printBase_TypesUnsigned_8_Payload(o)
        case o: Base_Types.Unsigned_16_Payload => return printBase_TypesUnsigned_16_Payload(o)
        case o: Base_Types.Unsigned_32_Payload => return printBase_TypesUnsigned_32_Payload(o)
        case o: Base_Types.Unsigned_64_Payload => return printBase_TypesUnsigned_64_Payload(o)
        case o: Base_Types.Float_Payload => return printBase_TypesFloat_Payload(o)
        case o: Base_Types.Float_32_Payload => return printBase_TypesFloat_32_Payload(o)
        case o: Base_Types.Float_64_Payload => return printBase_TypesFloat_64_Payload(o)
        case o: Base_Types.Character_Payload => return printBase_TypesCharacter_Payload(o)
        case o: Base_Types.String_Payload => return printBase_TypesString_Payload(o)
        case o: Base_Types.Bits_Payload => return printBase_TypesBits_Payload(o)
        case o: util.EmptyContainer => return printutilEmptyContainer(o)
        case o: TempControlMixed.FanCmd_Payload => return printTempControlMixedFanCmd_Payload(o)
        case o: TempControlMixed.FanAck_Payload => return printTempControlMixedFanAck_Payload(o)
        case o: Isolette_Data_Model.Temp_Payload => return printIsolette_Data_ModelTemp_Payload(o)
        case o: TempControlMixed.TempUnit_Payload => return printTempControlMixedTempUnit_Payload(o)
        case o: Isolette_Environment.Heat_Payload => return printIsolette_EnvironmentHeat_Payload(o)
        case o: TempControlMixed.SetPoint_Payload => return printTempControlMixedSetPoint_Payload(o)
        case o: TempControlPeriodic.FanCmd_Payload => return printTempControlPeriodicFanCmd_Payload(o)
        case o: Isolette_Data_Model.On_Off_Payload => return printIsolette_Data_ModelOn_Off_Payload(o)
        case o: TempControlPeriodic.FanAck_Payload => return printTempControlPeriodicFanAck_Payload(o)
        case o: Isolette_Data_Model.Status_Payload => return printIsolette_Data_ModelStatus_Payload(o)
        case o: TempControlPeriodic.TempUnit_Payload => return printTempControlPeriodicTempUnit_Payload(o)
        case o: TempControlMixed.Temperature_Payload => return printTempControlMixedTemperature_Payload(o)
        case o: TempControlPeriodic.SetPoint_Payload => return printTempControlPeriodicSetPoint_Payload(o)
        case o: Isolette_Data_Model.ValueStatus_Payload => return printIsolette_Data_ModelValueStatus_Payload(o)
        case o: Isolette_Data_Model.TempWstatus_Payload => return printIsolette_Data_ModelTempWstatus_Payload(o)
        case o: TempControlPeriodic.Temperature_Payload => return printTempControlPeriodicTemperature_Payload(o)
        case o: Isolette_Data_Model.Monitor_Mode_Payload => return printIsolette_Data_ModelMonitor_Mode_Payload(o)
        case o: Isolette_Data_Model.Failure_Flag_Payload => return printIsolette_Data_ModelFailure_Flag_Payload(o)
        case o: Isolette_Data_Model.PhysicalTemp_Payload => return printIsolette_Data_ModelPhysicalTemp_Payload(o)
        case o: TempControlMixedSeL4CAmKES.FanCmd_Payload => return printTempControlMixedSeL4CAmKESFanCmd_Payload(o)
        case o: TempControlMixedSeL4CAmKES.FanAck_Payload => return printTempControlMixedSeL4CAmKESFanAck_Payload(o)
        case o: Isolette_Data_Model.Regulator_Mode_Payload => return printIsolette_Data_ModelRegulator_Mode_Payload(o)
        case o: TempControlMixedSeL4CAmKES.TempUnit_Payload => return printTempControlMixedSeL4CAmKESTempUnit_Payload(o)
        case o: TempControlMixedSeL4CAmKES.SetPoint_Payload => return printTempControlMixedSeL4CAmKESSetPoint_Payload(o)
        case o: Isolette_Environment.Air_Interaction_Payload => return printIsolette_EnvironmentAir_Interaction_Payload(o)
        case o: TempControlMixedSeL4CAmKES.Temperature_Payload => return printTempControlMixedSeL4CAmKESTemperature_Payload(o)
        case o: Isolette_Environment.Interface_Interaction_Payload => return printIsolette_EnvironmentInterface_Interaction_Payload(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P => return printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS => return printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P => return printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS => return printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS => return printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o)
        case o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS => return printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o)
      }
    }

    @pure def print_artEmpty(o: art.Empty): ST = {
      return printObject(ISZ(
        ("type", st""""art.Empty"""")
      ))
    }

  }

  @record class Parser(val input: String) {
    val parser: Json.Parser = Json.Parser.create(input)

    def errorOpt: Option[Json.ErrorMsg] = {
      return parser.errorOpt
    }

    def parseTempControlMixedTemperature(): TempControlMixed.Temperature = {
      val r = parseTempControlMixedTemperatureT(F)
      return r
    }

    def parseTempControlMixedTemperatureT(typeParsed: B): TempControlMixed.Temperature = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.Temperature")
      }
      parser.parseObjectKey("degrees")
      val degrees = parser.parseF32()
      parser.parseObjectNext()
      parser.parseObjectKey("unit")
      val unit = parseTempControlMixedTempUnitType()
      parser.parseObjectNext()
      return TempControlMixed.Temperature(degrees, unit)
    }

    def parseTempControlMixedTemperature_Payload(): TempControlMixed.Temperature_Payload = {
      val r = parseTempControlMixedTemperature_PayloadT(F)
      return r
    }

    def parseTempControlMixedTemperature_PayloadT(typeParsed: B): TempControlMixed.Temperature_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.Temperature_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedTemperature()
      parser.parseObjectNext()
      return TempControlMixed.Temperature_Payload(value)
    }

    def parseTempControlMixedSetPoint(): TempControlMixed.SetPoint = {
      val r = parseTempControlMixedSetPointT(F)
      return r
    }

    def parseTempControlMixedSetPointT(typeParsed: B): TempControlMixed.SetPoint = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.SetPoint")
      }
      parser.parseObjectKey("low")
      val low = parseTempControlMixedTemperature()
      parser.parseObjectNext()
      parser.parseObjectKey("high")
      val high = parseTempControlMixedTemperature()
      parser.parseObjectNext()
      return TempControlMixed.SetPoint(low, high)
    }

    def parseTempControlMixedSetPoint_Payload(): TempControlMixed.SetPoint_Payload = {
      val r = parseTempControlMixedSetPoint_PayloadT(F)
      return r
    }

    def parseTempControlMixedSetPoint_PayloadT(typeParsed: B): TempControlMixed.SetPoint_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.SetPoint_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedSetPoint()
      parser.parseObjectNext()
      return TempControlMixed.SetPoint_Payload(value)
    }

    def parseTempControlMixedTempUnitType(): TempControlMixed.TempUnit.Type = {
      val r = parseTempControlMixedTempUnitT(F)
      return r
    }

    def parseTempControlMixedTempUnitT(typeParsed: B): TempControlMixed.TempUnit.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.TempUnit")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlMixed.TempUnit.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlMixed.TempUnit.")
          return TempControlMixed.TempUnit.byOrdinal(0).get
      }
    }

    def parseTempControlMixedTempUnit_Payload(): TempControlMixed.TempUnit_Payload = {
      val r = parseTempControlMixedTempUnit_PayloadT(F)
      return r
    }

    def parseTempControlMixedTempUnit_PayloadT(typeParsed: B): TempControlMixed.TempUnit_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.TempUnit_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedTempUnitType()
      parser.parseObjectNext()
      return TempControlMixed.TempUnit_Payload(value)
    }

    def parseTempControlMixedFanCmdType(): TempControlMixed.FanCmd.Type = {
      val r = parseTempControlMixedFanCmdT(F)
      return r
    }

    def parseTempControlMixedFanCmdT(typeParsed: B): TempControlMixed.FanCmd.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.FanCmd")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlMixed.FanCmd.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlMixed.FanCmd.")
          return TempControlMixed.FanCmd.byOrdinal(0).get
      }
    }

    def parseTempControlMixedFanCmd_Payload(): TempControlMixed.FanCmd_Payload = {
      val r = parseTempControlMixedFanCmd_PayloadT(F)
      return r
    }

    def parseTempControlMixedFanCmd_PayloadT(typeParsed: B): TempControlMixed.FanCmd_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.FanCmd_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedFanCmdType()
      parser.parseObjectNext()
      return TempControlMixed.FanCmd_Payload(value)
    }

    def parseTempControlMixedFanAckType(): TempControlMixed.FanAck.Type = {
      val r = parseTempControlMixedFanAckT(F)
      return r
    }

    def parseTempControlMixedFanAckT(typeParsed: B): TempControlMixed.FanAck.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.FanAck")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlMixed.FanAck.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlMixed.FanAck.")
          return TempControlMixed.FanAck.byOrdinal(0).get
      }
    }

    def parseTempControlMixedFanAck_Payload(): TempControlMixed.FanAck_Payload = {
      val r = parseTempControlMixedFanAck_PayloadT(F)
      return r
    }

    def parseTempControlMixedFanAck_PayloadT(typeParsed: B): TempControlMixed.FanAck_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixed.FanAck_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedFanAckType()
      parser.parseObjectNext()
      return TempControlMixed.FanAck_Payload(value)
    }

    def parseTempControlMixedSeL4CAmKESTemperature(): TempControlMixedSeL4CAmKES.Temperature = {
      val r = parseTempControlMixedSeL4CAmKESTemperatureT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTemperatureT(typeParsed: B): TempControlMixedSeL4CAmKES.Temperature = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.Temperature")
      }
      parser.parseObjectKey("degrees")
      val degrees = parser.parseF32()
      parser.parseObjectNext()
      parser.parseObjectKey("unit")
      val unit = parseTempControlMixedSeL4CAmKESTempUnitType()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.Temperature(degrees, unit)
    }

    def parseTempControlMixedSeL4CAmKESTemperature_Payload(): TempControlMixedSeL4CAmKES.Temperature_Payload = {
      val r = parseTempControlMixedSeL4CAmKESTemperature_PayloadT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTemperature_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.Temperature_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.Temperature_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.Temperature_Payload(value)
    }

    def parseTempControlMixedSeL4CAmKESSetPoint(): TempControlMixedSeL4CAmKES.SetPoint = {
      val r = parseTempControlMixedSeL4CAmKESSetPointT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESSetPointT(typeParsed: B): TempControlMixedSeL4CAmKES.SetPoint = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.SetPoint")
      }
      parser.parseObjectKey("low")
      val low = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      parser.parseObjectKey("high")
      val high = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.SetPoint(low, high)
    }

    def parseTempControlMixedSeL4CAmKESSetPoint_Payload(): TempControlMixedSeL4CAmKES.SetPoint_Payload = {
      val r = parseTempControlMixedSeL4CAmKESSetPoint_PayloadT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESSetPoint_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.SetPoint_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.SetPoint_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedSeL4CAmKESSetPoint()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.SetPoint_Payload(value)
    }

    def parseTempControlMixedSeL4CAmKESTempUnitType(): TempControlMixedSeL4CAmKES.TempUnit.Type = {
      val r = parseTempControlMixedSeL4CAmKESTempUnitT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempUnitT(typeParsed: B): TempControlMixedSeL4CAmKES.TempUnit.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempUnit")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlMixedSeL4CAmKES.TempUnit.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlMixedSeL4CAmKES.TempUnit.")
          return TempControlMixedSeL4CAmKES.TempUnit.byOrdinal(0).get
      }
    }

    def parseTempControlMixedSeL4CAmKESTempUnit_Payload(): TempControlMixedSeL4CAmKES.TempUnit_Payload = {
      val r = parseTempControlMixedSeL4CAmKESTempUnit_PayloadT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempUnit_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.TempUnit_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempUnit_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedSeL4CAmKESTempUnitType()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.TempUnit_Payload(value)
    }

    def parseTempControlMixedSeL4CAmKESFanCmdType(): TempControlMixedSeL4CAmKES.FanCmd.Type = {
      val r = parseTempControlMixedSeL4CAmKESFanCmdT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESFanCmdT(typeParsed: B): TempControlMixedSeL4CAmKES.FanCmd.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.FanCmd")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlMixedSeL4CAmKES.FanCmd.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlMixedSeL4CAmKES.FanCmd.")
          return TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(0).get
      }
    }

    def parseTempControlMixedSeL4CAmKESFanCmd_Payload(): TempControlMixedSeL4CAmKES.FanCmd_Payload = {
      val r = parseTempControlMixedSeL4CAmKESFanCmd_PayloadT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESFanCmd_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.FanCmd_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.FanCmd_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedSeL4CAmKESFanCmdType()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.FanCmd_Payload(value)
    }

    def parseTempControlMixedSeL4CAmKESFanAckType(): TempControlMixedSeL4CAmKES.FanAck.Type = {
      val r = parseTempControlMixedSeL4CAmKESFanAckT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESFanAckT(typeParsed: B): TempControlMixedSeL4CAmKES.FanAck.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.FanAck")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlMixedSeL4CAmKES.FanAck.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlMixedSeL4CAmKES.FanAck.")
          return TempControlMixedSeL4CAmKES.FanAck.byOrdinal(0).get
      }
    }

    def parseTempControlMixedSeL4CAmKESFanAck_Payload(): TempControlMixedSeL4CAmKES.FanAck_Payload = {
      val r = parseTempControlMixedSeL4CAmKESFanAck_PayloadT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESFanAck_PayloadT(typeParsed: B): TempControlMixedSeL4CAmKES.FanAck_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.FanAck_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlMixedSeL4CAmKESFanAckType()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.FanAck_Payload(value)
    }

    def parseIsolette_EnvironmentHeat(): Isolette_Environment.Heat = {
      val r = parseIsolette_EnvironmentHeatT(F)
      return r
    }

    def parseIsolette_EnvironmentHeatT(typeParsed: B): Isolette_Environment.Heat = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Environment.Heat")
      }
      parser.parseObjectKey("dummyField")
      val dummyField = parser.parseB()
      parser.parseObjectNext()
      return Isolette_Environment.Heat(dummyField)
    }

    def parseIsolette_EnvironmentHeat_Payload(): Isolette_Environment.Heat_Payload = {
      val r = parseIsolette_EnvironmentHeat_PayloadT(F)
      return r
    }

    def parseIsolette_EnvironmentHeat_PayloadT(typeParsed: B): Isolette_Environment.Heat_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Environment.Heat_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_EnvironmentHeat()
      parser.parseObjectNext()
      return Isolette_Environment.Heat_Payload(value)
    }

    def parseIsolette_EnvironmentInterface_Interaction(): Isolette_Environment.Interface_Interaction = {
      val r = parseIsolette_EnvironmentInterface_InteractionT(F)
      return r
    }

    def parseIsolette_EnvironmentInterface_InteractionT(typeParsed: B): Isolette_Environment.Interface_Interaction = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Environment.Interface_Interaction")
      }
      parser.parseObjectKey("dummyField")
      val dummyField = parser.parseB()
      parser.parseObjectNext()
      return Isolette_Environment.Interface_Interaction(dummyField)
    }

    def parseIsolette_EnvironmentInterface_Interaction_Payload(): Isolette_Environment.Interface_Interaction_Payload = {
      val r = parseIsolette_EnvironmentInterface_Interaction_PayloadT(F)
      return r
    }

    def parseIsolette_EnvironmentInterface_Interaction_PayloadT(typeParsed: B): Isolette_Environment.Interface_Interaction_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Environment.Interface_Interaction_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_EnvironmentInterface_Interaction()
      parser.parseObjectNext()
      return Isolette_Environment.Interface_Interaction_Payload(value)
    }

    def parseIsolette_EnvironmentAir_Interaction(): Isolette_Environment.Air_Interaction = {
      val r = parseIsolette_EnvironmentAir_InteractionT(F)
      return r
    }

    def parseIsolette_EnvironmentAir_InteractionT(typeParsed: B): Isolette_Environment.Air_Interaction = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Environment.Air_Interaction")
      }
      parser.parseObjectKey("dummyField")
      val dummyField = parser.parseB()
      parser.parseObjectNext()
      return Isolette_Environment.Air_Interaction(dummyField)
    }

    def parseIsolette_EnvironmentAir_Interaction_Payload(): Isolette_Environment.Air_Interaction_Payload = {
      val r = parseIsolette_EnvironmentAir_Interaction_PayloadT(F)
      return r
    }

    def parseIsolette_EnvironmentAir_Interaction_PayloadT(typeParsed: B): Isolette_Environment.Air_Interaction_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Environment.Air_Interaction_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_EnvironmentAir_Interaction()
      parser.parseObjectNext()
      return Isolette_Environment.Air_Interaction_Payload(value)
    }

    def parseTempControlPeriodicTemperature(): TempControlPeriodic.Temperature = {
      val r = parseTempControlPeriodicTemperatureT(F)
      return r
    }

    def parseTempControlPeriodicTemperatureT(typeParsed: B): TempControlPeriodic.Temperature = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.Temperature")
      }
      parser.parseObjectKey("degrees")
      val degrees = parser.parseF32()
      parser.parseObjectNext()
      parser.parseObjectKey("unit")
      val unit = parseTempControlPeriodicTempUnitType()
      parser.parseObjectNext()
      return TempControlPeriodic.Temperature(degrees, unit)
    }

    def parseTempControlPeriodicTemperature_Payload(): TempControlPeriodic.Temperature_Payload = {
      val r = parseTempControlPeriodicTemperature_PayloadT(F)
      return r
    }

    def parseTempControlPeriodicTemperature_PayloadT(typeParsed: B): TempControlPeriodic.Temperature_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.Temperature_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlPeriodicTemperature()
      parser.parseObjectNext()
      return TempControlPeriodic.Temperature_Payload(value)
    }

    def parseTempControlPeriodicSetPoint(): TempControlPeriodic.SetPoint = {
      val r = parseTempControlPeriodicSetPointT(F)
      return r
    }

    def parseTempControlPeriodicSetPointT(typeParsed: B): TempControlPeriodic.SetPoint = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.SetPoint")
      }
      parser.parseObjectKey("low")
      val low = parseTempControlPeriodicTemperature()
      parser.parseObjectNext()
      parser.parseObjectKey("high")
      val high = parseTempControlPeriodicTemperature()
      parser.parseObjectNext()
      return TempControlPeriodic.SetPoint(low, high)
    }

    def parseTempControlPeriodicSetPoint_Payload(): TempControlPeriodic.SetPoint_Payload = {
      val r = parseTempControlPeriodicSetPoint_PayloadT(F)
      return r
    }

    def parseTempControlPeriodicSetPoint_PayloadT(typeParsed: B): TempControlPeriodic.SetPoint_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.SetPoint_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlPeriodicSetPoint()
      parser.parseObjectNext()
      return TempControlPeriodic.SetPoint_Payload(value)
    }

    def parseTempControlPeriodicTempUnitType(): TempControlPeriodic.TempUnit.Type = {
      val r = parseTempControlPeriodicTempUnitT(F)
      return r
    }

    def parseTempControlPeriodicTempUnitT(typeParsed: B): TempControlPeriodic.TempUnit.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.TempUnit")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlPeriodic.TempUnit.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlPeriodic.TempUnit.")
          return TempControlPeriodic.TempUnit.byOrdinal(0).get
      }
    }

    def parseTempControlPeriodicTempUnit_Payload(): TempControlPeriodic.TempUnit_Payload = {
      val r = parseTempControlPeriodicTempUnit_PayloadT(F)
      return r
    }

    def parseTempControlPeriodicTempUnit_PayloadT(typeParsed: B): TempControlPeriodic.TempUnit_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.TempUnit_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlPeriodicTempUnitType()
      parser.parseObjectNext()
      return TempControlPeriodic.TempUnit_Payload(value)
    }

    def parseTempControlPeriodicFanCmdType(): TempControlPeriodic.FanCmd.Type = {
      val r = parseTempControlPeriodicFanCmdT(F)
      return r
    }

    def parseTempControlPeriodicFanCmdT(typeParsed: B): TempControlPeriodic.FanCmd.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.FanCmd")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlPeriodic.FanCmd.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlPeriodic.FanCmd.")
          return TempControlPeriodic.FanCmd.byOrdinal(0).get
      }
    }

    def parseTempControlPeriodicFanCmd_Payload(): TempControlPeriodic.FanCmd_Payload = {
      val r = parseTempControlPeriodicFanCmd_PayloadT(F)
      return r
    }

    def parseTempControlPeriodicFanCmd_PayloadT(typeParsed: B): TempControlPeriodic.FanCmd_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.FanCmd_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlPeriodicFanCmdType()
      parser.parseObjectNext()
      return TempControlPeriodic.FanCmd_Payload(value)
    }

    def parseTempControlPeriodicFanAckType(): TempControlPeriodic.FanAck.Type = {
      val r = parseTempControlPeriodicFanAckT(F)
      return r
    }

    def parseTempControlPeriodicFanAckT(typeParsed: B): TempControlPeriodic.FanAck.Type = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.FanAck")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      TempControlPeriodic.FanAck.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for TempControlPeriodic.FanAck.")
          return TempControlPeriodic.FanAck.byOrdinal(0).get
      }
    }

    def parseTempControlPeriodicFanAck_Payload(): TempControlPeriodic.FanAck_Payload = {
      val r = parseTempControlPeriodicFanAck_PayloadT(F)
      return r
    }

    def parseTempControlPeriodicFanAck_PayloadT(typeParsed: B): TempControlPeriodic.FanAck_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlPeriodic.FanAck_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseTempControlPeriodicFanAckType()
      parser.parseObjectNext()
      return TempControlPeriodic.FanAck_Payload(value)
    }

    def parseIsolette_Data_ModelPhysicalTemp(): Isolette_Data_Model.PhysicalTemp = {
      val r = parseIsolette_Data_ModelPhysicalTempT(F)
      return r
    }

    def parseIsolette_Data_ModelPhysicalTempT(typeParsed: B): Isolette_Data_Model.PhysicalTemp = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.PhysicalTemp")
      }
      parser.parseObjectKey("degrees")
      val degrees = parser.parseF32()
      parser.parseObjectNext()
      return Isolette_Data_Model.PhysicalTemp(degrees)
    }

    def parseIsolette_Data_ModelPhysicalTemp_Payload(): Isolette_Data_Model.PhysicalTemp_Payload = {
      val r = parseIsolette_Data_ModelPhysicalTemp_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelPhysicalTemp_PayloadT(typeParsed: B): Isolette_Data_Model.PhysicalTemp_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.PhysicalTemp_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelPhysicalTemp()
      parser.parseObjectNext()
      return Isolette_Data_Model.PhysicalTemp_Payload(value)
    }

    def parseIsolette_Data_ModelTempWstatus(): Isolette_Data_Model.TempWstatus = {
      val r = parseIsolette_Data_ModelTempWstatusT(F)
      return r
    }

    def parseIsolette_Data_ModelTempWstatusT(typeParsed: B): Isolette_Data_Model.TempWstatus = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.TempWstatus")
      }
      parser.parseObjectKey("degrees")
      val degrees = parser.parseF32()
      parser.parseObjectNext()
      parser.parseObjectKey("status")
      val status = parseIsolette_Data_ModelValueStatusType()
      parser.parseObjectNext()
      return Isolette_Data_Model.TempWstatus(degrees, status)
    }

    def parseIsolette_Data_ModelTempWstatus_Payload(): Isolette_Data_Model.TempWstatus_Payload = {
      val r = parseIsolette_Data_ModelTempWstatus_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelTempWstatus_PayloadT(typeParsed: B): Isolette_Data_Model.TempWstatus_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.TempWstatus_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelTempWstatus()
      parser.parseObjectNext()
      return Isolette_Data_Model.TempWstatus_Payload(value)
    }

    def parseIsolette_Data_ModelTemp(): Isolette_Data_Model.Temp = {
      val r = parseIsolette_Data_ModelTempT(F)
      return r
    }

    def parseIsolette_Data_ModelTempT(typeParsed: B): Isolette_Data_Model.Temp = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Temp")
      }
      parser.parseObjectKey("degrees")
      val degrees = parser.parseF32()
      parser.parseObjectNext()
      return Isolette_Data_Model.Temp(degrees)
    }

    def parseIsolette_Data_ModelTemp_Payload(): Isolette_Data_Model.Temp_Payload = {
      val r = parseIsolette_Data_ModelTemp_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelTemp_PayloadT(typeParsed: B): Isolette_Data_Model.Temp_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Temp_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelTemp()
      parser.parseObjectNext()
      return Isolette_Data_Model.Temp_Payload(value)
    }

    def parseIsolette_Data_ModelOn_OffType(): Isolette_Data_Model.On_Off.Type = {
      val r = parseIsolette_Data_ModelOn_OffT(F)
      return r
    }

    def parseIsolette_Data_ModelOn_OffT(typeParsed: B): Isolette_Data_Model.On_Off.Type = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.On_Off")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      Isolette_Data_Model.On_Off.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for Isolette_Data_Model.On_Off.")
          return Isolette_Data_Model.On_Off.byOrdinal(0).get
      }
    }

    def parseIsolette_Data_ModelOn_Off_Payload(): Isolette_Data_Model.On_Off_Payload = {
      val r = parseIsolette_Data_ModelOn_Off_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelOn_Off_PayloadT(typeParsed: B): Isolette_Data_Model.On_Off_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.On_Off_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelOn_OffType()
      parser.parseObjectNext()
      return Isolette_Data_Model.On_Off_Payload(value)
    }

    def parseIsolette_Data_ModelFailure_Flag(): Isolette_Data_Model.Failure_Flag = {
      val r = parseIsolette_Data_ModelFailure_FlagT(F)
      return r
    }

    def parseIsolette_Data_ModelFailure_FlagT(typeParsed: B): Isolette_Data_Model.Failure_Flag = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Failure_Flag")
      }
      parser.parseObjectKey("flag")
      val flag = parser.parseB()
      parser.parseObjectNext()
      return Isolette_Data_Model.Failure_Flag(flag)
    }

    def parseIsolette_Data_ModelFailure_Flag_Payload(): Isolette_Data_Model.Failure_Flag_Payload = {
      val r = parseIsolette_Data_ModelFailure_Flag_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelFailure_Flag_PayloadT(typeParsed: B): Isolette_Data_Model.Failure_Flag_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Failure_Flag_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelFailure_Flag()
      parser.parseObjectNext()
      return Isolette_Data_Model.Failure_Flag_Payload(value)
    }

    def parseIsolette_Data_ModelValueStatusType(): Isolette_Data_Model.ValueStatus.Type = {
      val r = parseIsolette_Data_ModelValueStatusT(F)
      return r
    }

    def parseIsolette_Data_ModelValueStatusT(typeParsed: B): Isolette_Data_Model.ValueStatus.Type = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.ValueStatus")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      Isolette_Data_Model.ValueStatus.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for Isolette_Data_Model.ValueStatus.")
          return Isolette_Data_Model.ValueStatus.byOrdinal(0).get
      }
    }

    def parseIsolette_Data_ModelValueStatus_Payload(): Isolette_Data_Model.ValueStatus_Payload = {
      val r = parseIsolette_Data_ModelValueStatus_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelValueStatus_PayloadT(typeParsed: B): Isolette_Data_Model.ValueStatus_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.ValueStatus_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelValueStatusType()
      parser.parseObjectNext()
      return Isolette_Data_Model.ValueStatus_Payload(value)
    }

    def parseIsolette_Data_ModelStatusType(): Isolette_Data_Model.Status.Type = {
      val r = parseIsolette_Data_ModelStatusT(F)
      return r
    }

    def parseIsolette_Data_ModelStatusT(typeParsed: B): Isolette_Data_Model.Status.Type = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Status")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      Isolette_Data_Model.Status.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for Isolette_Data_Model.Status.")
          return Isolette_Data_Model.Status.byOrdinal(0).get
      }
    }

    def parseIsolette_Data_ModelStatus_Payload(): Isolette_Data_Model.Status_Payload = {
      val r = parseIsolette_Data_ModelStatus_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelStatus_PayloadT(typeParsed: B): Isolette_Data_Model.Status_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Status_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelStatusType()
      parser.parseObjectNext()
      return Isolette_Data_Model.Status_Payload(value)
    }

    def parseIsolette_Data_ModelRegulator_ModeType(): Isolette_Data_Model.Regulator_Mode.Type = {
      val r = parseIsolette_Data_ModelRegulator_ModeT(F)
      return r
    }

    def parseIsolette_Data_ModelRegulator_ModeT(typeParsed: B): Isolette_Data_Model.Regulator_Mode.Type = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Regulator_Mode")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      Isolette_Data_Model.Regulator_Mode.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for Isolette_Data_Model.Regulator_Mode.")
          return Isolette_Data_Model.Regulator_Mode.byOrdinal(0).get
      }
    }

    def parseIsolette_Data_ModelRegulator_Mode_Payload(): Isolette_Data_Model.Regulator_Mode_Payload = {
      val r = parseIsolette_Data_ModelRegulator_Mode_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelRegulator_Mode_PayloadT(typeParsed: B): Isolette_Data_Model.Regulator_Mode_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Regulator_Mode_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelRegulator_ModeType()
      parser.parseObjectNext()
      return Isolette_Data_Model.Regulator_Mode_Payload(value)
    }

    def parseIsolette_Data_ModelMonitor_ModeType(): Isolette_Data_Model.Monitor_Mode.Type = {
      val r = parseIsolette_Data_ModelMonitor_ModeT(F)
      return r
    }

    def parseIsolette_Data_ModelMonitor_ModeT(typeParsed: B): Isolette_Data_Model.Monitor_Mode.Type = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Monitor_Mode")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      Isolette_Data_Model.Monitor_Mode.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for Isolette_Data_Model.Monitor_Mode.")
          return Isolette_Data_Model.Monitor_Mode.byOrdinal(0).get
      }
    }

    def parseIsolette_Data_ModelMonitor_Mode_Payload(): Isolette_Data_Model.Monitor_Mode_Payload = {
      val r = parseIsolette_Data_ModelMonitor_Mode_PayloadT(F)
      return r
    }

    def parseIsolette_Data_ModelMonitor_Mode_PayloadT(typeParsed: B): Isolette_Data_Model.Monitor_Mode_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Isolette_Data_Model.Monitor_Mode_Payload")
      }
      parser.parseObjectKey("value")
      val value = parseIsolette_Data_ModelMonitor_ModeType()
      parser.parseObjectNext()
      return Isolette_Data_Model.Monitor_Mode_Payload(value)
    }

    def parseBase_TypesBoolean_Payload(): Base_Types.Boolean_Payload = {
      val r = parseBase_TypesBoolean_PayloadT(F)
      return r
    }

    def parseBase_TypesBoolean_PayloadT(typeParsed: B): Base_Types.Boolean_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Boolean_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseB()
      parser.parseObjectNext()
      return Base_Types.Boolean_Payload(value)
    }

    def parseBase_TypesInteger_Payload(): Base_Types.Integer_Payload = {
      val r = parseBase_TypesInteger_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_PayloadT(typeParsed: B): Base_Types.Integer_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseZ()
      parser.parseObjectNext()
      return Base_Types.Integer_Payload(value)
    }

    def parseBase_TypesInteger_8_Payload(): Base_Types.Integer_8_Payload = {
      val r = parseBase_TypesInteger_8_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_8_PayloadT(typeParsed: B): Base_Types.Integer_8_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_8_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseS8()
      parser.parseObjectNext()
      return Base_Types.Integer_8_Payload(value)
    }

    def parseBase_TypesInteger_16_Payload(): Base_Types.Integer_16_Payload = {
      val r = parseBase_TypesInteger_16_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_16_PayloadT(typeParsed: B): Base_Types.Integer_16_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_16_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseS16()
      parser.parseObjectNext()
      return Base_Types.Integer_16_Payload(value)
    }

    def parseBase_TypesInteger_32_Payload(): Base_Types.Integer_32_Payload = {
      val r = parseBase_TypesInteger_32_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_32_PayloadT(typeParsed: B): Base_Types.Integer_32_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_32_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseS32()
      parser.parseObjectNext()
      return Base_Types.Integer_32_Payload(value)
    }

    def parseBase_TypesInteger_64_Payload(): Base_Types.Integer_64_Payload = {
      val r = parseBase_TypesInteger_64_PayloadT(F)
      return r
    }

    def parseBase_TypesInteger_64_PayloadT(typeParsed: B): Base_Types.Integer_64_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Integer_64_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseS64()
      parser.parseObjectNext()
      return Base_Types.Integer_64_Payload(value)
    }

    def parseBase_TypesUnsigned_8_Payload(): Base_Types.Unsigned_8_Payload = {
      val r = parseBase_TypesUnsigned_8_PayloadT(F)
      return r
    }

    def parseBase_TypesUnsigned_8_PayloadT(typeParsed: B): Base_Types.Unsigned_8_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Unsigned_8_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseU8()
      parser.parseObjectNext()
      return Base_Types.Unsigned_8_Payload(value)
    }

    def parseBase_TypesUnsigned_16_Payload(): Base_Types.Unsigned_16_Payload = {
      val r = parseBase_TypesUnsigned_16_PayloadT(F)
      return r
    }

    def parseBase_TypesUnsigned_16_PayloadT(typeParsed: B): Base_Types.Unsigned_16_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Unsigned_16_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseU16()
      parser.parseObjectNext()
      return Base_Types.Unsigned_16_Payload(value)
    }

    def parseBase_TypesUnsigned_32_Payload(): Base_Types.Unsigned_32_Payload = {
      val r = parseBase_TypesUnsigned_32_PayloadT(F)
      return r
    }

    def parseBase_TypesUnsigned_32_PayloadT(typeParsed: B): Base_Types.Unsigned_32_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Unsigned_32_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseU32()
      parser.parseObjectNext()
      return Base_Types.Unsigned_32_Payload(value)
    }

    def parseBase_TypesUnsigned_64_Payload(): Base_Types.Unsigned_64_Payload = {
      val r = parseBase_TypesUnsigned_64_PayloadT(F)
      return r
    }

    def parseBase_TypesUnsigned_64_PayloadT(typeParsed: B): Base_Types.Unsigned_64_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Unsigned_64_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseU64()
      parser.parseObjectNext()
      return Base_Types.Unsigned_64_Payload(value)
    }

    def parseBase_TypesFloat_Payload(): Base_Types.Float_Payload = {
      val r = parseBase_TypesFloat_PayloadT(F)
      return r
    }

    def parseBase_TypesFloat_PayloadT(typeParsed: B): Base_Types.Float_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Float_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseR()
      parser.parseObjectNext()
      return Base_Types.Float_Payload(value)
    }

    def parseBase_TypesFloat_32_Payload(): Base_Types.Float_32_Payload = {
      val r = parseBase_TypesFloat_32_PayloadT(F)
      return r
    }

    def parseBase_TypesFloat_32_PayloadT(typeParsed: B): Base_Types.Float_32_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Float_32_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseF32()
      parser.parseObjectNext()
      return Base_Types.Float_32_Payload(value)
    }

    def parseBase_TypesFloat_64_Payload(): Base_Types.Float_64_Payload = {
      val r = parseBase_TypesFloat_64_PayloadT(F)
      return r
    }

    def parseBase_TypesFloat_64_PayloadT(typeParsed: B): Base_Types.Float_64_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Float_64_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseF64()
      parser.parseObjectNext()
      return Base_Types.Float_64_Payload(value)
    }

    def parseBase_TypesCharacter_Payload(): Base_Types.Character_Payload = {
      val r = parseBase_TypesCharacter_PayloadT(F)
      return r
    }

    def parseBase_TypesCharacter_PayloadT(typeParsed: B): Base_Types.Character_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Character_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseC()
      parser.parseObjectNext()
      return Base_Types.Character_Payload(value)
    }

    def parseBase_TypesString_Payload(): Base_Types.String_Payload = {
      val r = parseBase_TypesString_PayloadT(F)
      return r
    }

    def parseBase_TypesString_PayloadT(typeParsed: B): Base_Types.String_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.String_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseString()
      parser.parseObjectNext()
      return Base_Types.String_Payload(value)
    }

    def parseBase_TypesBits_Payload(): Base_Types.Bits_Payload = {
      val r = parseBase_TypesBits_PayloadT(F)
      return r
    }

    def parseBase_TypesBits_PayloadT(typeParsed: B): Base_Types.Bits_Payload = {
      if (!typeParsed) {
        parser.parseObjectType("Base_Types.Bits_Payload")
      }
      parser.parseObjectKey("value")
      val value = parser.parseISZ(parser.parseB _)
      parser.parseObjectNext()
      return Base_Types.Bits_Payload(value)
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container = {
      val t = parser.parseObjectTypes(ISZ("TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS"))
      t.native match {
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(T); return r
        case _ => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(T); return r
      }
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P = {
      val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P")
      }
      return TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P()
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS = {
      val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS")
      }
      return TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS()
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container = {
      val t = parser.parseObjectTypes(ISZ("TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS"))
      t.native match {
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(T); return r
        case _ => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(T); return r
      }
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P = {
      val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P")
      }
      parser.parseObjectKey("api_tempChanged")
      val api_tempChanged = parser.parseOption(parse_artEmpty _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_currentTemp")
      val api_currentTemp = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P(api_tempChanged, api_currentTemp)
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS = {
      val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS")
      }
      parser.parseObjectKey("api_tempChanged")
      val api_tempChanged = parser.parseOption(parse_artEmpty _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_currentTemp")
      val api_currentTemp = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS(api_tempChanged, api_currentTemp)
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container = {
      val t = parser.parseObjectTypes(ISZ("TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS"))
      t.native match {
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(T); return r
        case _ => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(T); return r
      }
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P = {
      val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P")
      }
      parser.parseObjectKey("api_tempChanged")
      val api_tempChanged = parser.parseOption(parse_artEmpty _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_fanAck")
      val api_fanAck = parser.parseOption(parseTempControlMixedSeL4CAmKESFanAckType _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_setPoint")
      val api_setPoint = parser.parseOption(parseTempControlMixedSeL4CAmKESSetPoint _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_currentTemp")
      val api_currentTemp = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS = {
      val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS")
      }
      parser.parseObjectKey("In_currentFanState")
      val In_currentFanState = parseTempControlMixedSeL4CAmKESFanCmdType()
      parser.parseObjectNext()
      parser.parseObjectKey("In_currentSetPoint")
      val In_currentSetPoint = parseTempControlMixedSeL4CAmKESSetPoint()
      parser.parseObjectNext()
      parser.parseObjectKey("In_latestTemp")
      val In_latestTemp = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      parser.parseObjectKey("api_tempChanged")
      val api_tempChanged = parser.parseOption(parse_artEmpty _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_fanAck")
      val api_fanAck = parser.parseOption(parseTempControlMixedSeL4CAmKESFanAckType _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_setPoint")
      val api_setPoint = parser.parseOption(parseTempControlMixedSeL4CAmKESSetPoint _)
      parser.parseObjectNext()
      parser.parseObjectKey("api_currentTemp")
      val api_currentTemp = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS(In_currentFanState, In_currentSetPoint, In_latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container = {
      val t = parser.parseObjectTypes(ISZ("TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS"))
      t.native match {
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
        case _ => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
      }
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P = {
      val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P")
      }
      parser.parseObjectKey("api_fanCmd")
      val api_fanCmd = parser.parseOption(parseTempControlMixedSeL4CAmKESFanCmdType _)
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P(api_fanCmd)
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS = {
      val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS")
      }
      parser.parseObjectKey("currentFanState")
      val currentFanState = parseTempControlMixedSeL4CAmKESFanCmdType()
      parser.parseObjectNext()
      parser.parseObjectKey("currentSetPoint")
      val currentSetPoint = parseTempControlMixedSeL4CAmKESSetPoint()
      parser.parseObjectNext()
      parser.parseObjectKey("latestTemp")
      val latestTemp = parseTempControlMixedSeL4CAmKESTemperature()
      parser.parseObjectNext()
      parser.parseObjectKey("api_fanCmd")
      val api_fanCmd = parser.parseOption(parseTempControlMixedSeL4CAmKESFanCmdType _)
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS(currentFanState, currentSetPoint, latestTemp, api_fanCmd)
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container = {
      val t = parser.parseObjectTypes(ISZ("TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P", "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS"))
      t.native match {
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(T); return r
        case _ => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(T); return r
      }
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P = {
      val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P")
      }
      parser.parseObjectKey("api_fanCmd")
      val api_fanCmd = parser.parseOption(parseTempControlMixedSeL4CAmKESFanCmdType _)
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P(api_fanCmd)
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS = {
      val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS")
      }
      parser.parseObjectKey("api_fanCmd")
      val api_fanCmd = parser.parseOption(parseTempControlMixedSeL4CAmKESFanCmdType _)
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS(api_fanCmd)
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container = {
      val t = parser.parseObjectTypes(ISZ("TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P", "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS"))
      t.native match {
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(T); return r
        case _ => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(T); return r
      }
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P = {
      val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(typeParsed: B): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P")
      }
      parser.parseObjectKey("api_fanAck")
      val api_fanAck = parser.parseOption(parseTempControlMixedSeL4CAmKESFanAckType _)
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P(api_fanAck)
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS = {
      val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(F)
      return r
    }

    def parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(typeParsed: B): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS = {
      if (!typeParsed) {
        parser.parseObjectType("TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS")
      }
      parser.parseObjectKey("api_fanAck")
      val api_fanAck = parser.parseOption(parseTempControlMixedSeL4CAmKESFanAckType _)
      parser.parseObjectNext()
      return TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS(api_fanAck)
    }

    def parseruntimemonitorObservationKindType(): runtimemonitor.ObservationKind.Type = {
      val r = parseruntimemonitorObservationKindT(F)
      return r
    }

    def parseruntimemonitorObservationKindT(typeParsed: B): runtimemonitor.ObservationKind.Type = {
      if (!typeParsed) {
        parser.parseObjectType("runtimemonitor.ObservationKind")
      }
      parser.parseObjectKey("value")
      var i = parser.offset
      val s = parser.parseString()
      parser.parseObjectNext()
      runtimemonitor.ObservationKind.byName(s) match {
        case Some(r) => return r
        case _ =>
          parser.parseException(i, s"Invalid element name '$s' for runtimemonitor.ObservationKind.")
          return runtimemonitor.ObservationKind.byOrdinal(0).get
      }
    }

    def parseutilContainer(): util.Container = {
      val t = parser.parseObjectTypes(ISZ("util.EmptyContainer", "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P", "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS", "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P", "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS"))
      t.native match {
        case "util.EmptyContainer" => val r = parseutilEmptyContainerT(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
        case _ => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
      }
    }

    def parseutilEmptyContainer(): util.EmptyContainer = {
      val r = parseutilEmptyContainerT(F)
      return r
    }

    def parseutilEmptyContainerT(typeParsed: B): util.EmptyContainer = {
      if (!typeParsed) {
        parser.parseObjectType("util.EmptyContainer")
      }
      return util.EmptyContainer()
    }

    def parse_artDataContent(): art.DataContent = {
      val t = parser.parseObjectTypes(ISZ("art.Empty", "Base_Types.Boolean_Payload", "Base_Types.Integer_Payload", "Base_Types.Integer_8_Payload", "Base_Types.Integer_16_Payload", "Base_Types.Integer_32_Payload", "Base_Types.Integer_64_Payload", "Base_Types.Unsigned_8_Payload", "Base_Types.Unsigned_16_Payload", "Base_Types.Unsigned_32_Payload", "Base_Types.Unsigned_64_Payload", "Base_Types.Float_Payload", "Base_Types.Float_32_Payload", "Base_Types.Float_64_Payload", "Base_Types.Character_Payload", "Base_Types.String_Payload", "Base_Types.Bits_Payload", "util.EmptyContainer", "TempControlMixed.FanCmd_Payload", "TempControlMixed.FanAck_Payload", "Isolette_Data_Model.Temp_Payload", "TempControlMixed.TempUnit_Payload", "Isolette_Environment.Heat_Payload", "TempControlMixed.SetPoint_Payload", "TempControlPeriodic.FanCmd_Payload", "Isolette_Data_Model.On_Off_Payload", "TempControlPeriodic.FanAck_Payload", "Isolette_Data_Model.Status_Payload", "TempControlPeriodic.TempUnit_Payload", "TempControlMixed.Temperature_Payload", "TempControlPeriodic.SetPoint_Payload", "Isolette_Data_Model.ValueStatus_Payload", "Isolette_Data_Model.TempWstatus_Payload", "TempControlPeriodic.Temperature_Payload", "Isolette_Data_Model.Monitor_Mode_Payload", "Isolette_Data_Model.Failure_Flag_Payload", "Isolette_Data_Model.PhysicalTemp_Payload", "TempControlMixedSeL4CAmKES.FanCmd_Payload", "TempControlMixedSeL4CAmKES.FanAck_Payload", "Isolette_Data_Model.Regulator_Mode_Payload", "TempControlMixedSeL4CAmKES.TempUnit_Payload", "TempControlMixedSeL4CAmKES.SetPoint_Payload", "Isolette_Environment.Air_Interaction_Payload", "TempControlMixedSeL4CAmKES.Temperature_Payload", "Isolette_Environment.Interface_Interaction_Payload", "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P", "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS", "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P", "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P", "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P", "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS"))
      t.native match {
        case "art.Empty" => val r = parse_artEmptyT(T); return r
        case "Base_Types.Boolean_Payload" => val r = parseBase_TypesBoolean_PayloadT(T); return r
        case "Base_Types.Integer_Payload" => val r = parseBase_TypesInteger_PayloadT(T); return r
        case "Base_Types.Integer_8_Payload" => val r = parseBase_TypesInteger_8_PayloadT(T); return r
        case "Base_Types.Integer_16_Payload" => val r = parseBase_TypesInteger_16_PayloadT(T); return r
        case "Base_Types.Integer_32_Payload" => val r = parseBase_TypesInteger_32_PayloadT(T); return r
        case "Base_Types.Integer_64_Payload" => val r = parseBase_TypesInteger_64_PayloadT(T); return r
        case "Base_Types.Unsigned_8_Payload" => val r = parseBase_TypesUnsigned_8_PayloadT(T); return r
        case "Base_Types.Unsigned_16_Payload" => val r = parseBase_TypesUnsigned_16_PayloadT(T); return r
        case "Base_Types.Unsigned_32_Payload" => val r = parseBase_TypesUnsigned_32_PayloadT(T); return r
        case "Base_Types.Unsigned_64_Payload" => val r = parseBase_TypesUnsigned_64_PayloadT(T); return r
        case "Base_Types.Float_Payload" => val r = parseBase_TypesFloat_PayloadT(T); return r
        case "Base_Types.Float_32_Payload" => val r = parseBase_TypesFloat_32_PayloadT(T); return r
        case "Base_Types.Float_64_Payload" => val r = parseBase_TypesFloat_64_PayloadT(T); return r
        case "Base_Types.Character_Payload" => val r = parseBase_TypesCharacter_PayloadT(T); return r
        case "Base_Types.String_Payload" => val r = parseBase_TypesString_PayloadT(T); return r
        case "Base_Types.Bits_Payload" => val r = parseBase_TypesBits_PayloadT(T); return r
        case "util.EmptyContainer" => val r = parseutilEmptyContainerT(T); return r
        case "TempControlMixed.FanCmd_Payload" => val r = parseTempControlMixedFanCmd_PayloadT(T); return r
        case "TempControlMixed.FanAck_Payload" => val r = parseTempControlMixedFanAck_PayloadT(T); return r
        case "Isolette_Data_Model.Temp_Payload" => val r = parseIsolette_Data_ModelTemp_PayloadT(T); return r
        case "TempControlMixed.TempUnit_Payload" => val r = parseTempControlMixedTempUnit_PayloadT(T); return r
        case "Isolette_Environment.Heat_Payload" => val r = parseIsolette_EnvironmentHeat_PayloadT(T); return r
        case "TempControlMixed.SetPoint_Payload" => val r = parseTempControlMixedSetPoint_PayloadT(T); return r
        case "TempControlPeriodic.FanCmd_Payload" => val r = parseTempControlPeriodicFanCmd_PayloadT(T); return r
        case "Isolette_Data_Model.On_Off_Payload" => val r = parseIsolette_Data_ModelOn_Off_PayloadT(T); return r
        case "TempControlPeriodic.FanAck_Payload" => val r = parseTempControlPeriodicFanAck_PayloadT(T); return r
        case "Isolette_Data_Model.Status_Payload" => val r = parseIsolette_Data_ModelStatus_PayloadT(T); return r
        case "TempControlPeriodic.TempUnit_Payload" => val r = parseTempControlPeriodicTempUnit_PayloadT(T); return r
        case "TempControlMixed.Temperature_Payload" => val r = parseTempControlMixedTemperature_PayloadT(T); return r
        case "TempControlPeriodic.SetPoint_Payload" => val r = parseTempControlPeriodicSetPoint_PayloadT(T); return r
        case "Isolette_Data_Model.ValueStatus_Payload" => val r = parseIsolette_Data_ModelValueStatus_PayloadT(T); return r
        case "Isolette_Data_Model.TempWstatus_Payload" => val r = parseIsolette_Data_ModelTempWstatus_PayloadT(T); return r
        case "TempControlPeriodic.Temperature_Payload" => val r = parseTempControlPeriodicTemperature_PayloadT(T); return r
        case "Isolette_Data_Model.Monitor_Mode_Payload" => val r = parseIsolette_Data_ModelMonitor_Mode_PayloadT(T); return r
        case "Isolette_Data_Model.Failure_Flag_Payload" => val r = parseIsolette_Data_ModelFailure_Flag_PayloadT(T); return r
        case "Isolette_Data_Model.PhysicalTemp_Payload" => val r = parseIsolette_Data_ModelPhysicalTemp_PayloadT(T); return r
        case "TempControlMixedSeL4CAmKES.FanCmd_Payload" => val r = parseTempControlMixedSeL4CAmKESFanCmd_PayloadT(T); return r
        case "TempControlMixedSeL4CAmKES.FanAck_Payload" => val r = parseTempControlMixedSeL4CAmKESFanAck_PayloadT(T); return r
        case "Isolette_Data_Model.Regulator_Mode_Payload" => val r = parseIsolette_Data_ModelRegulator_Mode_PayloadT(T); return r
        case "TempControlMixedSeL4CAmKES.TempUnit_Payload" => val r = parseTempControlMixedSeL4CAmKESTempUnit_PayloadT(T); return r
        case "TempControlMixedSeL4CAmKES.SetPoint_Payload" => val r = parseTempControlMixedSeL4CAmKESSetPoint_PayloadT(T); return r
        case "Isolette_Environment.Air_Interaction_Payload" => val r = parseIsolette_EnvironmentAir_Interaction_PayloadT(T); return r
        case "TempControlMixedSeL4CAmKES.Temperature_Payload" => val r = parseTempControlMixedSeL4CAmKESTemperature_PayloadT(T); return r
        case "Isolette_Environment.Interface_Interaction_Payload" => val r = parseIsolette_EnvironmentInterface_Interaction_PayloadT(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PST(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PT(T); return r
        case "TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS" => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
        case _ => val r = parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PST(T); return r
      }
    }

    def parse_artEmpty(): art.Empty = {
      val r = parse_artEmptyT(F)
      return r
    }

    def parse_artEmptyT(typeParsed: B): art.Empty = {
      if (!typeParsed) {
        parser.parseObjectType("art.Empty")
      }
      return art.Empty()
    }

    def eof(): B = {
      val r = parser.eof()
      return r
    }

  }

  def to[T](s: String, f: Parser => T): Either[T, Json.ErrorMsg] = {
    val parser = Parser(s)
    val r = f(parser)
    parser.eof()
    parser.errorOpt match {
      case Some(e) => return Either.Right(e)
      case _ => return Either.Left(r)
    }
  }

  def fromTempControlMixedTemperature(o: TempControlMixed.Temperature, isCompact: B): String = {
    val st = Printer.printTempControlMixedTemperature(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedTemperature(s: String): Either[TempControlMixed.Temperature, Json.ErrorMsg] = {
    def fTempControlMixedTemperature(parser: Parser): TempControlMixed.Temperature = {
      val r = parser.parseTempControlMixedTemperature()
      return r
    }
    val r = to(s, fTempControlMixedTemperature _)
    return r
  }

  def fromTempControlMixedTemperature_Payload(o: TempControlMixed.Temperature_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedTemperature_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedTemperature_Payload(s: String): Either[TempControlMixed.Temperature_Payload, Json.ErrorMsg] = {
    def fTempControlMixedTemperature_Payload(parser: Parser): TempControlMixed.Temperature_Payload = {
      val r = parser.parseTempControlMixedTemperature_Payload()
      return r
    }
    val r = to(s, fTempControlMixedTemperature_Payload _)
    return r
  }

  def fromTempControlMixedSetPoint(o: TempControlMixed.SetPoint, isCompact: B): String = {
    val st = Printer.printTempControlMixedSetPoint(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSetPoint(s: String): Either[TempControlMixed.SetPoint, Json.ErrorMsg] = {
    def fTempControlMixedSetPoint(parser: Parser): TempControlMixed.SetPoint = {
      val r = parser.parseTempControlMixedSetPoint()
      return r
    }
    val r = to(s, fTempControlMixedSetPoint _)
    return r
  }

  def fromTempControlMixedSetPoint_Payload(o: TempControlMixed.SetPoint_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedSetPoint_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSetPoint_Payload(s: String): Either[TempControlMixed.SetPoint_Payload, Json.ErrorMsg] = {
    def fTempControlMixedSetPoint_Payload(parser: Parser): TempControlMixed.SetPoint_Payload = {
      val r = parser.parseTempControlMixedSetPoint_Payload()
      return r
    }
    val r = to(s, fTempControlMixedSetPoint_Payload _)
    return r
  }

  def fromTempControlMixedTempUnit_Payload(o: TempControlMixed.TempUnit_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedTempUnit_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedTempUnit_Payload(s: String): Either[TempControlMixed.TempUnit_Payload, Json.ErrorMsg] = {
    def fTempControlMixedTempUnit_Payload(parser: Parser): TempControlMixed.TempUnit_Payload = {
      val r = parser.parseTempControlMixedTempUnit_Payload()
      return r
    }
    val r = to(s, fTempControlMixedTempUnit_Payload _)
    return r
  }

  def fromTempControlMixedFanCmd_Payload(o: TempControlMixed.FanCmd_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedFanCmd_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedFanCmd_Payload(s: String): Either[TempControlMixed.FanCmd_Payload, Json.ErrorMsg] = {
    def fTempControlMixedFanCmd_Payload(parser: Parser): TempControlMixed.FanCmd_Payload = {
      val r = parser.parseTempControlMixedFanCmd_Payload()
      return r
    }
    val r = to(s, fTempControlMixedFanCmd_Payload _)
    return r
  }

  def fromTempControlMixedFanAck_Payload(o: TempControlMixed.FanAck_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedFanAck_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedFanAck_Payload(s: String): Either[TempControlMixed.FanAck_Payload, Json.ErrorMsg] = {
    def fTempControlMixedFanAck_Payload(parser: Parser): TempControlMixed.FanAck_Payload = {
      val r = parser.parseTempControlMixedFanAck_Payload()
      return r
    }
    val r = to(s, fTempControlMixedFanAck_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTemperature(o: TempControlMixedSeL4CAmKES.Temperature, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTemperature(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTemperature(s: String): Either[TempControlMixedSeL4CAmKES.Temperature, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTemperature(parser: Parser): TempControlMixedSeL4CAmKES.Temperature = {
      val r = parser.parseTempControlMixedSeL4CAmKESTemperature()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTemperature _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTemperature_Payload(o: TempControlMixedSeL4CAmKES.Temperature_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTemperature_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTemperature_Payload(s: String): Either[TempControlMixedSeL4CAmKES.Temperature_Payload, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTemperature_Payload(parser: Parser): TempControlMixedSeL4CAmKES.Temperature_Payload = {
      val r = parser.parseTempControlMixedSeL4CAmKESTemperature_Payload()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTemperature_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESSetPoint(o: TempControlMixedSeL4CAmKES.SetPoint, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESSetPoint(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESSetPoint(s: String): Either[TempControlMixedSeL4CAmKES.SetPoint, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESSetPoint(parser: Parser): TempControlMixedSeL4CAmKES.SetPoint = {
      val r = parser.parseTempControlMixedSeL4CAmKESSetPoint()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESSetPoint _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESSetPoint_Payload(o: TempControlMixedSeL4CAmKES.SetPoint_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESSetPoint_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESSetPoint_Payload(s: String): Either[TempControlMixedSeL4CAmKES.SetPoint_Payload, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESSetPoint_Payload(parser: Parser): TempControlMixedSeL4CAmKES.SetPoint_Payload = {
      val r = parser.parseTempControlMixedSeL4CAmKESSetPoint_Payload()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESSetPoint_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempUnit_Payload(o: TempControlMixedSeL4CAmKES.TempUnit_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempUnit_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempUnit_Payload(s: String): Either[TempControlMixedSeL4CAmKES.TempUnit_Payload, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempUnit_Payload(parser: Parser): TempControlMixedSeL4CAmKES.TempUnit_Payload = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempUnit_Payload()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempUnit_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFanCmd_Payload(o: TempControlMixedSeL4CAmKES.FanCmd_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESFanCmd_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESFanCmd_Payload(s: String): Either[TempControlMixedSeL4CAmKES.FanCmd_Payload, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFanCmd_Payload(parser: Parser): TempControlMixedSeL4CAmKES.FanCmd_Payload = {
      val r = parser.parseTempControlMixedSeL4CAmKESFanCmd_Payload()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESFanCmd_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFanAck_Payload(o: TempControlMixedSeL4CAmKES.FanAck_Payload, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESFanAck_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESFanAck_Payload(s: String): Either[TempControlMixedSeL4CAmKES.FanAck_Payload, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFanAck_Payload(parser: Parser): TempControlMixedSeL4CAmKES.FanAck_Payload = {
      val r = parser.parseTempControlMixedSeL4CAmKESFanAck_Payload()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESFanAck_Payload _)
    return r
  }

  def fromIsolette_EnvironmentHeat(o: Isolette_Environment.Heat, isCompact: B): String = {
    val st = Printer.printIsolette_EnvironmentHeat(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_EnvironmentHeat(s: String): Either[Isolette_Environment.Heat, Json.ErrorMsg] = {
    def fIsolette_EnvironmentHeat(parser: Parser): Isolette_Environment.Heat = {
      val r = parser.parseIsolette_EnvironmentHeat()
      return r
    }
    val r = to(s, fIsolette_EnvironmentHeat _)
    return r
  }

  def fromIsolette_EnvironmentHeat_Payload(o: Isolette_Environment.Heat_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_EnvironmentHeat_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_EnvironmentHeat_Payload(s: String): Either[Isolette_Environment.Heat_Payload, Json.ErrorMsg] = {
    def fIsolette_EnvironmentHeat_Payload(parser: Parser): Isolette_Environment.Heat_Payload = {
      val r = parser.parseIsolette_EnvironmentHeat_Payload()
      return r
    }
    val r = to(s, fIsolette_EnvironmentHeat_Payload _)
    return r
  }

  def fromIsolette_EnvironmentInterface_Interaction(o: Isolette_Environment.Interface_Interaction, isCompact: B): String = {
    val st = Printer.printIsolette_EnvironmentInterface_Interaction(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_EnvironmentInterface_Interaction(s: String): Either[Isolette_Environment.Interface_Interaction, Json.ErrorMsg] = {
    def fIsolette_EnvironmentInterface_Interaction(parser: Parser): Isolette_Environment.Interface_Interaction = {
      val r = parser.parseIsolette_EnvironmentInterface_Interaction()
      return r
    }
    val r = to(s, fIsolette_EnvironmentInterface_Interaction _)
    return r
  }

  def fromIsolette_EnvironmentInterface_Interaction_Payload(o: Isolette_Environment.Interface_Interaction_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_EnvironmentInterface_Interaction_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_EnvironmentInterface_Interaction_Payload(s: String): Either[Isolette_Environment.Interface_Interaction_Payload, Json.ErrorMsg] = {
    def fIsolette_EnvironmentInterface_Interaction_Payload(parser: Parser): Isolette_Environment.Interface_Interaction_Payload = {
      val r = parser.parseIsolette_EnvironmentInterface_Interaction_Payload()
      return r
    }
    val r = to(s, fIsolette_EnvironmentInterface_Interaction_Payload _)
    return r
  }

  def fromIsolette_EnvironmentAir_Interaction(o: Isolette_Environment.Air_Interaction, isCompact: B): String = {
    val st = Printer.printIsolette_EnvironmentAir_Interaction(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_EnvironmentAir_Interaction(s: String): Either[Isolette_Environment.Air_Interaction, Json.ErrorMsg] = {
    def fIsolette_EnvironmentAir_Interaction(parser: Parser): Isolette_Environment.Air_Interaction = {
      val r = parser.parseIsolette_EnvironmentAir_Interaction()
      return r
    }
    val r = to(s, fIsolette_EnvironmentAir_Interaction _)
    return r
  }

  def fromIsolette_EnvironmentAir_Interaction_Payload(o: Isolette_Environment.Air_Interaction_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_EnvironmentAir_Interaction_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_EnvironmentAir_Interaction_Payload(s: String): Either[Isolette_Environment.Air_Interaction_Payload, Json.ErrorMsg] = {
    def fIsolette_EnvironmentAir_Interaction_Payload(parser: Parser): Isolette_Environment.Air_Interaction_Payload = {
      val r = parser.parseIsolette_EnvironmentAir_Interaction_Payload()
      return r
    }
    val r = to(s, fIsolette_EnvironmentAir_Interaction_Payload _)
    return r
  }

  def fromTempControlPeriodicTemperature(o: TempControlPeriodic.Temperature, isCompact: B): String = {
    val st = Printer.printTempControlPeriodicTemperature(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlPeriodicTemperature(s: String): Either[TempControlPeriodic.Temperature, Json.ErrorMsg] = {
    def fTempControlPeriodicTemperature(parser: Parser): TempControlPeriodic.Temperature = {
      val r = parser.parseTempControlPeriodicTemperature()
      return r
    }
    val r = to(s, fTempControlPeriodicTemperature _)
    return r
  }

  def fromTempControlPeriodicTemperature_Payload(o: TempControlPeriodic.Temperature_Payload, isCompact: B): String = {
    val st = Printer.printTempControlPeriodicTemperature_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlPeriodicTemperature_Payload(s: String): Either[TempControlPeriodic.Temperature_Payload, Json.ErrorMsg] = {
    def fTempControlPeriodicTemperature_Payload(parser: Parser): TempControlPeriodic.Temperature_Payload = {
      val r = parser.parseTempControlPeriodicTemperature_Payload()
      return r
    }
    val r = to(s, fTempControlPeriodicTemperature_Payload _)
    return r
  }

  def fromTempControlPeriodicSetPoint(o: TempControlPeriodic.SetPoint, isCompact: B): String = {
    val st = Printer.printTempControlPeriodicSetPoint(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlPeriodicSetPoint(s: String): Either[TempControlPeriodic.SetPoint, Json.ErrorMsg] = {
    def fTempControlPeriodicSetPoint(parser: Parser): TempControlPeriodic.SetPoint = {
      val r = parser.parseTempControlPeriodicSetPoint()
      return r
    }
    val r = to(s, fTempControlPeriodicSetPoint _)
    return r
  }

  def fromTempControlPeriodicSetPoint_Payload(o: TempControlPeriodic.SetPoint_Payload, isCompact: B): String = {
    val st = Printer.printTempControlPeriodicSetPoint_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlPeriodicSetPoint_Payload(s: String): Either[TempControlPeriodic.SetPoint_Payload, Json.ErrorMsg] = {
    def fTempControlPeriodicSetPoint_Payload(parser: Parser): TempControlPeriodic.SetPoint_Payload = {
      val r = parser.parseTempControlPeriodicSetPoint_Payload()
      return r
    }
    val r = to(s, fTempControlPeriodicSetPoint_Payload _)
    return r
  }

  def fromTempControlPeriodicTempUnit_Payload(o: TempControlPeriodic.TempUnit_Payload, isCompact: B): String = {
    val st = Printer.printTempControlPeriodicTempUnit_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlPeriodicTempUnit_Payload(s: String): Either[TempControlPeriodic.TempUnit_Payload, Json.ErrorMsg] = {
    def fTempControlPeriodicTempUnit_Payload(parser: Parser): TempControlPeriodic.TempUnit_Payload = {
      val r = parser.parseTempControlPeriodicTempUnit_Payload()
      return r
    }
    val r = to(s, fTempControlPeriodicTempUnit_Payload _)
    return r
  }

  def fromTempControlPeriodicFanCmd_Payload(o: TempControlPeriodic.FanCmd_Payload, isCompact: B): String = {
    val st = Printer.printTempControlPeriodicFanCmd_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlPeriodicFanCmd_Payload(s: String): Either[TempControlPeriodic.FanCmd_Payload, Json.ErrorMsg] = {
    def fTempControlPeriodicFanCmd_Payload(parser: Parser): TempControlPeriodic.FanCmd_Payload = {
      val r = parser.parseTempControlPeriodicFanCmd_Payload()
      return r
    }
    val r = to(s, fTempControlPeriodicFanCmd_Payload _)
    return r
  }

  def fromTempControlPeriodicFanAck_Payload(o: TempControlPeriodic.FanAck_Payload, isCompact: B): String = {
    val st = Printer.printTempControlPeriodicFanAck_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlPeriodicFanAck_Payload(s: String): Either[TempControlPeriodic.FanAck_Payload, Json.ErrorMsg] = {
    def fTempControlPeriodicFanAck_Payload(parser: Parser): TempControlPeriodic.FanAck_Payload = {
      val r = parser.parseTempControlPeriodicFanAck_Payload()
      return r
    }
    val r = to(s, fTempControlPeriodicFanAck_Payload _)
    return r
  }

  def fromIsolette_Data_ModelPhysicalTemp(o: Isolette_Data_Model.PhysicalTemp, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelPhysicalTemp(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelPhysicalTemp(s: String): Either[Isolette_Data_Model.PhysicalTemp, Json.ErrorMsg] = {
    def fIsolette_Data_ModelPhysicalTemp(parser: Parser): Isolette_Data_Model.PhysicalTemp = {
      val r = parser.parseIsolette_Data_ModelPhysicalTemp()
      return r
    }
    val r = to(s, fIsolette_Data_ModelPhysicalTemp _)
    return r
  }

  def fromIsolette_Data_ModelPhysicalTemp_Payload(o: Isolette_Data_Model.PhysicalTemp_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelPhysicalTemp_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelPhysicalTemp_Payload(s: String): Either[Isolette_Data_Model.PhysicalTemp_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelPhysicalTemp_Payload(parser: Parser): Isolette_Data_Model.PhysicalTemp_Payload = {
      val r = parser.parseIsolette_Data_ModelPhysicalTemp_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelPhysicalTemp_Payload _)
    return r
  }

  def fromIsolette_Data_ModelTempWstatus(o: Isolette_Data_Model.TempWstatus, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelTempWstatus(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelTempWstatus(s: String): Either[Isolette_Data_Model.TempWstatus, Json.ErrorMsg] = {
    def fIsolette_Data_ModelTempWstatus(parser: Parser): Isolette_Data_Model.TempWstatus = {
      val r = parser.parseIsolette_Data_ModelTempWstatus()
      return r
    }
    val r = to(s, fIsolette_Data_ModelTempWstatus _)
    return r
  }

  def fromIsolette_Data_ModelTempWstatus_Payload(o: Isolette_Data_Model.TempWstatus_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelTempWstatus_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelTempWstatus_Payload(s: String): Either[Isolette_Data_Model.TempWstatus_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelTempWstatus_Payload(parser: Parser): Isolette_Data_Model.TempWstatus_Payload = {
      val r = parser.parseIsolette_Data_ModelTempWstatus_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelTempWstatus_Payload _)
    return r
  }

  def fromIsolette_Data_ModelTemp(o: Isolette_Data_Model.Temp, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelTemp(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelTemp(s: String): Either[Isolette_Data_Model.Temp, Json.ErrorMsg] = {
    def fIsolette_Data_ModelTemp(parser: Parser): Isolette_Data_Model.Temp = {
      val r = parser.parseIsolette_Data_ModelTemp()
      return r
    }
    val r = to(s, fIsolette_Data_ModelTemp _)
    return r
  }

  def fromIsolette_Data_ModelTemp_Payload(o: Isolette_Data_Model.Temp_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelTemp_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelTemp_Payload(s: String): Either[Isolette_Data_Model.Temp_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelTemp_Payload(parser: Parser): Isolette_Data_Model.Temp_Payload = {
      val r = parser.parseIsolette_Data_ModelTemp_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelTemp_Payload _)
    return r
  }

  def fromIsolette_Data_ModelOn_Off_Payload(o: Isolette_Data_Model.On_Off_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelOn_Off_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelOn_Off_Payload(s: String): Either[Isolette_Data_Model.On_Off_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelOn_Off_Payload(parser: Parser): Isolette_Data_Model.On_Off_Payload = {
      val r = parser.parseIsolette_Data_ModelOn_Off_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelOn_Off_Payload _)
    return r
  }

  def fromIsolette_Data_ModelFailure_Flag(o: Isolette_Data_Model.Failure_Flag, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelFailure_Flag(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelFailure_Flag(s: String): Either[Isolette_Data_Model.Failure_Flag, Json.ErrorMsg] = {
    def fIsolette_Data_ModelFailure_Flag(parser: Parser): Isolette_Data_Model.Failure_Flag = {
      val r = parser.parseIsolette_Data_ModelFailure_Flag()
      return r
    }
    val r = to(s, fIsolette_Data_ModelFailure_Flag _)
    return r
  }

  def fromIsolette_Data_ModelFailure_Flag_Payload(o: Isolette_Data_Model.Failure_Flag_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelFailure_Flag_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelFailure_Flag_Payload(s: String): Either[Isolette_Data_Model.Failure_Flag_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelFailure_Flag_Payload(parser: Parser): Isolette_Data_Model.Failure_Flag_Payload = {
      val r = parser.parseIsolette_Data_ModelFailure_Flag_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelFailure_Flag_Payload _)
    return r
  }

  def fromIsolette_Data_ModelValueStatus_Payload(o: Isolette_Data_Model.ValueStatus_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelValueStatus_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelValueStatus_Payload(s: String): Either[Isolette_Data_Model.ValueStatus_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelValueStatus_Payload(parser: Parser): Isolette_Data_Model.ValueStatus_Payload = {
      val r = parser.parseIsolette_Data_ModelValueStatus_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelValueStatus_Payload _)
    return r
  }

  def fromIsolette_Data_ModelStatus_Payload(o: Isolette_Data_Model.Status_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelStatus_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelStatus_Payload(s: String): Either[Isolette_Data_Model.Status_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelStatus_Payload(parser: Parser): Isolette_Data_Model.Status_Payload = {
      val r = parser.parseIsolette_Data_ModelStatus_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelStatus_Payload _)
    return r
  }

  def fromIsolette_Data_ModelRegulator_Mode_Payload(o: Isolette_Data_Model.Regulator_Mode_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelRegulator_Mode_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelRegulator_Mode_Payload(s: String): Either[Isolette_Data_Model.Regulator_Mode_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelRegulator_Mode_Payload(parser: Parser): Isolette_Data_Model.Regulator_Mode_Payload = {
      val r = parser.parseIsolette_Data_ModelRegulator_Mode_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelRegulator_Mode_Payload _)
    return r
  }

  def fromIsolette_Data_ModelMonitor_Mode_Payload(o: Isolette_Data_Model.Monitor_Mode_Payload, isCompact: B): String = {
    val st = Printer.printIsolette_Data_ModelMonitor_Mode_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toIsolette_Data_ModelMonitor_Mode_Payload(s: String): Either[Isolette_Data_Model.Monitor_Mode_Payload, Json.ErrorMsg] = {
    def fIsolette_Data_ModelMonitor_Mode_Payload(parser: Parser): Isolette_Data_Model.Monitor_Mode_Payload = {
      val r = parser.parseIsolette_Data_ModelMonitor_Mode_Payload()
      return r
    }
    val r = to(s, fIsolette_Data_ModelMonitor_Mode_Payload _)
    return r
  }

  def fromBase_TypesBoolean_Payload(o: Base_Types.Boolean_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesBoolean_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesBoolean_Payload(s: String): Either[Base_Types.Boolean_Payload, Json.ErrorMsg] = {
    def fBase_TypesBoolean_Payload(parser: Parser): Base_Types.Boolean_Payload = {
      val r = parser.parseBase_TypesBoolean_Payload()
      return r
    }
    val r = to(s, fBase_TypesBoolean_Payload _)
    return r
  }

  def fromBase_TypesInteger_Payload(o: Base_Types.Integer_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_Payload(s: String): Either[Base_Types.Integer_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_Payload(parser: Parser): Base_Types.Integer_Payload = {
      val r = parser.parseBase_TypesInteger_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_Payload _)
    return r
  }

  def fromBase_TypesInteger_8_Payload(o: Base_Types.Integer_8_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_8_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_8_Payload(s: String): Either[Base_Types.Integer_8_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_8_Payload(parser: Parser): Base_Types.Integer_8_Payload = {
      val r = parser.parseBase_TypesInteger_8_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_8_Payload _)
    return r
  }

  def fromBase_TypesInteger_16_Payload(o: Base_Types.Integer_16_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_16_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_16_Payload(s: String): Either[Base_Types.Integer_16_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_16_Payload(parser: Parser): Base_Types.Integer_16_Payload = {
      val r = parser.parseBase_TypesInteger_16_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_16_Payload _)
    return r
  }

  def fromBase_TypesInteger_32_Payload(o: Base_Types.Integer_32_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_32_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_32_Payload(s: String): Either[Base_Types.Integer_32_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_32_Payload(parser: Parser): Base_Types.Integer_32_Payload = {
      val r = parser.parseBase_TypesInteger_32_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_32_Payload _)
    return r
  }

  def fromBase_TypesInteger_64_Payload(o: Base_Types.Integer_64_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesInteger_64_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesInteger_64_Payload(s: String): Either[Base_Types.Integer_64_Payload, Json.ErrorMsg] = {
    def fBase_TypesInteger_64_Payload(parser: Parser): Base_Types.Integer_64_Payload = {
      val r = parser.parseBase_TypesInteger_64_Payload()
      return r
    }
    val r = to(s, fBase_TypesInteger_64_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_8_Payload(o: Base_Types.Unsigned_8_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesUnsigned_8_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesUnsigned_8_Payload(s: String): Either[Base_Types.Unsigned_8_Payload, Json.ErrorMsg] = {
    def fBase_TypesUnsigned_8_Payload(parser: Parser): Base_Types.Unsigned_8_Payload = {
      val r = parser.parseBase_TypesUnsigned_8_Payload()
      return r
    }
    val r = to(s, fBase_TypesUnsigned_8_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_16_Payload(o: Base_Types.Unsigned_16_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesUnsigned_16_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesUnsigned_16_Payload(s: String): Either[Base_Types.Unsigned_16_Payload, Json.ErrorMsg] = {
    def fBase_TypesUnsigned_16_Payload(parser: Parser): Base_Types.Unsigned_16_Payload = {
      val r = parser.parseBase_TypesUnsigned_16_Payload()
      return r
    }
    val r = to(s, fBase_TypesUnsigned_16_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_32_Payload(o: Base_Types.Unsigned_32_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesUnsigned_32_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesUnsigned_32_Payload(s: String): Either[Base_Types.Unsigned_32_Payload, Json.ErrorMsg] = {
    def fBase_TypesUnsigned_32_Payload(parser: Parser): Base_Types.Unsigned_32_Payload = {
      val r = parser.parseBase_TypesUnsigned_32_Payload()
      return r
    }
    val r = to(s, fBase_TypesUnsigned_32_Payload _)
    return r
  }

  def fromBase_TypesUnsigned_64_Payload(o: Base_Types.Unsigned_64_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesUnsigned_64_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesUnsigned_64_Payload(s: String): Either[Base_Types.Unsigned_64_Payload, Json.ErrorMsg] = {
    def fBase_TypesUnsigned_64_Payload(parser: Parser): Base_Types.Unsigned_64_Payload = {
      val r = parser.parseBase_TypesUnsigned_64_Payload()
      return r
    }
    val r = to(s, fBase_TypesUnsigned_64_Payload _)
    return r
  }

  def fromBase_TypesFloat_Payload(o: Base_Types.Float_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesFloat_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesFloat_Payload(s: String): Either[Base_Types.Float_Payload, Json.ErrorMsg] = {
    def fBase_TypesFloat_Payload(parser: Parser): Base_Types.Float_Payload = {
      val r = parser.parseBase_TypesFloat_Payload()
      return r
    }
    val r = to(s, fBase_TypesFloat_Payload _)
    return r
  }

  def fromBase_TypesFloat_32_Payload(o: Base_Types.Float_32_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesFloat_32_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesFloat_32_Payload(s: String): Either[Base_Types.Float_32_Payload, Json.ErrorMsg] = {
    def fBase_TypesFloat_32_Payload(parser: Parser): Base_Types.Float_32_Payload = {
      val r = parser.parseBase_TypesFloat_32_Payload()
      return r
    }
    val r = to(s, fBase_TypesFloat_32_Payload _)
    return r
  }

  def fromBase_TypesFloat_64_Payload(o: Base_Types.Float_64_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesFloat_64_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesFloat_64_Payload(s: String): Either[Base_Types.Float_64_Payload, Json.ErrorMsg] = {
    def fBase_TypesFloat_64_Payload(parser: Parser): Base_Types.Float_64_Payload = {
      val r = parser.parseBase_TypesFloat_64_Payload()
      return r
    }
    val r = to(s, fBase_TypesFloat_64_Payload _)
    return r
  }

  def fromBase_TypesCharacter_Payload(o: Base_Types.Character_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesCharacter_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesCharacter_Payload(s: String): Either[Base_Types.Character_Payload, Json.ErrorMsg] = {
    def fBase_TypesCharacter_Payload(parser: Parser): Base_Types.Character_Payload = {
      val r = parser.parseBase_TypesCharacter_Payload()
      return r
    }
    val r = to(s, fBase_TypesCharacter_Payload _)
    return r
  }

  def fromBase_TypesString_Payload(o: Base_Types.String_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesString_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesString_Payload(s: String): Either[Base_Types.String_Payload, Json.ErrorMsg] = {
    def fBase_TypesString_Payload(parser: Parser): Base_Types.String_Payload = {
      val r = parser.parseBase_TypesString_Payload()
      return r
    }
    val r = to(s, fBase_TypesString_Payload _)
    return r
  }

  def fromBase_TypesBits_Payload(o: Base_Types.Bits_Payload, isCompact: B): String = {
    val st = Printer.printBase_TypesBits_Payload(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toBase_TypesBits_Payload(s: String): Either[Base_Types.Bits_Payload, Json.ErrorMsg] = {
    def fBase_TypesBits_Payload(parser: Parser): Base_Types.Bits_Payload = {
      val r = parser.parseBase_TypesBits_Payload()
      return r
    }
    val r = to(s, fBase_TypesBits_Payload _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(s: String): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container(parser: Parser): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(s: String): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P(parser: Parser): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_P = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(s: String): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS(parser: Parser): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PreState_Container_PS = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PreState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(s: String): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container(parser: Parser): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(s: String): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P(parser: Parser): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_P = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(s: String): Either[TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS(parser: Parser): TempControlMixedSeL4CAmKES.TempSensor_tsp_ts_PostState_Container_PS = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempSensor_tsp_ts_PostState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(s: String): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container(parser: Parser): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(s: String): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P(parser: Parser): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_P = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(s: String): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS(parser: Parser): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PreState_Container_PS = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PreState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(s: String): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container(parser: Parser): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(s: String): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P(parser: Parser): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_P = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(s: String): Either[TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS(parser: Parser): TempControlMixedSeL4CAmKES.TempControl_tcp_tc_PostState_Container_PS = {
      val r = parser.parseTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESTempControl_tcp_tc_PostState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(s: String): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container(parser: Parser): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container = {
      val r = parser.parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(s: String): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P(parser: Parser): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_P = {
      val r = parser.parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(s: String): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS(parser: Parser): TempControlMixedSeL4CAmKES.Fan_fp_f_PreState_Container_PS = {
      val r = parser.parseTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESFan_fp_f_PreState_Container_PS _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(s: String): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container(parser: Parser): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container = {
      val r = parser.parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(s: String): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P(parser: Parser): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_P = {
      val r = parser.parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_P _)
    return r
  }

  def fromTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o: TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS, isCompact: B): String = {
    val st = Printer.printTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(s: String): Either[TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS, Json.ErrorMsg] = {
    def fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS(parser: Parser): TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS = {
      val r = parser.parseTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS()
      return r
    }
    val r = to(s, fTempControlMixedSeL4CAmKESFan_fp_f_PostState_Container_PS _)
    return r
  }

  def fromutilContainer(o: util.Container, isCompact: B): String = {
    val st = Printer.printutilContainer(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toutilContainer(s: String): Either[util.Container, Json.ErrorMsg] = {
    def futilContainer(parser: Parser): util.Container = {
      val r = parser.parseutilContainer()
      return r
    }
    val r = to(s, futilContainer _)
    return r
  }

  def fromutilEmptyContainer(o: util.EmptyContainer, isCompact: B): String = {
    val st = Printer.printutilEmptyContainer(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def toutilEmptyContainer(s: String): Either[util.EmptyContainer, Json.ErrorMsg] = {
    def futilEmptyContainer(parser: Parser): util.EmptyContainer = {
      val r = parser.parseutilEmptyContainer()
      return r
    }
    val r = to(s, futilEmptyContainer _)
    return r
  }

  def from_artDataContent(o: art.DataContent, isCompact: B): String = {
    val st = Printer.print_artDataContent(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def to_artDataContent(s: String): Either[art.DataContent, Json.ErrorMsg] = {
    def f_artDataContent(parser: Parser): art.DataContent = {
      val r = parser.parse_artDataContent()
      return r
    }
    val r = to(s, f_artDataContent _)
    return r
  }

  def from_artEmpty(o: art.Empty, isCompact: B): String = {
    val st = Printer.print_artEmpty(o)
    if (isCompact) {
      return st.renderCompact
    } else {
      return st.render
    }
  }

  def to_artEmpty(s: String): Either[art.Empty, Json.ErrorMsg] = {
    def f_artEmpty(parser: Parser): art.Empty = {
      val r = parser.parse_artEmpty()
      return r
    }
    val r = to(s, f_artEmpty _)
    return r
  }

}