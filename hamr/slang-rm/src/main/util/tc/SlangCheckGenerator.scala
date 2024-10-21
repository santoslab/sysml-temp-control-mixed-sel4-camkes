// #Sireum

package tc

import org.sireum._
import org.sireum.Random.Gen64

/*
GENERATED FROM

Temperature.scala

TempUnit.scala

SetPoint.scala

FanCmd.scala

FanAck.scala

Heat.scala

Interface_Interaction.scala

Air_Interaction.scala

Temperature.scala

SetPoint.scala

TempUnit.scala

FanCmd.scala

FanAck.scala

Temperature.scala

SetPoint.scala

TempUnit.scala

FanCmd.scala

FanAck.scala

PhysicalTemp.scala

TempWstatus.scala

Temp.scala

On_Off.scala

Failure_Flag.scala

ValueStatus.scala

Status.scala

Regulator_Mode.scala

Monitor_Mode.scala

Base_Types.scala

GUMBO__Library.scala

GUMBO__Library.scala

GUMBO__Library.scala

GUMBO__Library.scala

TempSensor_tsp_tst_Containers.scala

TempControl_tcp_tct_Containers.scala

Fan_fp_ft_Containers.scala

ObservationKind.scala

Container.scala

DataContent.scala

Aux_Types.scala

*/

@record class Gen_String(param: RandomLibI) extends MJen[String] {
  override def generate(f: String => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextString())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Z(param: RandomLibI) extends MJen[Z] {
  override def generate(f: Z => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextZ())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_B(param: RandomLibI) extends MJen[B] {
  override def generate(f: B => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextB())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_C(param: RandomLibI) extends MJen[C] {
  override def generate(f: C => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextC())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_R(param: RandomLibI) extends MJen[R] {
  override def generate(f: R => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextR())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_F32(param: RandomLibI) extends MJen[F32] {
  override def generate(f: F32 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextF32())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_F64(param: RandomLibI) extends MJen[F64] {
  override def generate(f: F64 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextF64())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_S8(param: RandomLibI) extends MJen[S8] {
  override def generate(f: S8 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextS8())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_S16(param: RandomLibI) extends MJen[S16] {
  override def generate(f: S16 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextS16())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_S32(param: RandomLibI) extends MJen[S32] {
  override def generate(f: S32 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextS32())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_S64(param: RandomLibI) extends MJen[S64] {
  override def generate(f: S64 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextS64())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_U8(param: RandomLibI) extends MJen[U8] {
  override def generate(f: U8 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextU8())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_U16(param: RandomLibI) extends MJen[U16] {
  override def generate(f: U16 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextU16())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_U32(param: RandomLibI) extends MJen[U32] {
  override def generate(f: U32 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextU32())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_U64(param: RandomLibI) extends MJen[U64] {
  override def generate(f: U64 => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextU64())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}


@record class Gen__artDataContent(param: RandomLibI) extends MJen[art.DataContent] {
  override def generate(f: art.DataContent => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.next_artDataContent())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen__artEmpty(param: RandomLibI) extends MJen[art.Empty] {
  override def generate(f: art.Empty => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.next_artEmpty())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesBoolean_Payload(param: RandomLibI) extends MJen[Base_Types.Boolean_Payload] {
  override def generate(f: Base_Types.Boolean_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesBoolean_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesInteger_Payload(param: RandomLibI) extends MJen[Base_Types.Integer_Payload] {
  override def generate(f: Base_Types.Integer_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesInteger_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesInteger_8_Payload(param: RandomLibI) extends MJen[Base_Types.Integer_8_Payload] {
  override def generate(f: Base_Types.Integer_8_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesInteger_8_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesInteger_16_Payload(param: RandomLibI) extends MJen[Base_Types.Integer_16_Payload] {
  override def generate(f: Base_Types.Integer_16_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesInteger_16_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesInteger_32_Payload(param: RandomLibI) extends MJen[Base_Types.Integer_32_Payload] {
  override def generate(f: Base_Types.Integer_32_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesInteger_32_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesInteger_64_Payload(param: RandomLibI) extends MJen[Base_Types.Integer_64_Payload] {
  override def generate(f: Base_Types.Integer_64_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesInteger_64_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesUnsigned_8_Payload(param: RandomLibI) extends MJen[Base_Types.Unsigned_8_Payload] {
  override def generate(f: Base_Types.Unsigned_8_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesUnsigned_8_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesUnsigned_16_Payload(param: RandomLibI) extends MJen[Base_Types.Unsigned_16_Payload] {
  override def generate(f: Base_Types.Unsigned_16_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesUnsigned_16_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesUnsigned_32_Payload(param: RandomLibI) extends MJen[Base_Types.Unsigned_32_Payload] {
  override def generate(f: Base_Types.Unsigned_32_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesUnsigned_32_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesUnsigned_64_Payload(param: RandomLibI) extends MJen[Base_Types.Unsigned_64_Payload] {
  override def generate(f: Base_Types.Unsigned_64_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesUnsigned_64_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesFloat_Payload(param: RandomLibI) extends MJen[Base_Types.Float_Payload] {
  override def generate(f: Base_Types.Float_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesFloat_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesFloat_32_Payload(param: RandomLibI) extends MJen[Base_Types.Float_32_Payload] {
  override def generate(f: Base_Types.Float_32_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesFloat_32_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesFloat_64_Payload(param: RandomLibI) extends MJen[Base_Types.Float_64_Payload] {
  override def generate(f: Base_Types.Float_64_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesFloat_64_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesCharacter_Payload(param: RandomLibI) extends MJen[Base_Types.Character_Payload] {
  override def generate(f: Base_Types.Character_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesCharacter_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesString_Payload(param: RandomLibI) extends MJen[Base_Types.String_Payload] {
  override def generate(f: Base_Types.String_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesString_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_ISZB(param: RandomLibI) extends MJen[ISZ[B]] {
  override def generate(f: ISZ[B] => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextISZB())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Base_TypesBits_Payload(param: RandomLibI) extends MJen[Base_Types.Bits_Payload] {
  override def generate(f: Base_Types.Bits_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextBase_TypesBits_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelFailure_Flag(param: RandomLibI) extends MJen[Isolette_Data_Model.Failure_Flag] {
  override def generate(f: Isolette_Data_Model.Failure_Flag => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelFailure_Flag())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelFailure_Flag_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.Failure_Flag_Payload] {
  override def generate(f: Isolette_Data_Model.Failure_Flag_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelFailure_Flag_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelMonitor_ModeType(param: RandomLibI) extends MJen[Isolette_Data_Model.Monitor_Mode.Type] {
  override def generate(f: Isolette_Data_Model.Monitor_Mode.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelMonitor_ModeType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelMonitor_Mode_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.Monitor_Mode_Payload] {
  override def generate(f: Isolette_Data_Model.Monitor_Mode_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelMonitor_Mode_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelOn_OffType(param: RandomLibI) extends MJen[Isolette_Data_Model.On_Off.Type] {
  override def generate(f: Isolette_Data_Model.On_Off.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelOn_OffType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelOn_Off_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.On_Off_Payload] {
  override def generate(f: Isolette_Data_Model.On_Off_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelOn_Off_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelPhysicalTemp(param: RandomLibI) extends MJen[Isolette_Data_Model.PhysicalTemp] {
  override def generate(f: Isolette_Data_Model.PhysicalTemp => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelPhysicalTemp())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelPhysicalTemp_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.PhysicalTemp_Payload] {
  override def generate(f: Isolette_Data_Model.PhysicalTemp_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelPhysicalTemp_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelRegulator_ModeType(param: RandomLibI) extends MJen[Isolette_Data_Model.Regulator_Mode.Type] {
  override def generate(f: Isolette_Data_Model.Regulator_Mode.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelRegulator_ModeType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelRegulator_Mode_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.Regulator_Mode_Payload] {
  override def generate(f: Isolette_Data_Model.Regulator_Mode_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelRegulator_Mode_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelStatusType(param: RandomLibI) extends MJen[Isolette_Data_Model.Status.Type] {
  override def generate(f: Isolette_Data_Model.Status.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelStatusType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelStatus_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.Status_Payload] {
  override def generate(f: Isolette_Data_Model.Status_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelStatus_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelTemp(param: RandomLibI) extends MJen[Isolette_Data_Model.Temp] {
  override def generate(f: Isolette_Data_Model.Temp => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelTemp())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelTemp_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.Temp_Payload] {
  override def generate(f: Isolette_Data_Model.Temp_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelTemp_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelTempWstatus(param: RandomLibI) extends MJen[Isolette_Data_Model.TempWstatus] {
  override def generate(f: Isolette_Data_Model.TempWstatus => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelTempWstatus())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelTempWstatus_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.TempWstatus_Payload] {
  override def generate(f: Isolette_Data_Model.TempWstatus_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelTempWstatus_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelValueStatusType(param: RandomLibI) extends MJen[Isolette_Data_Model.ValueStatus.Type] {
  override def generate(f: Isolette_Data_Model.ValueStatus.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelValueStatusType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_Data_ModelValueStatus_Payload(param: RandomLibI) extends MJen[Isolette_Data_Model.ValueStatus_Payload] {
  override def generate(f: Isolette_Data_Model.ValueStatus_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_Data_ModelValueStatus_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_EnvironmentAir_Interaction(param: RandomLibI) extends MJen[Isolette_Environment.Air_Interaction] {
  override def generate(f: Isolette_Environment.Air_Interaction => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_EnvironmentAir_Interaction())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_EnvironmentAir_Interaction_Payload(param: RandomLibI) extends MJen[Isolette_Environment.Air_Interaction_Payload] {
  override def generate(f: Isolette_Environment.Air_Interaction_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_EnvironmentAir_Interaction_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_EnvironmentHeat(param: RandomLibI) extends MJen[Isolette_Environment.Heat] {
  override def generate(f: Isolette_Environment.Heat => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_EnvironmentHeat())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_EnvironmentHeat_Payload(param: RandomLibI) extends MJen[Isolette_Environment.Heat_Payload] {
  override def generate(f: Isolette_Environment.Heat_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_EnvironmentHeat_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_EnvironmentInterface_Interaction(param: RandomLibI) extends MJen[Isolette_Environment.Interface_Interaction] {
  override def generate(f: Isolette_Environment.Interface_Interaction => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_EnvironmentInterface_Interaction())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Isolette_EnvironmentInterface_Interaction_Payload(param: RandomLibI) extends MJen[Isolette_Environment.Interface_Interaction_Payload] {
  override def generate(f: Isolette_Environment.Interface_Interaction_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextIsolette_EnvironmentInterface_Interaction_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedFanAckType(param: RandomLibI) extends MJen[TempControlMixed.FanAck.Type] {
  override def generate(f: TempControlMixed.FanAck.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedFanAckType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedFanAck_Payload(param: RandomLibI) extends MJen[TempControlMixed.FanAck_Payload] {
  override def generate(f: TempControlMixed.FanAck_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedFanAck_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedFanCmdType(param: RandomLibI) extends MJen[TempControlMixed.FanCmd.Type] {
  override def generate(f: TempControlMixed.FanCmd.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedFanCmdType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedFanCmd_Payload(param: RandomLibI) extends MJen[TempControlMixed.FanCmd_Payload] {
  override def generate(f: TempControlMixed.FanCmd_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedFanCmd_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSetPoint(param: RandomLibI) extends MJen[TempControlMixed.SetPoint] {
  override def generate(f: TempControlMixed.SetPoint => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSetPoint())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSetPoint_Payload(param: RandomLibI) extends MJen[TempControlMixed.SetPoint_Payload] {
  override def generate(f: TempControlMixed.SetPoint_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSetPoint_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedTempUnitType(param: RandomLibI) extends MJen[TempControlMixed.TempUnit.Type] {
  override def generate(f: TempControlMixed.TempUnit.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedTempUnitType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedTempUnit_Payload(param: RandomLibI) extends MJen[TempControlMixed.TempUnit_Payload] {
  override def generate(f: TempControlMixed.TempUnit_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedTempUnit_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedTemperature(param: RandomLibI) extends MJen[TempControlMixed.Temperature] {
  override def generate(f: TempControlMixed.Temperature => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedTemperature())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedTemperature_Payload(param: RandomLibI) extends MJen[TempControlMixed.Temperature_Payload] {
  override def generate(f: TempControlMixed.Temperature_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedTemperature_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFanAckType(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.FanAck.Type] {
  override def generate(f: TempControlMixedSeL4CAmKES.FanAck.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFanAckType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFanAck_Payload(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.FanAck_Payload] {
  override def generate(f: TempControlMixedSeL4CAmKES.FanAck_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFanAck_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFanCmdType(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.FanCmd.Type] {
  override def generate(f: TempControlMixedSeL4CAmKES.FanCmd.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFanCmdType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFanCmd_Payload(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.FanCmd_Payload] {
  override def generate(f: TempControlMixedSeL4CAmKES.FanCmd_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFanCmd_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container] {
  override def generate(f: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_OptionTempControlMixedSeL4CAmKESFanCmdType(param: RandomLibI) extends MJen[Option[TempControlMixedSeL4CAmKES.FanCmd.Type]] {
  override def generate(f: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextOptionTempControlMixedSeL4CAmKESFanCmdType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P] {
  override def generate(f: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS] {
  override def generate(f: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container] {
  override def generate(f: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_OptionTempControlMixedSeL4CAmKESFanAckType(param: RandomLibI) extends MJen[Option[TempControlMixedSeL4CAmKES.FanAck.Type]] {
  override def generate(f: Option[TempControlMixedSeL4CAmKES.FanAck.Type] => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextOptionTempControlMixedSeL4CAmKESFanAckType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P] {
  override def generate(f: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS] {
  override def generate(f: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESSetPoint(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.SetPoint] {
  override def generate(f: TempControlMixedSeL4CAmKES.SetPoint => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESSetPoint())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESSetPoint_Payload(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.SetPoint_Payload] {
  override def generate(f: TempControlMixedSeL4CAmKES.SetPoint_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESSetPoint_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_Option_artEmpty(param: RandomLibI) extends MJen[Option[art.Empty]] {
  override def generate(f: Option[art.Empty] => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextOption_artEmpty())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_OptionTempControlMixedSeL4CAmKESSetPoint(param: RandomLibI) extends MJen[Option[TempControlMixedSeL4CAmKES.SetPoint]] {
  override def generate(f: Option[TempControlMixedSeL4CAmKES.SetPoint] => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextOptionTempControlMixedSeL4CAmKESSetPoint())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempUnitType(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempUnit.Type] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempUnit.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempUnitType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTempUnit_Payload(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.TempUnit_Payload] {
  override def generate(f: TempControlMixedSeL4CAmKES.TempUnit_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTempUnit_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTemperature(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.Temperature] {
  override def generate(f: TempControlMixedSeL4CAmKES.Temperature => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTemperature())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlMixedSeL4CAmKESTemperature_Payload(param: RandomLibI) extends MJen[TempControlMixedSeL4CAmKES.Temperature_Payload] {
  override def generate(f: TempControlMixedSeL4CAmKES.Temperature_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlMixedSeL4CAmKESTemperature_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicFanAckType(param: RandomLibI) extends MJen[TempControlPeriodic.FanAck.Type] {
  override def generate(f: TempControlPeriodic.FanAck.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicFanAckType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicFanAck_Payload(param: RandomLibI) extends MJen[TempControlPeriodic.FanAck_Payload] {
  override def generate(f: TempControlPeriodic.FanAck_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicFanAck_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicFanCmdType(param: RandomLibI) extends MJen[TempControlPeriodic.FanCmd.Type] {
  override def generate(f: TempControlPeriodic.FanCmd.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicFanCmdType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicFanCmd_Payload(param: RandomLibI) extends MJen[TempControlPeriodic.FanCmd_Payload] {
  override def generate(f: TempControlPeriodic.FanCmd_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicFanCmd_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicSetPoint(param: RandomLibI) extends MJen[TempControlPeriodic.SetPoint] {
  override def generate(f: TempControlPeriodic.SetPoint => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicSetPoint())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicSetPoint_Payload(param: RandomLibI) extends MJen[TempControlPeriodic.SetPoint_Payload] {
  override def generate(f: TempControlPeriodic.SetPoint_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicSetPoint_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicTempUnitType(param: RandomLibI) extends MJen[TempControlPeriodic.TempUnit.Type] {
  override def generate(f: TempControlPeriodic.TempUnit.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicTempUnitType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicTempUnit_Payload(param: RandomLibI) extends MJen[TempControlPeriodic.TempUnit_Payload] {
  override def generate(f: TempControlPeriodic.TempUnit_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicTempUnit_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicTemperature(param: RandomLibI) extends MJen[TempControlPeriodic.Temperature] {
  override def generate(f: TempControlPeriodic.Temperature => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicTemperature())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_TempControlPeriodicTemperature_Payload(param: RandomLibI) extends MJen[TempControlPeriodic.Temperature_Payload] {
  override def generate(f: TempControlPeriodic.Temperature_Payload => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextTempControlPeriodicTemperature_Payload())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_utilContainer(param: RandomLibI) extends MJen[util.Container] {
  override def generate(f: util.Container => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextutilContainer())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_utilEmptyContainer(param: RandomLibI) extends MJen[util.EmptyContainer] {
  override def generate(f: util.EmptyContainer => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextutilEmptyContainer())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}

@record class Gen_runtimemonitorObservationKindType(param: RandomLibI) extends MJen[runtimemonitor.ObservationKind.Type] {
  override def generate(f: runtimemonitor.ObservationKind.Type => Jen.Action): Jen.Action = {
    var continue = Jen.Continue
    while (T) {

      continue = f(param.nextruntimemonitorObservationKindType())

      if (!continue) {
        return Jen.End
      }
    }
    return continue
  }

  override def string: String = {
    return s""
  }
}


