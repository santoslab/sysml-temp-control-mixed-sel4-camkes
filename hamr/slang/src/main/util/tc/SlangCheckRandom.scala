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

Container.scala

DataContent.scala

Aux_Types.scala

*/

@msig trait RandomLibI {
  def gen: org.sireum.Random.Gen

  def get_numElement: Z
  def set_numElement(s: Z): Unit

  // ========  Z ==========
    def get_Config_Z: Config_Z
    def set_Config_Z(config: Config_Z): RandomLib

    def nextZ(): Z = {
      val conf = get_Config_Z

      var r: Z = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextZ()
          else
            gen.nextZBetween(S64.Min.toZ, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextZBetween(conf.low.get, S64.Max.toZ)
          else
            gen.nextZBetween(conf.low.get, conf.high.get)
        }

      if(get_Config_Z.attempts >= 0) {
       for (i <- 0 to get_Config_Z.attempts) {
         if (get_Config_Z.filter(r)) {
           return r
         }
         if (get_Config_Z.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextZ()
           else
              gen.nextZBetween(S64.Min.toZ, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextZBetween(conf.low.get, S64.Max.toZ)
            else
             gen.nextZBetween(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_Z.filter(r)) {
           return r
         }
         if (get_Config_Z.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextZ()
           else
              gen.nextZBetween(S64.Min.toZ, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextZBetween(conf.low.get, S64.Max.toZ)
            else
             gen.nextZBetween(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  B ==========}
    def get_Config_B: Config_B
    def set_Config_B(config: Config_B): RandomLib

    def nextB(): B = {
      var r = gen.nextB()
      if(get_Config_B.attempts >= 0) {
       for (i <- 0 to get_Config_B.attempts) {
         if (get_Config_B.filter(r)) {
           return r
         }
         if (get_Config_B.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = gen.nextB()
       }
      } else {
       while(T) {
         if (get_Config_B.filter(r)) {
           return r
         }
         if (get_Config_B.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = gen.nextB()
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  C ==========
    def get_Config_C: Config_C
    def set_Config_C(config: Config_C): RandomLib

    def nextC(): C = {
      val conf = get_Config_C

      var r: C = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextC()
          else
            gen.nextCBetween(C.fromZ(0), conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextCBetween(conf.low.get, C.fromZ(1114111))
          else
            gen.nextCBetween(conf.low.get, conf.high.get)
        }

      if(get_Config_C.attempts >= 0) {
       for (i <- 0 to get_Config_C.attempts) {
         if (get_Config_C.filter(r)) {
           return r
         }
         if (get_Config_C.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextC()
           else
              gen.nextCBetween(C.fromZ(0), conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextCBetween(conf.low.get, C.fromZ(1114111))
            else
             gen.nextCBetween(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_C.filter(r)) {
           return r
         }
         if (get_Config_C.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextC()
           else
              gen.nextCBetween(C.fromZ(0), conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextCBetween(conf.low.get, C.fromZ(1114111))
            else
             gen.nextCBetween(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  R ==========
    def get_Config_R: Config_R
    def set_Config_R(config: Config_R): RandomLib

    def nextR(): R = {
      val conf = get_Config_R

      var r: R = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextR()
          else
            gen.nextRBetween(r"-1.7976931348623157E308", conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextRBetween(conf.low.get, r"1.7976931348623157E308")
          else
            gen.nextRBetween(conf.low.get, conf.high.get)
        }

      if(get_Config_R.attempts >= 0) {
       for (i <- 0 to get_Config_R.attempts) {
         if (get_Config_R.filter(r)) {
           return r
         }
         if (get_Config_R.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextR()
           else
              gen.nextRBetween(r"-1.7976931348623157E308", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextRBetween(conf.low.get, r"1.7976931348623157E308")
            else
             gen.nextRBetween(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_R.filter(r)) {
           return r
         }
         if (get_Config_R.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextR()
           else
              gen.nextRBetween(r"-1.7976931348623157E308", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextRBetween(conf.low.get, r"1.7976931348623157E308")
            else
             gen.nextRBetween(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  F32 ==========
    def get_Config_F32: Config_F32
    def set_Config_F32(config: Config_F32): RandomLib

    def nextF32(): F32 = {
      val conf = get_Config_F32

      var r: F32 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextF32()
          else
            gen.nextF32Between(f32"-3.40282347E38f", conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextF32Between(conf.low.get, f32"3.4028235E38f")
          else
            gen.nextF32Between(conf.low.get, conf.high.get)
        }

      if(get_Config_F32.attempts >= 0) {
       for (i <- 0 to get_Config_F32.attempts) {
         if (get_Config_F32.filter(r)) {
           return r
         }
         if (get_Config_F32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextF32()
           else
              gen.nextF32Between(f32"-3.40282347E38f", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextF32Between(conf.low.get, f32"3.4028235E38f")
            else
             gen.nextF32Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_F32.filter(r)) {
           return r
         }
         if (get_Config_F32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextF32()
           else
              gen.nextF32Between(f32"-3.40282347E38f", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextF32Between(conf.low.get, f32"3.4028235E38f")
            else
             gen.nextF32Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  F64 ==========
    def get_Config_F64: Config_F64
    def set_Config_F64(config: Config_F64): RandomLib

    def nextF64(): F64 = {
      val conf = get_Config_F64

      var r: F64 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextF64()
          else
            gen.nextF64Between(f64"-1.7976931348623157E308f", conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextF64Between(conf.low.get, f64"1.7976931348623157E308f")
          else
            gen.nextF64Between(conf.low.get, conf.high.get)
        }

      if(get_Config_F64.attempts >= 0) {
       for (i <- 0 to get_Config_F64.attempts) {
         if (get_Config_F64.filter(r)) {
           return r
         }
         if (get_Config_F64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextF64()
           else
              gen.nextF64Between(f64"-1.7976931348623157E308f", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextF64Between(conf.low.get, f64"1.7976931348623157E308f")
            else
             gen.nextF64Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_F64.filter(r)) {
           return r
         }
         if (get_Config_F64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextF64()
           else
              gen.nextF64Between(f64"-1.7976931348623157E308f", conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextF64Between(conf.low.get, f64"1.7976931348623157E308f")
            else
             gen.nextF64Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  S8 ==========
    def get_Config_S8: Config_S8
    def set_Config_S8(config: Config_S8): RandomLib

    def nextS8(): S8 = {
      val conf = get_Config_S8

      var r: S8 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextS8()
          else
            gen.nextS8Between(S8.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextS8Between(conf.low.get, S8.Max)
          else
            gen.nextS8Between(conf.low.get, conf.high.get)
        }

      if(get_Config_S8.attempts >= 0) {
       for (i <- 0 to get_Config_S8.attempts) {
         if (get_Config_S8.filter(r)) {
           return r
         }
         if (get_Config_S8.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS8()
           else
              gen.nextS8Between(S8.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS8Between(conf.low.get, S8.Max)
            else
             gen.nextS8Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_S8.filter(r)) {
           return r
         }
         if (get_Config_S8.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS8()
           else
              gen.nextS8Between(S8.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS8Between(conf.low.get, S8.Max)
            else
             gen.nextS8Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  S16 ==========
    def get_Config_S16: Config_S16
    def set_Config_S16(config: Config_S16): RandomLib

    def nextS16(): S16 = {
      val conf = get_Config_S16

      var r: S16 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextS16()
          else
            gen.nextS16Between(S16.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextS16Between(conf.low.get, S16.Max)
          else
            gen.nextS16Between(conf.low.get, conf.high.get)
        }

      if(get_Config_S16.attempts >= 0) {
       for (i <- 0 to get_Config_S16.attempts) {
         if (get_Config_S16.filter(r)) {
           return r
         }
         if (get_Config_S16.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS16()
           else
              gen.nextS16Between(S16.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS16Between(conf.low.get, S16.Max)
            else
             gen.nextS16Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_S16.filter(r)) {
           return r
         }
         if (get_Config_S16.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS16()
           else
              gen.nextS16Between(S16.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS16Between(conf.low.get, S16.Max)
            else
             gen.nextS16Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  S32 ==========
    def get_Config_S32: Config_S32
    def set_Config_S32(config: Config_S32): RandomLib

    def nextS32(): S32 = {
      val conf = get_Config_S32

      var r: S32 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextS32()
          else
            gen.nextS32Between(S32.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextS32Between(conf.low.get, S32.Max)
          else
            gen.nextS32Between(conf.low.get, conf.high.get)
        }

      if(get_Config_S32.attempts >= 0) {
       for (i <- 0 to get_Config_S32.attempts) {
         if (get_Config_S32.filter(r)) {
           return r
         }
         if (get_Config_S32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS32()
           else
              gen.nextS32Between(S32.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS32Between(conf.low.get, S32.Max)
            else
             gen.nextS32Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_S32.filter(r)) {
           return r
         }
         if (get_Config_S32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS32()
           else
              gen.nextS32Between(S32.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS32Between(conf.low.get, S32.Max)
            else
             gen.nextS32Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  S64 ==========
    def get_Config_S64: Config_S64
    def set_Config_S64(config: Config_S64): RandomLib

    def nextS64(): S64 = {
      val conf = get_Config_S64

      var r: S64 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextS64()
          else
            gen.nextS64Between(S64.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextS64Between(conf.low.get, S64.Max)
          else
            gen.nextS64Between(conf.low.get, conf.high.get)
        }

      if(get_Config_S64.attempts >= 0) {
       for (i <- 0 to get_Config_S64.attempts) {
         if (get_Config_S64.filter(r)) {
           return r
         }
         if (get_Config_S64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS64()
           else
              gen.nextS64Between(S64.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS64Between(conf.low.get, S64.Max)
            else
             gen.nextS64Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_S64.filter(r)) {
           return r
         }
         if (get_Config_S64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextS64()
           else
              gen.nextS64Between(S64.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextS64Between(conf.low.get, S64.Max)
            else
             gen.nextS64Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  U8 ==========
    def get_Config_U8: Config_U8
    def set_Config_U8(config: Config_U8): RandomLib

    def nextU8(): U8 = {
      val conf = get_Config_U8

      var r: U8 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextU8()
          else
            gen.nextU8Between(U8.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextU8Between(conf.low.get, U8.Max)
          else
            gen.nextU8Between(conf.low.get, conf.high.get)
        }

      if(get_Config_U8.attempts >= 0) {
       for (i <- 0 to get_Config_U8.attempts) {
         if (get_Config_U8.filter(r)) {
           return r
         }
         if (get_Config_U8.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU8()
           else
              gen.nextU8Between(U8.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU8Between(conf.low.get, U8.Max)
            else
             gen.nextU8Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_U8.filter(r)) {
           return r
         }
         if (get_Config_U8.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU8()
           else
              gen.nextU8Between(U8.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU8Between(conf.low.get, U8.Max)
            else
             gen.nextU8Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  U16 ==========
    def get_Config_U16: Config_U16
    def set_Config_U16(config: Config_U16): RandomLib

    def nextU16(): U16 = {
      val conf = get_Config_U16

      var r: U16 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextU16()
          else
            gen.nextU16Between(U16.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextU16Between(conf.low.get, U16.Max)
          else
            gen.nextU16Between(conf.low.get, conf.high.get)
        }

      if(get_Config_U16.attempts >= 0) {
       for (i <- 0 to get_Config_U16.attempts) {
         if (get_Config_U16.filter(r)) {
           return r
         }
         if (get_Config_U16.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU16()
           else
              gen.nextU16Between(U16.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU16Between(conf.low.get, U16.Max)
            else
             gen.nextU16Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_U16.filter(r)) {
           return r
         }
         if (get_Config_U16.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU16()
           else
              gen.nextU16Between(U16.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU16Between(conf.low.get, U16.Max)
            else
             gen.nextU16Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  U32 ==========
    def get_Config_U32: Config_U32
    def set_Config_U32(config: Config_U32): RandomLib

    def nextU32(): U32 = {
      val conf = get_Config_U32

      var r: U32 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextU32()
          else
            gen.nextU32Between(U32.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextU32Between(conf.low.get, U32.Max)
          else
            gen.nextU32Between(conf.low.get, conf.high.get)
        }

      if(get_Config_U32.attempts >= 0) {
       for (i <- 0 to get_Config_U32.attempts) {
         if (get_Config_U32.filter(r)) {
           return r
         }
         if (get_Config_U32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU32()
           else
              gen.nextU32Between(U32.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU32Between(conf.low.get, U32.Max)
            else
             gen.nextU32Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_U32.filter(r)) {
           return r
         }
         if (get_Config_U32.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU32()
           else
              gen.nextU32Between(U32.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU32Between(conf.low.get, U32.Max)
            else
             gen.nextU32Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ========  U64 ==========
    def get_Config_U64: Config_U64
    def set_Config_U64(config: Config_U64): RandomLib

    def nextU64(): U64 = {
      val conf = get_Config_U64

      var r: U64 = if (conf.low.isEmpty) {
          if (conf.high.isEmpty)
            gen.nextU64()
          else
            gen.nextU64Between(U64.Min, conf.high.get)
        } else {
          if (conf.high.isEmpty)
            gen.nextU64Between(conf.low.get, U64.Max)
          else
            gen.nextU64Between(conf.low.get, conf.high.get)
        }

      if(get_Config_U64.attempts >= 0) {
       for (i <- 0 to get_Config_U64.attempts) {
         if (get_Config_U64.filter(r)) {
           return r
         }
         if (get_Config_U64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU64()
           else
              gen.nextU64Between(U64.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU64Between(conf.low.get, U64.Max)
            else
             gen.nextU64Between(conf.low.get, conf.high.get)
         }
       }
      } else {
       while(T) {
         if (get_Config_U64.filter(r)) {
           return r
         }
         if (get_Config_U64.verbose) {
           println(s"Retrying for failing value: $r")
         }
         r = if (conf.low.isEmpty) {
           if (conf.high.isEmpty)
             gen.nextU64()
           else
              gen.nextU64Between(U64.Min, conf.high.get)
          } else {
            if (conf.high.isEmpty)
              gen.nextU64Between(conf.low.get, U64.Max)
            else
             gen.nextU64Between(conf.low.get, conf.high.get)
         }
       }
      }
      assert(F, "Requirements too strict to generate")
      halt("Requirements too strict to generate")
    }

  // ============= String ===================

  def get_Config_String: Config_String
  def set_Config_String(config: Config_String): RandomLib

  def nextString(): String = {

    var length: Z = gen.nextZBetween(get_Config_String.minSize, get_Config_String.maxSize)
    var str: String = ""
    for(r <- 0 until length){
      str = s"${str}${nextC().string}"
    }

    if(get_Config_String.attempts >= 0) {
      for (i <- 0 to get_Config_String.attempts) {
        if(get_Config_String.filter(str)) {
          return str
        }
        if(get_Config_String.verbose) {
          println(s"Retrying for failing value: $str")
        }

        length = gen.nextZBetween(get_Config_String.minSize, get_Config_String.maxSize)
        str = ""
        for (r <- 0 until length) {
          str = s"${str}${nextC().string}"
        }
      }
    } else {
      while(T) {
        if (get_Config_String.filter(str)) {
          return str
        }
        if (get_Config_String.verbose) {
          println(s"Retrying for failing value: $str")
        }

        length = gen.nextZBetween(get_Config_String.minSize, get_Config_String.maxSize)
        str = ""
        for (r <- 0 until length) {
          str = s"${str}${nextC().string}"
        }
      }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= art.DataContent ===================

  def get_Config__artDataContent: Config__artDataContent
  def set_Config__artDataContent(config: Config__artDataContent): RandomLib

  def next_artDataContent(): art.DataContent = {
    var callEnum: ISZ[_artDataContent_DataTypeId.Type] = ISZ(_artDataContent_DataTypeId._artEmpty_Id, _artDataContent_DataTypeId.Base_TypesBits_Payload_Id, _artDataContent_DataTypeId.Base_TypesBoolean_Payload_Id, _artDataContent_DataTypeId.Base_TypesCharacter_Payload_Id, _artDataContent_DataTypeId.Base_TypesFloat_32_Payload_Id, _artDataContent_DataTypeId.Base_TypesFloat_64_Payload_Id, _artDataContent_DataTypeId.Base_TypesFloat_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_16_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_32_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_64_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_8_Payload_Id, _artDataContent_DataTypeId.Base_TypesInteger_Payload_Id, _artDataContent_DataTypeId.Base_TypesString_Payload_Id, _artDataContent_DataTypeId.Base_TypesUnsigned_16_Payload_Id, _artDataContent_DataTypeId.Base_TypesUnsigned_32_Payload_Id, _artDataContent_DataTypeId.Base_TypesUnsigned_64_Payload_Id, _artDataContent_DataTypeId.Base_TypesUnsigned_8_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelFailure_Flag_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelMonitor_Mode_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelOn_Off_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelPhysicalTemp_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelRegulator_Mode_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelStatus_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelTempWstatus_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelTemp_Payload_Id, _artDataContent_DataTypeId.Isolette_Data_ModelValueStatus_Payload_Id, _artDataContent_DataTypeId.Isolette_EnvironmentAir_Interaction_Payload_Id, _artDataContent_DataTypeId.Isolette_EnvironmentHeat_Payload_Id, _artDataContent_DataTypeId.Isolette_EnvironmentInterface_Interaction_Payload_Id, _artDataContent_DataTypeId.TempControlMixedFanAck_Payload_Id, _artDataContent_DataTypeId.TempControlMixedFanCmd_Payload_Id, _artDataContent_DataTypeId.TempControlMixedSetPoint_Payload_Id, _artDataContent_DataTypeId.TempControlMixedTempUnit_Payload_Id, _artDataContent_DataTypeId.TempControlMixedTemperature_Payload_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFanAck_Payload_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFanCmd_Payload_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESSetPoint_Payload_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempUnit_Payload_Id, _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTemperature_Payload_Id, _artDataContent_DataTypeId.TempControlPeriodicFanAck_Payload_Id, _artDataContent_DataTypeId.TempControlPeriodicFanCmd_Payload_Id, _artDataContent_DataTypeId.TempControlPeriodicSetPoint_Payload_Id, _artDataContent_DataTypeId.TempControlPeriodicTempUnit_Payload_Id, _artDataContent_DataTypeId.TempControlPeriodicTemperature_Payload_Id, _artDataContent_DataTypeId.utilEmptyContainer_Id)

    if(get_Config__artDataContent.additiveTypeFiltering) {
       callEnum = get_Config__artDataContent.typeFilter
    } else {
       for(h <- get_Config__artDataContent.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: art.DataContent = c match {
      case _artDataContent_DataTypeId._artEmpty_Id => (next_artEmpty _).apply()
      case _artDataContent_DataTypeId.Base_TypesBits_Payload_Id => (nextBase_TypesBits_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesBoolean_Payload_Id => (nextBase_TypesBoolean_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesCharacter_Payload_Id => (nextBase_TypesCharacter_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesFloat_32_Payload_Id => (nextBase_TypesFloat_32_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesFloat_64_Payload_Id => (nextBase_TypesFloat_64_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesFloat_Payload_Id => (nextBase_TypesFloat_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_16_Payload_Id => (nextBase_TypesInteger_16_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_32_Payload_Id => (nextBase_TypesInteger_32_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_64_Payload_Id => (nextBase_TypesInteger_64_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_8_Payload_Id => (nextBase_TypesInteger_8_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesInteger_Payload_Id => (nextBase_TypesInteger_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesString_Payload_Id => (nextBase_TypesString_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesUnsigned_16_Payload_Id => (nextBase_TypesUnsigned_16_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesUnsigned_32_Payload_Id => (nextBase_TypesUnsigned_32_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesUnsigned_64_Payload_Id => (nextBase_TypesUnsigned_64_Payload _).apply()
      case _artDataContent_DataTypeId.Base_TypesUnsigned_8_Payload_Id => (nextBase_TypesUnsigned_8_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelFailure_Flag_Payload_Id => (nextIsolette_Data_ModelFailure_Flag_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelMonitor_Mode_Payload_Id => (nextIsolette_Data_ModelMonitor_Mode_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelOn_Off_Payload_Id => (nextIsolette_Data_ModelOn_Off_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelPhysicalTemp_Payload_Id => (nextIsolette_Data_ModelPhysicalTemp_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelRegulator_Mode_Payload_Id => (nextIsolette_Data_ModelRegulator_Mode_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelStatus_Payload_Id => (nextIsolette_Data_ModelStatus_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelTempWstatus_Payload_Id => (nextIsolette_Data_ModelTempWstatus_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelTemp_Payload_Id => (nextIsolette_Data_ModelTemp_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_Data_ModelValueStatus_Payload_Id => (nextIsolette_Data_ModelValueStatus_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_EnvironmentAir_Interaction_Payload_Id => (nextIsolette_EnvironmentAir_Interaction_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_EnvironmentHeat_Payload_Id => (nextIsolette_EnvironmentHeat_Payload _).apply()
      case _artDataContent_DataTypeId.Isolette_EnvironmentInterface_Interaction_Payload_Id => (nextIsolette_EnvironmentInterface_Interaction_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedFanAck_Payload_Id => (nextTempControlMixedFanAck_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedFanCmd_Payload_Id => (nextTempControlMixedFanCmd_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSetPoint_Payload_Id => (nextTempControlMixedSetPoint_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedTempUnit_Payload_Id => (nextTempControlMixedTempUnit_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedTemperature_Payload_Id => (nextTempControlMixedTemperature_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFanAck_Payload_Id => (nextTempControlMixedSeL4CAmKESFanAck_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFanCmd_Payload_Id => (nextTempControlMixedSeL4CAmKESFanCmd_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESSetPoint_Payload_Id => (nextTempControlMixedSeL4CAmKESSetPoint_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempUnit_Payload_Id => (nextTempControlMixedSeL4CAmKESTempUnit_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTemperature_Payload_Id => (nextTempControlMixedSeL4CAmKESTemperature_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlPeriodicFanAck_Payload_Id => (nextTempControlPeriodicFanAck_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlPeriodicFanCmd_Payload_Id => (nextTempControlPeriodicFanCmd_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlPeriodicSetPoint_Payload_Id => (nextTempControlPeriodicSetPoint_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlPeriodicTempUnit_Payload_Id => (nextTempControlPeriodicTempUnit_Payload _).apply()
      case _artDataContent_DataTypeId.TempControlPeriodicTemperature_Payload_Id => (nextTempControlPeriodicTemperature_Payload _).apply()
      case _artDataContent_DataTypeId.utilEmptyContainer_Id => (nextutilEmptyContainer _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config__artDataContent.attempts >= 0) {
     for(i <- 0 to get_Config__artDataContent.attempts) {
       if(get_Config__artDataContent.filter(v)) {
        return v
       }
       if (get_Config__artDataContent.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case _artDataContent_DataTypeId._artEmpty_Id => (next_artEmpty _).apply()
         case _artDataContent_DataTypeId.Base_TypesBits_Payload_Id => (nextBase_TypesBits_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesBoolean_Payload_Id => (nextBase_TypesBoolean_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesCharacter_Payload_Id => (nextBase_TypesCharacter_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_32_Payload_Id => (nextBase_TypesFloat_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_64_Payload_Id => (nextBase_TypesFloat_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_Payload_Id => (nextBase_TypesFloat_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_16_Payload_Id => (nextBase_TypesInteger_16_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_32_Payload_Id => (nextBase_TypesInteger_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_64_Payload_Id => (nextBase_TypesInteger_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_8_Payload_Id => (nextBase_TypesInteger_8_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_Payload_Id => (nextBase_TypesInteger_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesString_Payload_Id => (nextBase_TypesString_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_16_Payload_Id => (nextBase_TypesUnsigned_16_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_32_Payload_Id => (nextBase_TypesUnsigned_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_64_Payload_Id => (nextBase_TypesUnsigned_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_8_Payload_Id => (nextBase_TypesUnsigned_8_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelFailure_Flag_Payload_Id => (nextIsolette_Data_ModelFailure_Flag_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelMonitor_Mode_Payload_Id => (nextIsolette_Data_ModelMonitor_Mode_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelOn_Off_Payload_Id => (nextIsolette_Data_ModelOn_Off_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelPhysicalTemp_Payload_Id => (nextIsolette_Data_ModelPhysicalTemp_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelRegulator_Mode_Payload_Id => (nextIsolette_Data_ModelRegulator_Mode_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelStatus_Payload_Id => (nextIsolette_Data_ModelStatus_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelTempWstatus_Payload_Id => (nextIsolette_Data_ModelTempWstatus_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelTemp_Payload_Id => (nextIsolette_Data_ModelTemp_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelValueStatus_Payload_Id => (nextIsolette_Data_ModelValueStatus_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_EnvironmentAir_Interaction_Payload_Id => (nextIsolette_EnvironmentAir_Interaction_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_EnvironmentHeat_Payload_Id => (nextIsolette_EnvironmentHeat_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_EnvironmentInterface_Interaction_Payload_Id => (nextIsolette_EnvironmentInterface_Interaction_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedFanAck_Payload_Id => (nextTempControlMixedFanAck_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedFanCmd_Payload_Id => (nextTempControlMixedFanCmd_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSetPoint_Payload_Id => (nextTempControlMixedSetPoint_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedTempUnit_Payload_Id => (nextTempControlMixedTempUnit_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedTemperature_Payload_Id => (nextTempControlMixedTemperature_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFanAck_Payload_Id => (nextTempControlMixedSeL4CAmKESFanAck_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFanCmd_Payload_Id => (nextTempControlMixedSeL4CAmKESFanCmd_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESSetPoint_Payload_Id => (nextTempControlMixedSeL4CAmKESSetPoint_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempUnit_Payload_Id => (nextTempControlMixedSeL4CAmKESTempUnit_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTemperature_Payload_Id => (nextTempControlMixedSeL4CAmKESTemperature_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicFanAck_Payload_Id => (nextTempControlPeriodicFanAck_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicFanCmd_Payload_Id => (nextTempControlPeriodicFanCmd_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicSetPoint_Payload_Id => (nextTempControlPeriodicSetPoint_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicTempUnit_Payload_Id => (nextTempControlPeriodicTempUnit_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicTemperature_Payload_Id => (nextTempControlPeriodicTemperature_Payload _).apply()
         case _artDataContent_DataTypeId.utilEmptyContainer_Id => (nextutilEmptyContainer _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config__artDataContent.filter(v)) {
         return v
       }
       if (get_Config__artDataContent.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case _artDataContent_DataTypeId._artEmpty_Id => (next_artEmpty _).apply()
         case _artDataContent_DataTypeId.Base_TypesBits_Payload_Id => (nextBase_TypesBits_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesBoolean_Payload_Id => (nextBase_TypesBoolean_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesCharacter_Payload_Id => (nextBase_TypesCharacter_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_32_Payload_Id => (nextBase_TypesFloat_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_64_Payload_Id => (nextBase_TypesFloat_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesFloat_Payload_Id => (nextBase_TypesFloat_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_16_Payload_Id => (nextBase_TypesInteger_16_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_32_Payload_Id => (nextBase_TypesInteger_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_64_Payload_Id => (nextBase_TypesInteger_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_8_Payload_Id => (nextBase_TypesInteger_8_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesInteger_Payload_Id => (nextBase_TypesInteger_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesString_Payload_Id => (nextBase_TypesString_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_16_Payload_Id => (nextBase_TypesUnsigned_16_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_32_Payload_Id => (nextBase_TypesUnsigned_32_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_64_Payload_Id => (nextBase_TypesUnsigned_64_Payload _).apply()
         case _artDataContent_DataTypeId.Base_TypesUnsigned_8_Payload_Id => (nextBase_TypesUnsigned_8_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelFailure_Flag_Payload_Id => (nextIsolette_Data_ModelFailure_Flag_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelMonitor_Mode_Payload_Id => (nextIsolette_Data_ModelMonitor_Mode_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelOn_Off_Payload_Id => (nextIsolette_Data_ModelOn_Off_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelPhysicalTemp_Payload_Id => (nextIsolette_Data_ModelPhysicalTemp_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelRegulator_Mode_Payload_Id => (nextIsolette_Data_ModelRegulator_Mode_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelStatus_Payload_Id => (nextIsolette_Data_ModelStatus_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelTempWstatus_Payload_Id => (nextIsolette_Data_ModelTempWstatus_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelTemp_Payload_Id => (nextIsolette_Data_ModelTemp_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_Data_ModelValueStatus_Payload_Id => (nextIsolette_Data_ModelValueStatus_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_EnvironmentAir_Interaction_Payload_Id => (nextIsolette_EnvironmentAir_Interaction_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_EnvironmentHeat_Payload_Id => (nextIsolette_EnvironmentHeat_Payload _).apply()
         case _artDataContent_DataTypeId.Isolette_EnvironmentInterface_Interaction_Payload_Id => (nextIsolette_EnvironmentInterface_Interaction_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedFanAck_Payload_Id => (nextTempControlMixedFanAck_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedFanCmd_Payload_Id => (nextTempControlMixedFanCmd_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSetPoint_Payload_Id => (nextTempControlMixedSetPoint_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedTempUnit_Payload_Id => (nextTempControlMixedTempUnit_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedTemperature_Payload_Id => (nextTempControlMixedTemperature_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFanAck_Payload_Id => (nextTempControlMixedSeL4CAmKESFanAck_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFanCmd_Payload_Id => (nextTempControlMixedSeL4CAmKESFanCmd_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESSetPoint_Payload_Id => (nextTempControlMixedSeL4CAmKESSetPoint_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTempUnit_Payload_Id => (nextTempControlMixedSeL4CAmKESTempUnit_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlMixedSeL4CAmKESTemperature_Payload_Id => (nextTempControlMixedSeL4CAmKESTemperature_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicFanAck_Payload_Id => (nextTempControlPeriodicFanAck_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicFanCmd_Payload_Id => (nextTempControlPeriodicFanCmd_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicSetPoint_Payload_Id => (nextTempControlPeriodicSetPoint_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicTempUnit_Payload_Id => (nextTempControlPeriodicTempUnit_Payload _).apply()
         case _artDataContent_DataTypeId.TempControlPeriodicTemperature_Payload_Id => (nextTempControlPeriodicTemperature_Payload _).apply()
         case _artDataContent_DataTypeId.utilEmptyContainer_Id => (nextutilEmptyContainer _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= art.Empty ===================

  def get_Config__artEmpty: Config__artEmpty
  def set_Config__artEmpty(config: Config__artEmpty): RandomLib

  def next_artEmpty(): art.Empty = {

    var v: art.Empty = art.Empty()

    if(get_Config__artEmpty.attempts >= 0) {
     for(i <- 0 to get_Config__artEmpty.attempts) {
        if(get_Config__artEmpty.filter(v)) {
          return v
        }
        if (get_Config__artEmpty.verbose) {
          println(s"Retrying for failing value: $v")
        }
        v = art.Empty()
     }
    } else {
     while(T) {
       if(get_Config__artEmpty.filter(v)) {
         return v
       }
       if (get_Config__artEmpty.verbose) {
         println(s"Retrying for failing value: $v")
       }
       v = art.Empty()
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Boolean_Payload ===================

  def get_Config_Base_TypesBoolean_Payload: Config_Base_TypesBoolean_Payload
  def set_Config_Base_TypesBoolean_Payload(config: Config_Base_TypesBoolean_Payload): RandomLib

  def nextBase_TypesBoolean_Payload(): Base_Types.Boolean_Payload = {
    var value: B = nextB()

    var v: Base_Types.Boolean_Payload = Base_Types.Boolean_Payload(value)

    if(get_Config_Base_TypesBoolean_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesBoolean_Payload.attempts) {
        if(get_Config_Base_TypesBoolean_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesBoolean_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextB()
        v = Base_Types.Boolean_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesBoolean_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesBoolean_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextB()
       v = Base_Types.Boolean_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_Payload ===================

  def get_Config_Base_TypesInteger_Payload: Config_Base_TypesInteger_Payload
  def set_Config_Base_TypesInteger_Payload(config: Config_Base_TypesInteger_Payload): RandomLib

  def nextBase_TypesInteger_Payload(): Base_Types.Integer_Payload = {
    var value: Z = nextZ()

    var v: Base_Types.Integer_Payload = Base_Types.Integer_Payload(value)

    if(get_Config_Base_TypesInteger_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_Payload.attempts) {
        if(get_Config_Base_TypesInteger_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextZ()
        v = Base_Types.Integer_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextZ()
       v = Base_Types.Integer_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_8_Payload ===================

  def get_Config_Base_TypesInteger_8_Payload: Config_Base_TypesInteger_8_Payload
  def set_Config_Base_TypesInteger_8_Payload(config: Config_Base_TypesInteger_8_Payload): RandomLib

  def nextBase_TypesInteger_8_Payload(): Base_Types.Integer_8_Payload = {
    var value: S8 = nextS8()

    var v: Base_Types.Integer_8_Payload = Base_Types.Integer_8_Payload(value)

    if(get_Config_Base_TypesInteger_8_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_8_Payload.attempts) {
        if(get_Config_Base_TypesInteger_8_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_8_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextS8()
        v = Base_Types.Integer_8_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_8_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_8_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextS8()
       v = Base_Types.Integer_8_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_16_Payload ===================

  def get_Config_Base_TypesInteger_16_Payload: Config_Base_TypesInteger_16_Payload
  def set_Config_Base_TypesInteger_16_Payload(config: Config_Base_TypesInteger_16_Payload): RandomLib

  def nextBase_TypesInteger_16_Payload(): Base_Types.Integer_16_Payload = {
    var value: S16 = nextS16()

    var v: Base_Types.Integer_16_Payload = Base_Types.Integer_16_Payload(value)

    if(get_Config_Base_TypesInteger_16_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_16_Payload.attempts) {
        if(get_Config_Base_TypesInteger_16_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_16_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextS16()
        v = Base_Types.Integer_16_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_16_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_16_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextS16()
       v = Base_Types.Integer_16_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_32_Payload ===================

  def get_Config_Base_TypesInteger_32_Payload: Config_Base_TypesInteger_32_Payload
  def set_Config_Base_TypesInteger_32_Payload(config: Config_Base_TypesInteger_32_Payload): RandomLib

  def nextBase_TypesInteger_32_Payload(): Base_Types.Integer_32_Payload = {
    var value: S32 = nextS32()

    var v: Base_Types.Integer_32_Payload = Base_Types.Integer_32_Payload(value)

    if(get_Config_Base_TypesInteger_32_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_32_Payload.attempts) {
        if(get_Config_Base_TypesInteger_32_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_32_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextS32()
        v = Base_Types.Integer_32_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_32_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_32_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextS32()
       v = Base_Types.Integer_32_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Integer_64_Payload ===================

  def get_Config_Base_TypesInteger_64_Payload: Config_Base_TypesInteger_64_Payload
  def set_Config_Base_TypesInteger_64_Payload(config: Config_Base_TypesInteger_64_Payload): RandomLib

  def nextBase_TypesInteger_64_Payload(): Base_Types.Integer_64_Payload = {
    var value: S64 = nextS64()

    var v: Base_Types.Integer_64_Payload = Base_Types.Integer_64_Payload(value)

    if(get_Config_Base_TypesInteger_64_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesInteger_64_Payload.attempts) {
        if(get_Config_Base_TypesInteger_64_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesInteger_64_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextS64()
        v = Base_Types.Integer_64_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesInteger_64_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesInteger_64_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextS64()
       v = Base_Types.Integer_64_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Unsigned_8_Payload ===================

  def get_Config_Base_TypesUnsigned_8_Payload: Config_Base_TypesUnsigned_8_Payload
  def set_Config_Base_TypesUnsigned_8_Payload(config: Config_Base_TypesUnsigned_8_Payload): RandomLib

  def nextBase_TypesUnsigned_8_Payload(): Base_Types.Unsigned_8_Payload = {
    var value: U8 = nextU8()

    var v: Base_Types.Unsigned_8_Payload = Base_Types.Unsigned_8_Payload(value)

    if(get_Config_Base_TypesUnsigned_8_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesUnsigned_8_Payload.attempts) {
        if(get_Config_Base_TypesUnsigned_8_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesUnsigned_8_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextU8()
        v = Base_Types.Unsigned_8_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesUnsigned_8_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesUnsigned_8_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextU8()
       v = Base_Types.Unsigned_8_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Unsigned_16_Payload ===================

  def get_Config_Base_TypesUnsigned_16_Payload: Config_Base_TypesUnsigned_16_Payload
  def set_Config_Base_TypesUnsigned_16_Payload(config: Config_Base_TypesUnsigned_16_Payload): RandomLib

  def nextBase_TypesUnsigned_16_Payload(): Base_Types.Unsigned_16_Payload = {
    var value: U16 = nextU16()

    var v: Base_Types.Unsigned_16_Payload = Base_Types.Unsigned_16_Payload(value)

    if(get_Config_Base_TypesUnsigned_16_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesUnsigned_16_Payload.attempts) {
        if(get_Config_Base_TypesUnsigned_16_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesUnsigned_16_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextU16()
        v = Base_Types.Unsigned_16_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesUnsigned_16_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesUnsigned_16_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextU16()
       v = Base_Types.Unsigned_16_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Unsigned_32_Payload ===================

  def get_Config_Base_TypesUnsigned_32_Payload: Config_Base_TypesUnsigned_32_Payload
  def set_Config_Base_TypesUnsigned_32_Payload(config: Config_Base_TypesUnsigned_32_Payload): RandomLib

  def nextBase_TypesUnsigned_32_Payload(): Base_Types.Unsigned_32_Payload = {
    var value: U32 = nextU32()

    var v: Base_Types.Unsigned_32_Payload = Base_Types.Unsigned_32_Payload(value)

    if(get_Config_Base_TypesUnsigned_32_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesUnsigned_32_Payload.attempts) {
        if(get_Config_Base_TypesUnsigned_32_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesUnsigned_32_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextU32()
        v = Base_Types.Unsigned_32_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesUnsigned_32_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesUnsigned_32_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextU32()
       v = Base_Types.Unsigned_32_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Unsigned_64_Payload ===================

  def get_Config_Base_TypesUnsigned_64_Payload: Config_Base_TypesUnsigned_64_Payload
  def set_Config_Base_TypesUnsigned_64_Payload(config: Config_Base_TypesUnsigned_64_Payload): RandomLib

  def nextBase_TypesUnsigned_64_Payload(): Base_Types.Unsigned_64_Payload = {
    var value: U64 = nextU64()

    var v: Base_Types.Unsigned_64_Payload = Base_Types.Unsigned_64_Payload(value)

    if(get_Config_Base_TypesUnsigned_64_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesUnsigned_64_Payload.attempts) {
        if(get_Config_Base_TypesUnsigned_64_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesUnsigned_64_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextU64()
        v = Base_Types.Unsigned_64_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesUnsigned_64_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesUnsigned_64_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextU64()
       v = Base_Types.Unsigned_64_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Float_Payload ===================

  def get_Config_Base_TypesFloat_Payload: Config_Base_TypesFloat_Payload
  def set_Config_Base_TypesFloat_Payload(config: Config_Base_TypesFloat_Payload): RandomLib

  def nextBase_TypesFloat_Payload(): Base_Types.Float_Payload = {
    var value: R = nextR()

    var v: Base_Types.Float_Payload = Base_Types.Float_Payload(value)

    if(get_Config_Base_TypesFloat_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesFloat_Payload.attempts) {
        if(get_Config_Base_TypesFloat_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesFloat_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextR()
        v = Base_Types.Float_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesFloat_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesFloat_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextR()
       v = Base_Types.Float_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Float_32_Payload ===================

  def get_Config_Base_TypesFloat_32_Payload: Config_Base_TypesFloat_32_Payload
  def set_Config_Base_TypesFloat_32_Payload(config: Config_Base_TypesFloat_32_Payload): RandomLib

  def nextBase_TypesFloat_32_Payload(): Base_Types.Float_32_Payload = {
    var value: F32 = nextF32()

    var v: Base_Types.Float_32_Payload = Base_Types.Float_32_Payload(value)

    if(get_Config_Base_TypesFloat_32_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesFloat_32_Payload.attempts) {
        if(get_Config_Base_TypesFloat_32_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesFloat_32_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextF32()
        v = Base_Types.Float_32_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesFloat_32_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesFloat_32_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextF32()
       v = Base_Types.Float_32_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Float_64_Payload ===================

  def get_Config_Base_TypesFloat_64_Payload: Config_Base_TypesFloat_64_Payload
  def set_Config_Base_TypesFloat_64_Payload(config: Config_Base_TypesFloat_64_Payload): RandomLib

  def nextBase_TypesFloat_64_Payload(): Base_Types.Float_64_Payload = {
    var value: F64 = nextF64()

    var v: Base_Types.Float_64_Payload = Base_Types.Float_64_Payload(value)

    if(get_Config_Base_TypesFloat_64_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesFloat_64_Payload.attempts) {
        if(get_Config_Base_TypesFloat_64_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesFloat_64_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextF64()
        v = Base_Types.Float_64_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesFloat_64_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesFloat_64_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextF64()
       v = Base_Types.Float_64_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Character_Payload ===================

  def get_Config_Base_TypesCharacter_Payload: Config_Base_TypesCharacter_Payload
  def set_Config_Base_TypesCharacter_Payload(config: Config_Base_TypesCharacter_Payload): RandomLib

  def nextBase_TypesCharacter_Payload(): Base_Types.Character_Payload = {
    var value: C = nextC()

    var v: Base_Types.Character_Payload = Base_Types.Character_Payload(value)

    if(get_Config_Base_TypesCharacter_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesCharacter_Payload.attempts) {
        if(get_Config_Base_TypesCharacter_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesCharacter_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextC()
        v = Base_Types.Character_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesCharacter_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesCharacter_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextC()
       v = Base_Types.Character_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.String_Payload ===================

  def get_Config_Base_TypesString_Payload: Config_Base_TypesString_Payload
  def set_Config_Base_TypesString_Payload(config: Config_Base_TypesString_Payload): RandomLib

  def nextBase_TypesString_Payload(): Base_Types.String_Payload = {
    var value: String = nextString()

    var v: Base_Types.String_Payload = Base_Types.String_Payload(value)

    if(get_Config_Base_TypesString_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesString_Payload.attempts) {
        if(get_Config_Base_TypesString_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesString_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextString()
        v = Base_Types.String_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesString_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesString_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextString()
       v = Base_Types.String_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== ISZ[B] =====================
  def get_Config_ISZB: Config_ISZB
  def set_Config_ISZB(config: Config_ISZB): RandomLib

  def nextISZB(): ISZ[B] = {

    var length: Z = gen.nextZBetween(0, get_numElement)
    var v: ISZ[B] = ISZ()
    for (r <- 0 until length) {
      v = v :+ nextB()
    }

    if(get_Config_ISZB.attempts >= 0) {
     for(i <- 0 to get_Config_ISZB.attempts) {
        if(get_Config_ISZB.filter(v)) {
          return v
        }
        if (get_Config_ISZB.verbose) {
          println(s"Retrying for failing value: $v")
        }

        length = gen.nextZBetween(0, get_numElement)
        v = ISZ()
        for (r <- 0 until length) {
           v = v :+ nextB()
        }
     }
    } else {
     while(T) {
       if(get_Config_ISZB.filter(v)) {
         return v
       }
       if (get_Config_ISZB.verbose) {
         println(s"Retrying for failing value: $v")
       }

       length = gen.nextZBetween(0, get_numElement)
       v = ISZ()
       for (r <- 0 until length) {
          v = v :+ nextB()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Base_Types.Bits_Payload ===================

  def get_Config_Base_TypesBits_Payload: Config_Base_TypesBits_Payload
  def set_Config_Base_TypesBits_Payload(config: Config_Base_TypesBits_Payload): RandomLib

  def nextBase_TypesBits_Payload(): Base_Types.Bits_Payload = {
    var value: ISZ[B] = nextISZB()

    var v: Base_Types.Bits_Payload = Base_Types.Bits_Payload(value)

    if(get_Config_Base_TypesBits_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Base_TypesBits_Payload.attempts) {
        if(get_Config_Base_TypesBits_Payload.filter(v)) {
          return v
        }
        if (get_Config_Base_TypesBits_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextISZB()
        v = Base_Types.Bits_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Base_TypesBits_Payload.filter(v)) {
         return v
       }
       if (get_Config_Base_TypesBits_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextISZB()
       v = Base_Types.Bits_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Failure_Flag ===================

  def get_Config_Isolette_Data_ModelFailure_Flag: Config_Isolette_Data_ModelFailure_Flag
  def set_Config_Isolette_Data_ModelFailure_Flag(config: Config_Isolette_Data_ModelFailure_Flag): RandomLib

  def nextIsolette_Data_ModelFailure_Flag(): Isolette_Data_Model.Failure_Flag = {
    var flag: B = nextB()

    var v: Isolette_Data_Model.Failure_Flag = Isolette_Data_Model.Failure_Flag(flag)

    if(get_Config_Isolette_Data_ModelFailure_Flag.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelFailure_Flag.attempts) {
        if(get_Config_Isolette_Data_ModelFailure_Flag.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelFailure_Flag.verbose) {
          println(s"Retrying for failing value: $v")
        }
        flag = nextB()
        v = Isolette_Data_Model.Failure_Flag(flag)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelFailure_Flag.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelFailure_Flag.verbose) {
         println(s"Retrying for failing value: $v")
       }
       flag = nextB()
       v = Isolette_Data_Model.Failure_Flag(flag)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Failure_Flag_Payload ===================

  def get_Config_Isolette_Data_ModelFailure_Flag_Payload: Config_Isolette_Data_ModelFailure_Flag_Payload
  def set_Config_Isolette_Data_ModelFailure_Flag_Payload(config: Config_Isolette_Data_ModelFailure_Flag_Payload): RandomLib

  def nextIsolette_Data_ModelFailure_Flag_Payload(): Isolette_Data_Model.Failure_Flag_Payload = {
    var value: Isolette_Data_Model.Failure_Flag = nextIsolette_Data_ModelFailure_Flag()

    var v: Isolette_Data_Model.Failure_Flag_Payload = Isolette_Data_Model.Failure_Flag_Payload(value)

    if(get_Config_Isolette_Data_ModelFailure_Flag_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelFailure_Flag_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelFailure_Flag_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelFailure_Flag_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelFailure_Flag()
        v = Isolette_Data_Model.Failure_Flag_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelFailure_Flag_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelFailure_Flag_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelFailure_Flag()
       v = Isolette_Data_Model.Failure_Flag_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Monitor_Mode.Type ===================

  def get_Config_Isolette_Data_ModelMonitor_ModeType: Config_Isolette_Data_ModelMonitor_ModeType
  def set_Config_Isolette_Data_ModelMonitor_ModeType(config: Config_Isolette_Data_ModelMonitor_ModeType): RandomLib

  def nextIsolette_Data_ModelMonitor_ModeType(): Isolette_Data_Model.Monitor_Mode.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.Isolette_Data_Model.Monitor_Mode.numOfElements-1)

    var v: Isolette_Data_Model.Monitor_Mode.Type = tc.Isolette_Data_Model.Monitor_Mode.byOrdinal(ordinal).get
    if(get_Config_Isolette_Data_ModelMonitor_ModeType.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelMonitor_ModeType.attempts) {
       if(get_Config_Isolette_Data_ModelMonitor_ModeType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelMonitor_ModeType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.Monitor_Mode.numOfElements-1)
       v = tc.Isolette_Data_Model.Monitor_Mode.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_Isolette_Data_ModelMonitor_ModeType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelMonitor_ModeType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.Monitor_Mode.numOfElements-1)
       v = tc.Isolette_Data_Model.Monitor_Mode.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Monitor_Mode_Payload ===================

  def get_Config_Isolette_Data_ModelMonitor_Mode_Payload: Config_Isolette_Data_ModelMonitor_Mode_Payload
  def set_Config_Isolette_Data_ModelMonitor_Mode_Payload(config: Config_Isolette_Data_ModelMonitor_Mode_Payload): RandomLib

  def nextIsolette_Data_ModelMonitor_Mode_Payload(): Isolette_Data_Model.Monitor_Mode_Payload = {
    var value: Isolette_Data_Model.Monitor_Mode.Type = nextIsolette_Data_ModelMonitor_ModeType()

    var v: Isolette_Data_Model.Monitor_Mode_Payload = Isolette_Data_Model.Monitor_Mode_Payload(value)

    if(get_Config_Isolette_Data_ModelMonitor_Mode_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelMonitor_Mode_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelMonitor_Mode_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelMonitor_Mode_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelMonitor_ModeType()
        v = Isolette_Data_Model.Monitor_Mode_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelMonitor_Mode_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelMonitor_Mode_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelMonitor_ModeType()
       v = Isolette_Data_Model.Monitor_Mode_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.On_Off.Type ===================

  def get_Config_Isolette_Data_ModelOn_OffType: Config_Isolette_Data_ModelOn_OffType
  def set_Config_Isolette_Data_ModelOn_OffType(config: Config_Isolette_Data_ModelOn_OffType): RandomLib

  def nextIsolette_Data_ModelOn_OffType(): Isolette_Data_Model.On_Off.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.Isolette_Data_Model.On_Off.numOfElements-1)

    var v: Isolette_Data_Model.On_Off.Type = tc.Isolette_Data_Model.On_Off.byOrdinal(ordinal).get
    if(get_Config_Isolette_Data_ModelOn_OffType.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelOn_OffType.attempts) {
       if(get_Config_Isolette_Data_ModelOn_OffType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelOn_OffType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.On_Off.numOfElements-1)
       v = tc.Isolette_Data_Model.On_Off.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_Isolette_Data_ModelOn_OffType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelOn_OffType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.On_Off.numOfElements-1)
       v = tc.Isolette_Data_Model.On_Off.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.On_Off_Payload ===================

  def get_Config_Isolette_Data_ModelOn_Off_Payload: Config_Isolette_Data_ModelOn_Off_Payload
  def set_Config_Isolette_Data_ModelOn_Off_Payload(config: Config_Isolette_Data_ModelOn_Off_Payload): RandomLib

  def nextIsolette_Data_ModelOn_Off_Payload(): Isolette_Data_Model.On_Off_Payload = {
    var value: Isolette_Data_Model.On_Off.Type = nextIsolette_Data_ModelOn_OffType()

    var v: Isolette_Data_Model.On_Off_Payload = Isolette_Data_Model.On_Off_Payload(value)

    if(get_Config_Isolette_Data_ModelOn_Off_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelOn_Off_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelOn_Off_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelOn_Off_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelOn_OffType()
        v = Isolette_Data_Model.On_Off_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelOn_Off_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelOn_Off_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelOn_OffType()
       v = Isolette_Data_Model.On_Off_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.PhysicalTemp ===================

  def get_Config_Isolette_Data_ModelPhysicalTemp: Config_Isolette_Data_ModelPhysicalTemp
  def set_Config_Isolette_Data_ModelPhysicalTemp(config: Config_Isolette_Data_ModelPhysicalTemp): RandomLib

  def nextIsolette_Data_ModelPhysicalTemp(): Isolette_Data_Model.PhysicalTemp = {
    var degrees: F32 = nextF32()

    var v: Isolette_Data_Model.PhysicalTemp = Isolette_Data_Model.PhysicalTemp(degrees)

    if(get_Config_Isolette_Data_ModelPhysicalTemp.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelPhysicalTemp.attempts) {
        if(get_Config_Isolette_Data_ModelPhysicalTemp.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelPhysicalTemp.verbose) {
          println(s"Retrying for failing value: $v")
        }
        degrees = nextF32()
        v = Isolette_Data_Model.PhysicalTemp(degrees)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelPhysicalTemp.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelPhysicalTemp.verbose) {
         println(s"Retrying for failing value: $v")
       }
       degrees = nextF32()
       v = Isolette_Data_Model.PhysicalTemp(degrees)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.PhysicalTemp_Payload ===================

  def get_Config_Isolette_Data_ModelPhysicalTemp_Payload: Config_Isolette_Data_ModelPhysicalTemp_Payload
  def set_Config_Isolette_Data_ModelPhysicalTemp_Payload(config: Config_Isolette_Data_ModelPhysicalTemp_Payload): RandomLib

  def nextIsolette_Data_ModelPhysicalTemp_Payload(): Isolette_Data_Model.PhysicalTemp_Payload = {
    var value: Isolette_Data_Model.PhysicalTemp = nextIsolette_Data_ModelPhysicalTemp()

    var v: Isolette_Data_Model.PhysicalTemp_Payload = Isolette_Data_Model.PhysicalTemp_Payload(value)

    if(get_Config_Isolette_Data_ModelPhysicalTemp_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelPhysicalTemp_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelPhysicalTemp_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelPhysicalTemp_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelPhysicalTemp()
        v = Isolette_Data_Model.PhysicalTemp_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelPhysicalTemp_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelPhysicalTemp_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelPhysicalTemp()
       v = Isolette_Data_Model.PhysicalTemp_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Regulator_Mode.Type ===================

  def get_Config_Isolette_Data_ModelRegulator_ModeType: Config_Isolette_Data_ModelRegulator_ModeType
  def set_Config_Isolette_Data_ModelRegulator_ModeType(config: Config_Isolette_Data_ModelRegulator_ModeType): RandomLib

  def nextIsolette_Data_ModelRegulator_ModeType(): Isolette_Data_Model.Regulator_Mode.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.Isolette_Data_Model.Regulator_Mode.numOfElements-1)

    var v: Isolette_Data_Model.Regulator_Mode.Type = tc.Isolette_Data_Model.Regulator_Mode.byOrdinal(ordinal).get
    if(get_Config_Isolette_Data_ModelRegulator_ModeType.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelRegulator_ModeType.attempts) {
       if(get_Config_Isolette_Data_ModelRegulator_ModeType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelRegulator_ModeType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.Regulator_Mode.numOfElements-1)
       v = tc.Isolette_Data_Model.Regulator_Mode.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_Isolette_Data_ModelRegulator_ModeType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelRegulator_ModeType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.Regulator_Mode.numOfElements-1)
       v = tc.Isolette_Data_Model.Regulator_Mode.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Regulator_Mode_Payload ===================

  def get_Config_Isolette_Data_ModelRegulator_Mode_Payload: Config_Isolette_Data_ModelRegulator_Mode_Payload
  def set_Config_Isolette_Data_ModelRegulator_Mode_Payload(config: Config_Isolette_Data_ModelRegulator_Mode_Payload): RandomLib

  def nextIsolette_Data_ModelRegulator_Mode_Payload(): Isolette_Data_Model.Regulator_Mode_Payload = {
    var value: Isolette_Data_Model.Regulator_Mode.Type = nextIsolette_Data_ModelRegulator_ModeType()

    var v: Isolette_Data_Model.Regulator_Mode_Payload = Isolette_Data_Model.Regulator_Mode_Payload(value)

    if(get_Config_Isolette_Data_ModelRegulator_Mode_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelRegulator_Mode_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelRegulator_Mode_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelRegulator_Mode_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelRegulator_ModeType()
        v = Isolette_Data_Model.Regulator_Mode_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelRegulator_Mode_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelRegulator_Mode_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelRegulator_ModeType()
       v = Isolette_Data_Model.Regulator_Mode_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Status.Type ===================

  def get_Config_Isolette_Data_ModelStatusType: Config_Isolette_Data_ModelStatusType
  def set_Config_Isolette_Data_ModelStatusType(config: Config_Isolette_Data_ModelStatusType): RandomLib

  def nextIsolette_Data_ModelStatusType(): Isolette_Data_Model.Status.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.Isolette_Data_Model.Status.numOfElements-1)

    var v: Isolette_Data_Model.Status.Type = tc.Isolette_Data_Model.Status.byOrdinal(ordinal).get
    if(get_Config_Isolette_Data_ModelStatusType.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelStatusType.attempts) {
       if(get_Config_Isolette_Data_ModelStatusType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelStatusType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.Status.numOfElements-1)
       v = tc.Isolette_Data_Model.Status.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_Isolette_Data_ModelStatusType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelStatusType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.Status.numOfElements-1)
       v = tc.Isolette_Data_Model.Status.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Status_Payload ===================

  def get_Config_Isolette_Data_ModelStatus_Payload: Config_Isolette_Data_ModelStatus_Payload
  def set_Config_Isolette_Data_ModelStatus_Payload(config: Config_Isolette_Data_ModelStatus_Payload): RandomLib

  def nextIsolette_Data_ModelStatus_Payload(): Isolette_Data_Model.Status_Payload = {
    var value: Isolette_Data_Model.Status.Type = nextIsolette_Data_ModelStatusType()

    var v: Isolette_Data_Model.Status_Payload = Isolette_Data_Model.Status_Payload(value)

    if(get_Config_Isolette_Data_ModelStatus_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelStatus_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelStatus_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelStatus_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelStatusType()
        v = Isolette_Data_Model.Status_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelStatus_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelStatus_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelStatusType()
       v = Isolette_Data_Model.Status_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Temp ===================

  def get_Config_Isolette_Data_ModelTemp: Config_Isolette_Data_ModelTemp
  def set_Config_Isolette_Data_ModelTemp(config: Config_Isolette_Data_ModelTemp): RandomLib

  def nextIsolette_Data_ModelTemp(): Isolette_Data_Model.Temp = {
    var degrees: F32 = nextF32()

    var v: Isolette_Data_Model.Temp = Isolette_Data_Model.Temp(degrees)

    if(get_Config_Isolette_Data_ModelTemp.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelTemp.attempts) {
        if(get_Config_Isolette_Data_ModelTemp.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelTemp.verbose) {
          println(s"Retrying for failing value: $v")
        }
        degrees = nextF32()
        v = Isolette_Data_Model.Temp(degrees)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelTemp.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelTemp.verbose) {
         println(s"Retrying for failing value: $v")
       }
       degrees = nextF32()
       v = Isolette_Data_Model.Temp(degrees)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.Temp_Payload ===================

  def get_Config_Isolette_Data_ModelTemp_Payload: Config_Isolette_Data_ModelTemp_Payload
  def set_Config_Isolette_Data_ModelTemp_Payload(config: Config_Isolette_Data_ModelTemp_Payload): RandomLib

  def nextIsolette_Data_ModelTemp_Payload(): Isolette_Data_Model.Temp_Payload = {
    var value: Isolette_Data_Model.Temp = nextIsolette_Data_ModelTemp()

    var v: Isolette_Data_Model.Temp_Payload = Isolette_Data_Model.Temp_Payload(value)

    if(get_Config_Isolette_Data_ModelTemp_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelTemp_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelTemp_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelTemp_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelTemp()
        v = Isolette_Data_Model.Temp_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelTemp_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelTemp_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelTemp()
       v = Isolette_Data_Model.Temp_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.TempWstatus ===================

  def get_Config_Isolette_Data_ModelTempWstatus: Config_Isolette_Data_ModelTempWstatus
  def set_Config_Isolette_Data_ModelTempWstatus(config: Config_Isolette_Data_ModelTempWstatus): RandomLib

  def nextIsolette_Data_ModelTempWstatus(): Isolette_Data_Model.TempWstatus = {
    var degrees: F32 = nextF32()
    var status: Isolette_Data_Model.ValueStatus.Type = nextIsolette_Data_ModelValueStatusType()

    var v: Isolette_Data_Model.TempWstatus = Isolette_Data_Model.TempWstatus(degrees, status)

    if(get_Config_Isolette_Data_ModelTempWstatus.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelTempWstatus.attempts) {
        if(get_Config_Isolette_Data_ModelTempWstatus.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelTempWstatus.verbose) {
          println(s"Retrying for failing value: $v")
        }
        degrees = nextF32()
        status = nextIsolette_Data_ModelValueStatusType()
        v = Isolette_Data_Model.TempWstatus(degrees, status)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelTempWstatus.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelTempWstatus.verbose) {
         println(s"Retrying for failing value: $v")
       }
       degrees = nextF32()
       status = nextIsolette_Data_ModelValueStatusType()
       v = Isolette_Data_Model.TempWstatus(degrees, status)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.TempWstatus_Payload ===================

  def get_Config_Isolette_Data_ModelTempWstatus_Payload: Config_Isolette_Data_ModelTempWstatus_Payload
  def set_Config_Isolette_Data_ModelTempWstatus_Payload(config: Config_Isolette_Data_ModelTempWstatus_Payload): RandomLib

  def nextIsolette_Data_ModelTempWstatus_Payload(): Isolette_Data_Model.TempWstatus_Payload = {
    var value: Isolette_Data_Model.TempWstatus = nextIsolette_Data_ModelTempWstatus()

    var v: Isolette_Data_Model.TempWstatus_Payload = Isolette_Data_Model.TempWstatus_Payload(value)

    if(get_Config_Isolette_Data_ModelTempWstatus_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelTempWstatus_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelTempWstatus_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelTempWstatus_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelTempWstatus()
        v = Isolette_Data_Model.TempWstatus_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelTempWstatus_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelTempWstatus_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelTempWstatus()
       v = Isolette_Data_Model.TempWstatus_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.ValueStatus.Type ===================

  def get_Config_Isolette_Data_ModelValueStatusType: Config_Isolette_Data_ModelValueStatusType
  def set_Config_Isolette_Data_ModelValueStatusType(config: Config_Isolette_Data_ModelValueStatusType): RandomLib

  def nextIsolette_Data_ModelValueStatusType(): Isolette_Data_Model.ValueStatus.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.Isolette_Data_Model.ValueStatus.numOfElements-1)

    var v: Isolette_Data_Model.ValueStatus.Type = tc.Isolette_Data_Model.ValueStatus.byOrdinal(ordinal).get
    if(get_Config_Isolette_Data_ModelValueStatusType.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelValueStatusType.attempts) {
       if(get_Config_Isolette_Data_ModelValueStatusType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelValueStatusType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.ValueStatus.numOfElements-1)
       v = tc.Isolette_Data_Model.ValueStatus.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_Isolette_Data_ModelValueStatusType.filter(v)) {
        return v
       }
       if (get_Config_Isolette_Data_ModelValueStatusType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.Isolette_Data_Model.ValueStatus.numOfElements-1)
       v = tc.Isolette_Data_Model.ValueStatus.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Data_Model.ValueStatus_Payload ===================

  def get_Config_Isolette_Data_ModelValueStatus_Payload: Config_Isolette_Data_ModelValueStatus_Payload
  def set_Config_Isolette_Data_ModelValueStatus_Payload(config: Config_Isolette_Data_ModelValueStatus_Payload): RandomLib

  def nextIsolette_Data_ModelValueStatus_Payload(): Isolette_Data_Model.ValueStatus_Payload = {
    var value: Isolette_Data_Model.ValueStatus.Type = nextIsolette_Data_ModelValueStatusType()

    var v: Isolette_Data_Model.ValueStatus_Payload = Isolette_Data_Model.ValueStatus_Payload(value)

    if(get_Config_Isolette_Data_ModelValueStatus_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_Data_ModelValueStatus_Payload.attempts) {
        if(get_Config_Isolette_Data_ModelValueStatus_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_Data_ModelValueStatus_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_Data_ModelValueStatusType()
        v = Isolette_Data_Model.ValueStatus_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_Data_ModelValueStatus_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_Data_ModelValueStatus_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_Data_ModelValueStatusType()
       v = Isolette_Data_Model.ValueStatus_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Environment.Air_Interaction ===================

  def get_Config_Isolette_EnvironmentAir_Interaction: Config_Isolette_EnvironmentAir_Interaction
  def set_Config_Isolette_EnvironmentAir_Interaction(config: Config_Isolette_EnvironmentAir_Interaction): RandomLib

  def nextIsolette_EnvironmentAir_Interaction(): Isolette_Environment.Air_Interaction = {
    var dummyField: B = nextB()

    var v: Isolette_Environment.Air_Interaction = Isolette_Environment.Air_Interaction(dummyField)

    if(get_Config_Isolette_EnvironmentAir_Interaction.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_EnvironmentAir_Interaction.attempts) {
        if(get_Config_Isolette_EnvironmentAir_Interaction.filter(v)) {
          return v
        }
        if (get_Config_Isolette_EnvironmentAir_Interaction.verbose) {
          println(s"Retrying for failing value: $v")
        }
        dummyField = nextB()
        v = Isolette_Environment.Air_Interaction(dummyField)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_EnvironmentAir_Interaction.filter(v)) {
         return v
       }
       if (get_Config_Isolette_EnvironmentAir_Interaction.verbose) {
         println(s"Retrying for failing value: $v")
       }
       dummyField = nextB()
       v = Isolette_Environment.Air_Interaction(dummyField)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Environment.Air_Interaction_Payload ===================

  def get_Config_Isolette_EnvironmentAir_Interaction_Payload: Config_Isolette_EnvironmentAir_Interaction_Payload
  def set_Config_Isolette_EnvironmentAir_Interaction_Payload(config: Config_Isolette_EnvironmentAir_Interaction_Payload): RandomLib

  def nextIsolette_EnvironmentAir_Interaction_Payload(): Isolette_Environment.Air_Interaction_Payload = {
    var value: Isolette_Environment.Air_Interaction = nextIsolette_EnvironmentAir_Interaction()

    var v: Isolette_Environment.Air_Interaction_Payload = Isolette_Environment.Air_Interaction_Payload(value)

    if(get_Config_Isolette_EnvironmentAir_Interaction_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_EnvironmentAir_Interaction_Payload.attempts) {
        if(get_Config_Isolette_EnvironmentAir_Interaction_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_EnvironmentAir_Interaction_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_EnvironmentAir_Interaction()
        v = Isolette_Environment.Air_Interaction_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_EnvironmentAir_Interaction_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_EnvironmentAir_Interaction_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_EnvironmentAir_Interaction()
       v = Isolette_Environment.Air_Interaction_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Environment.Heat ===================

  def get_Config_Isolette_EnvironmentHeat: Config_Isolette_EnvironmentHeat
  def set_Config_Isolette_EnvironmentHeat(config: Config_Isolette_EnvironmentHeat): RandomLib

  def nextIsolette_EnvironmentHeat(): Isolette_Environment.Heat = {
    var dummyField: B = nextB()

    var v: Isolette_Environment.Heat = Isolette_Environment.Heat(dummyField)

    if(get_Config_Isolette_EnvironmentHeat.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_EnvironmentHeat.attempts) {
        if(get_Config_Isolette_EnvironmentHeat.filter(v)) {
          return v
        }
        if (get_Config_Isolette_EnvironmentHeat.verbose) {
          println(s"Retrying for failing value: $v")
        }
        dummyField = nextB()
        v = Isolette_Environment.Heat(dummyField)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_EnvironmentHeat.filter(v)) {
         return v
       }
       if (get_Config_Isolette_EnvironmentHeat.verbose) {
         println(s"Retrying for failing value: $v")
       }
       dummyField = nextB()
       v = Isolette_Environment.Heat(dummyField)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Environment.Heat_Payload ===================

  def get_Config_Isolette_EnvironmentHeat_Payload: Config_Isolette_EnvironmentHeat_Payload
  def set_Config_Isolette_EnvironmentHeat_Payload(config: Config_Isolette_EnvironmentHeat_Payload): RandomLib

  def nextIsolette_EnvironmentHeat_Payload(): Isolette_Environment.Heat_Payload = {
    var value: Isolette_Environment.Heat = nextIsolette_EnvironmentHeat()

    var v: Isolette_Environment.Heat_Payload = Isolette_Environment.Heat_Payload(value)

    if(get_Config_Isolette_EnvironmentHeat_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_EnvironmentHeat_Payload.attempts) {
        if(get_Config_Isolette_EnvironmentHeat_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_EnvironmentHeat_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_EnvironmentHeat()
        v = Isolette_Environment.Heat_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_EnvironmentHeat_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_EnvironmentHeat_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_EnvironmentHeat()
       v = Isolette_Environment.Heat_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Environment.Interface_Interaction ===================

  def get_Config_Isolette_EnvironmentInterface_Interaction: Config_Isolette_EnvironmentInterface_Interaction
  def set_Config_Isolette_EnvironmentInterface_Interaction(config: Config_Isolette_EnvironmentInterface_Interaction): RandomLib

  def nextIsolette_EnvironmentInterface_Interaction(): Isolette_Environment.Interface_Interaction = {
    var dummyField: B = nextB()

    var v: Isolette_Environment.Interface_Interaction = Isolette_Environment.Interface_Interaction(dummyField)

    if(get_Config_Isolette_EnvironmentInterface_Interaction.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_EnvironmentInterface_Interaction.attempts) {
        if(get_Config_Isolette_EnvironmentInterface_Interaction.filter(v)) {
          return v
        }
        if (get_Config_Isolette_EnvironmentInterface_Interaction.verbose) {
          println(s"Retrying for failing value: $v")
        }
        dummyField = nextB()
        v = Isolette_Environment.Interface_Interaction(dummyField)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_EnvironmentInterface_Interaction.filter(v)) {
         return v
       }
       if (get_Config_Isolette_EnvironmentInterface_Interaction.verbose) {
         println(s"Retrying for failing value: $v")
       }
       dummyField = nextB()
       v = Isolette_Environment.Interface_Interaction(dummyField)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= Isolette_Environment.Interface_Interaction_Payload ===================

  def get_Config_Isolette_EnvironmentInterface_Interaction_Payload: Config_Isolette_EnvironmentInterface_Interaction_Payload
  def set_Config_Isolette_EnvironmentInterface_Interaction_Payload(config: Config_Isolette_EnvironmentInterface_Interaction_Payload): RandomLib

  def nextIsolette_EnvironmentInterface_Interaction_Payload(): Isolette_Environment.Interface_Interaction_Payload = {
    var value: Isolette_Environment.Interface_Interaction = nextIsolette_EnvironmentInterface_Interaction()

    var v: Isolette_Environment.Interface_Interaction_Payload = Isolette_Environment.Interface_Interaction_Payload(value)

    if(get_Config_Isolette_EnvironmentInterface_Interaction_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_Isolette_EnvironmentInterface_Interaction_Payload.attempts) {
        if(get_Config_Isolette_EnvironmentInterface_Interaction_Payload.filter(v)) {
          return v
        }
        if (get_Config_Isolette_EnvironmentInterface_Interaction_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextIsolette_EnvironmentInterface_Interaction()
        v = Isolette_Environment.Interface_Interaction_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_Isolette_EnvironmentInterface_Interaction_Payload.filter(v)) {
         return v
       }
       if (get_Config_Isolette_EnvironmentInterface_Interaction_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextIsolette_EnvironmentInterface_Interaction()
       v = Isolette_Environment.Interface_Interaction_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.FanAck.Type ===================

  def get_Config_TempControlMixedFanAckType: Config_TempControlMixedFanAckType
  def set_Config_TempControlMixedFanAckType(config: Config_TempControlMixedFanAckType): RandomLib

  def nextTempControlMixedFanAckType(): TempControlMixed.FanAck.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlMixed.FanAck.numOfElements-1)

    var v: TempControlMixed.FanAck.Type = tc.TempControlMixed.FanAck.byOrdinal(ordinal).get
    if(get_Config_TempControlMixedFanAckType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedFanAckType.attempts) {
       if(get_Config_TempControlMixedFanAckType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixed.FanAck.numOfElements-1)
       v = tc.TempControlMixed.FanAck.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlMixedFanAckType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixed.FanAck.numOfElements-1)
       v = tc.TempControlMixed.FanAck.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.FanAck_Payload ===================

  def get_Config_TempControlMixedFanAck_Payload: Config_TempControlMixedFanAck_Payload
  def set_Config_TempControlMixedFanAck_Payload(config: Config_TempControlMixedFanAck_Payload): RandomLib

  def nextTempControlMixedFanAck_Payload(): TempControlMixed.FanAck_Payload = {
    var value: TempControlMixed.FanAck.Type = nextTempControlMixedFanAckType()

    var v: TempControlMixed.FanAck_Payload = TempControlMixed.FanAck_Payload(value)

    if(get_Config_TempControlMixedFanAck_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedFanAck_Payload.attempts) {
        if(get_Config_TempControlMixedFanAck_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedFanAck_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedFanAckType()
        v = TempControlMixed.FanAck_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedFanAck_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedFanAck_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedFanAckType()
       v = TempControlMixed.FanAck_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.FanCmd.Type ===================

  def get_Config_TempControlMixedFanCmdType: Config_TempControlMixedFanCmdType
  def set_Config_TempControlMixedFanCmdType(config: Config_TempControlMixedFanCmdType): RandomLib

  def nextTempControlMixedFanCmdType(): TempControlMixed.FanCmd.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlMixed.FanCmd.numOfElements-1)

    var v: TempControlMixed.FanCmd.Type = tc.TempControlMixed.FanCmd.byOrdinal(ordinal).get
    if(get_Config_TempControlMixedFanCmdType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedFanCmdType.attempts) {
       if(get_Config_TempControlMixedFanCmdType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixed.FanCmd.numOfElements-1)
       v = tc.TempControlMixed.FanCmd.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlMixedFanCmdType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixed.FanCmd.numOfElements-1)
       v = tc.TempControlMixed.FanCmd.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.FanCmd_Payload ===================

  def get_Config_TempControlMixedFanCmd_Payload: Config_TempControlMixedFanCmd_Payload
  def set_Config_TempControlMixedFanCmd_Payload(config: Config_TempControlMixedFanCmd_Payload): RandomLib

  def nextTempControlMixedFanCmd_Payload(): TempControlMixed.FanCmd_Payload = {
    var value: TempControlMixed.FanCmd.Type = nextTempControlMixedFanCmdType()

    var v: TempControlMixed.FanCmd_Payload = TempControlMixed.FanCmd_Payload(value)

    if(get_Config_TempControlMixedFanCmd_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedFanCmd_Payload.attempts) {
        if(get_Config_TempControlMixedFanCmd_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedFanCmd_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedFanCmdType()
        v = TempControlMixed.FanCmd_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedFanCmd_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedFanCmd_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedFanCmdType()
       v = TempControlMixed.FanCmd_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.SetPoint ===================

  def get_Config_TempControlMixedSetPoint: Config_TempControlMixedSetPoint
  def set_Config_TempControlMixedSetPoint(config: Config_TempControlMixedSetPoint): RandomLib

  def nextTempControlMixedSetPoint(): TempControlMixed.SetPoint = {
    var low: TempControlMixed.Temperature = nextTempControlMixedTemperature()
    var high: TempControlMixed.Temperature = nextTempControlMixedTemperature()

    var v: TempControlMixed.SetPoint = TempControlMixed.SetPoint(low, high)

    if(get_Config_TempControlMixedSetPoint.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSetPoint.attempts) {
        if(get_Config_TempControlMixedSetPoint.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSetPoint.verbose) {
          println(s"Retrying for failing value: $v")
        }
        low = nextTempControlMixedTemperature()
        high = nextTempControlMixedTemperature()
        v = TempControlMixed.SetPoint(low, high)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSetPoint.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSetPoint.verbose) {
         println(s"Retrying for failing value: $v")
       }
       low = nextTempControlMixedTemperature()
       high = nextTempControlMixedTemperature()
       v = TempControlMixed.SetPoint(low, high)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.SetPoint_Payload ===================

  def get_Config_TempControlMixedSetPoint_Payload: Config_TempControlMixedSetPoint_Payload
  def set_Config_TempControlMixedSetPoint_Payload(config: Config_TempControlMixedSetPoint_Payload): RandomLib

  def nextTempControlMixedSetPoint_Payload(): TempControlMixed.SetPoint_Payload = {
    var value: TempControlMixed.SetPoint = nextTempControlMixedSetPoint()

    var v: TempControlMixed.SetPoint_Payload = TempControlMixed.SetPoint_Payload(value)

    if(get_Config_TempControlMixedSetPoint_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSetPoint_Payload.attempts) {
        if(get_Config_TempControlMixedSetPoint_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSetPoint_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedSetPoint()
        v = TempControlMixed.SetPoint_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSetPoint_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSetPoint_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedSetPoint()
       v = TempControlMixed.SetPoint_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.TempUnit.Type ===================

  def get_Config_TempControlMixedTempUnitType: Config_TempControlMixedTempUnitType
  def set_Config_TempControlMixedTempUnitType(config: Config_TempControlMixedTempUnitType): RandomLib

  def nextTempControlMixedTempUnitType(): TempControlMixed.TempUnit.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlMixed.TempUnit.numOfElements-1)

    var v: TempControlMixed.TempUnit.Type = tc.TempControlMixed.TempUnit.byOrdinal(ordinal).get
    if(get_Config_TempControlMixedTempUnitType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedTempUnitType.attempts) {
       if(get_Config_TempControlMixedTempUnitType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedTempUnitType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixed.TempUnit.numOfElements-1)
       v = tc.TempControlMixed.TempUnit.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlMixedTempUnitType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedTempUnitType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixed.TempUnit.numOfElements-1)
       v = tc.TempControlMixed.TempUnit.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.TempUnit_Payload ===================

  def get_Config_TempControlMixedTempUnit_Payload: Config_TempControlMixedTempUnit_Payload
  def set_Config_TempControlMixedTempUnit_Payload(config: Config_TempControlMixedTempUnit_Payload): RandomLib

  def nextTempControlMixedTempUnit_Payload(): TempControlMixed.TempUnit_Payload = {
    var value: TempControlMixed.TempUnit.Type = nextTempControlMixedTempUnitType()

    var v: TempControlMixed.TempUnit_Payload = TempControlMixed.TempUnit_Payload(value)

    if(get_Config_TempControlMixedTempUnit_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedTempUnit_Payload.attempts) {
        if(get_Config_TempControlMixedTempUnit_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedTempUnit_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedTempUnitType()
        v = TempControlMixed.TempUnit_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedTempUnit_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedTempUnit_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedTempUnitType()
       v = TempControlMixed.TempUnit_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.Temperature ===================

  def get_Config_TempControlMixedTemperature: Config_TempControlMixedTemperature
  def set_Config_TempControlMixedTemperature(config: Config_TempControlMixedTemperature): RandomLib

  def nextTempControlMixedTemperature(): TempControlMixed.Temperature = {
    var degrees: F32 = nextF32()
    var unit: TempControlMixed.TempUnit.Type = nextTempControlMixedTempUnitType()

    var v: TempControlMixed.Temperature = TempControlMixed.Temperature(degrees, unit)

    if(get_Config_TempControlMixedTemperature.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedTemperature.attempts) {
        if(get_Config_TempControlMixedTemperature.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedTemperature.verbose) {
          println(s"Retrying for failing value: $v")
        }
        degrees = nextF32()
        unit = nextTempControlMixedTempUnitType()
        v = TempControlMixed.Temperature(degrees, unit)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedTemperature.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedTemperature.verbose) {
         println(s"Retrying for failing value: $v")
       }
       degrees = nextF32()
       unit = nextTempControlMixedTempUnitType()
       v = TempControlMixed.Temperature(degrees, unit)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixed.Temperature_Payload ===================

  def get_Config_TempControlMixedTemperature_Payload: Config_TempControlMixedTemperature_Payload
  def set_Config_TempControlMixedTemperature_Payload(config: Config_TempControlMixedTemperature_Payload): RandomLib

  def nextTempControlMixedTemperature_Payload(): TempControlMixed.Temperature_Payload = {
    var value: TempControlMixed.Temperature = nextTempControlMixedTemperature()

    var v: TempControlMixed.Temperature_Payload = TempControlMixed.Temperature_Payload(value)

    if(get_Config_TempControlMixedTemperature_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedTemperature_Payload.attempts) {
        if(get_Config_TempControlMixedTemperature_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedTemperature_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedTemperature()
        v = TempControlMixed.Temperature_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedTemperature_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedTemperature_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedTemperature()
       v = TempControlMixed.Temperature_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.FanAck.Type ===================

  def get_Config_TempControlMixedSeL4CAmKESFanAckType: Config_TempControlMixedSeL4CAmKESFanAckType
  def set_Config_TempControlMixedSeL4CAmKESFanAckType(config: Config_TempControlMixedSeL4CAmKESFanAckType): RandomLib

  def nextTempControlMixedSeL4CAmKESFanAckType(): TempControlMixedSeL4CAmKES.FanAck.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.FanAck.numOfElements-1)

    var v: TempControlMixedSeL4CAmKES.FanAck.Type = tc.TempControlMixedSeL4CAmKES.FanAck.byOrdinal(ordinal).get
    if(get_Config_TempControlMixedSeL4CAmKESFanAckType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFanAckType.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESFanAckType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.FanAck.numOfElements-1)
       v = tc.TempControlMixedSeL4CAmKES.FanAck.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlMixedSeL4CAmKESFanAckType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.FanAck.numOfElements-1)
       v = tc.TempControlMixedSeL4CAmKES.FanAck.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.FanAck_Payload ===================

  def get_Config_TempControlMixedSeL4CAmKESFanAck_Payload: Config_TempControlMixedSeL4CAmKESFanAck_Payload
  def set_Config_TempControlMixedSeL4CAmKESFanAck_Payload(config: Config_TempControlMixedSeL4CAmKESFanAck_Payload): RandomLib

  def nextTempControlMixedSeL4CAmKESFanAck_Payload(): TempControlMixedSeL4CAmKES.FanAck_Payload = {
    var value: TempControlMixedSeL4CAmKES.FanAck.Type = nextTempControlMixedSeL4CAmKESFanAckType()

    var v: TempControlMixedSeL4CAmKES.FanAck_Payload = TempControlMixedSeL4CAmKES.FanAck_Payload(value)

    if(get_Config_TempControlMixedSeL4CAmKESFanAck_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFanAck_Payload.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESFanAck_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESFanAck_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedSeL4CAmKESFanAckType()
        v = TempControlMixedSeL4CAmKES.FanAck_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESFanAck_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFanAck_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedSeL4CAmKESFanAckType()
       v = TempControlMixedSeL4CAmKES.FanAck_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.FanCmd.Type ===================

  def get_Config_TempControlMixedSeL4CAmKESFanCmdType: Config_TempControlMixedSeL4CAmKESFanCmdType
  def set_Config_TempControlMixedSeL4CAmKESFanCmdType(config: Config_TempControlMixedSeL4CAmKESFanCmdType): RandomLib

  def nextTempControlMixedSeL4CAmKESFanCmdType(): TempControlMixedSeL4CAmKES.FanCmd.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.FanCmd.numOfElements-1)

    var v: TempControlMixedSeL4CAmKES.FanCmd.Type = tc.TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(ordinal).get
    if(get_Config_TempControlMixedSeL4CAmKESFanCmdType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFanCmdType.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESFanCmdType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.FanCmd.numOfElements-1)
       v = tc.TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlMixedSeL4CAmKESFanCmdType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.FanCmd.numOfElements-1)
       v = tc.TempControlMixedSeL4CAmKES.FanCmd.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.FanCmd_Payload ===================

  def get_Config_TempControlMixedSeL4CAmKESFanCmd_Payload: Config_TempControlMixedSeL4CAmKESFanCmd_Payload
  def set_Config_TempControlMixedSeL4CAmKESFanCmd_Payload(config: Config_TempControlMixedSeL4CAmKESFanCmd_Payload): RandomLib

  def nextTempControlMixedSeL4CAmKESFanCmd_Payload(): TempControlMixedSeL4CAmKES.FanCmd_Payload = {
    var value: TempControlMixedSeL4CAmKES.FanCmd.Type = nextTempControlMixedSeL4CAmKESFanCmdType()

    var v: TempControlMixedSeL4CAmKES.FanCmd_Payload = TempControlMixedSeL4CAmKES.FanCmd_Payload(value)

    if(get_Config_TempControlMixedSeL4CAmKESFanCmd_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFanCmd_Payload.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESFanCmd_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESFanCmd_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedSeL4CAmKESFanCmdType()
        v = TempControlMixedSeL4CAmKES.FanCmd_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESFanCmd_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFanCmd_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedSeL4CAmKESFanCmdType()
       v = TempControlMixedSeL4CAmKES.FanCmd_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container ===================

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container
  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container): RandomLib

  def nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container(): TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container = {
    var callEnum: ISZ[TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.Type] = ISZ(TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id, TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id)

    if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.additiveTypeFiltering) {
       callEnum = get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.typeFilter
    } else {
       for(h <- get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container = c match {
      case TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
      case TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== Option[TempControlMixedSeL4CAmKES.FanCmd.Type] =====================
  def get_Config_OptionTempControlMixedSeL4CAmKESFanCmdType: Config_OptionTempControlMixedSeL4CAmKESFanCmdType
  def set_Config_OptionTempControlMixedSeL4CAmKESFanCmdType(config: Config_OptionTempControlMixedSeL4CAmKESFanCmdType): RandomLib

  def nextOptionTempControlMixedSeL4CAmKESFanCmdType(): Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = {

    var none: Z = gen.nextZBetween(0,1)
    var v: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = if(none == 0) {
      Some(nextTempControlMixedSeL4CAmKESFanCmdType())
    } else {
      None()
    }

    if(get_Config_OptionTempControlMixedSeL4CAmKESFanCmdType.attempts >= 0) {
     for(i <- 0 to get_Config_OptionTempControlMixedSeL4CAmKESFanCmdType.attempts) {
        if(get_Config_OptionTempControlMixedSeL4CAmKESFanCmdType.filter(v)) {
          return v
        }
        if (get_Config_OptionTempControlMixedSeL4CAmKESFanCmdType.verbose) {
          println(s"Retrying for failing value: $v")
        }

        none = gen.nextZBetween(0,1)
        v = if(none == 0) {
           Some(nextTempControlMixedSeL4CAmKESFanCmdType())
        } else {
           None()
        }
     }
    } else {
     while(T) {
       if(get_Config_OptionTempControlMixedSeL4CAmKESFanCmdType.filter(v)) {
         return v
       }
       if (get_Config_OptionTempControlMixedSeL4CAmKESFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }

       none = gen.nextZBetween(0,1)
       v = if(none == 0) {
          Some(nextTempControlMixedSeL4CAmKESFanCmdType())
       } else {
          None()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P ===================

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P
  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P): RandomLib

  def nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P(): TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P = {
    var api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = nextOptionTempControlMixedSeL4CAmKESFanCmdType()

    var v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P = TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P(api_fanCmd)

    if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanCmd = nextOptionTempControlMixedSeL4CAmKESFanCmdType()
        v = TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P(api_fanCmd)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanCmd = nextOptionTempControlMixedSeL4CAmKESFanCmdType()
       v = TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P(api_fanCmd)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS ===================

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS
  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS): RandomLib

  def nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS(): TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS = {
    var api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = nextOptionTempControlMixedSeL4CAmKESFanCmdType()

    var v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS = TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS(api_fanCmd)

    if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanCmd = nextOptionTempControlMixedSeL4CAmKESFanCmdType()
        v = TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS(api_fanCmd)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanCmd = nextOptionTempControlMixedSeL4CAmKESFanCmdType()
       v = TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS(api_fanCmd)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container ===================

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container
  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container): RandomLib

  def nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container(): TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container = {
    var callEnum: ISZ[TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.Type] = ISZ(TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id, TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id)

    if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.additiveTypeFiltering) {
       callEnum = get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.typeFilter
    } else {
       for(h <- get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container = c match {
      case TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
      case TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== Option[TempControlMixedSeL4CAmKES.FanAck.Type] =====================
  def get_Config_OptionTempControlMixedSeL4CAmKESFanAckType: Config_OptionTempControlMixedSeL4CAmKESFanAckType
  def set_Config_OptionTempControlMixedSeL4CAmKESFanAckType(config: Config_OptionTempControlMixedSeL4CAmKESFanAckType): RandomLib

  def nextOptionTempControlMixedSeL4CAmKESFanAckType(): Option[TempControlMixedSeL4CAmKES.FanAck.Type] = {

    var none: Z = gen.nextZBetween(0,1)
    var v: Option[TempControlMixedSeL4CAmKES.FanAck.Type] = if(none == 0) {
      Some(nextTempControlMixedSeL4CAmKESFanAckType())
    } else {
      None()
    }

    if(get_Config_OptionTempControlMixedSeL4CAmKESFanAckType.attempts >= 0) {
     for(i <- 0 to get_Config_OptionTempControlMixedSeL4CAmKESFanAckType.attempts) {
        if(get_Config_OptionTempControlMixedSeL4CAmKESFanAckType.filter(v)) {
          return v
        }
        if (get_Config_OptionTempControlMixedSeL4CAmKESFanAckType.verbose) {
          println(s"Retrying for failing value: $v")
        }

        none = gen.nextZBetween(0,1)
        v = if(none == 0) {
           Some(nextTempControlMixedSeL4CAmKESFanAckType())
        } else {
           None()
        }
     }
    } else {
     while(T) {
       if(get_Config_OptionTempControlMixedSeL4CAmKESFanAckType.filter(v)) {
         return v
       }
       if (get_Config_OptionTempControlMixedSeL4CAmKESFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }

       none = gen.nextZBetween(0,1)
       v = if(none == 0) {
          Some(nextTempControlMixedSeL4CAmKESFanAckType())
       } else {
          None()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P ===================

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P
  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P): RandomLib

  def nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P(): TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P = {
    var api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type] = nextOptionTempControlMixedSeL4CAmKESFanAckType()

    var v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P = TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P(api_fanAck)

    if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanAck = nextOptionTempControlMixedSeL4CAmKESFanAckType()
        v = TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P(api_fanAck)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanAck = nextOptionTempControlMixedSeL4CAmKESFanAckType()
       v = TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P(api_fanAck)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS ===================

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS
  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS): RandomLib

  def nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS(): TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS = {
    var api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type] = nextOptionTempControlMixedSeL4CAmKESFanAckType()

    var v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS = TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS(api_fanAck)

    if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanAck = nextOptionTempControlMixedSeL4CAmKESFanAckType()
        v = TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS(api_fanAck)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanAck = nextOptionTempControlMixedSeL4CAmKESFanAckType()
       v = TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS(api_fanAck)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.SetPoint ===================

  def get_Config_TempControlMixedSeL4CAmKESSetPoint: Config_TempControlMixedSeL4CAmKESSetPoint
  def set_Config_TempControlMixedSeL4CAmKESSetPoint(config: Config_TempControlMixedSeL4CAmKESSetPoint): RandomLib

  def nextTempControlMixedSeL4CAmKESSetPoint(): TempControlMixedSeL4CAmKES.SetPoint = {
    var low: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()
    var high: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()

    var v: TempControlMixedSeL4CAmKES.SetPoint = TempControlMixedSeL4CAmKES.SetPoint(low, high)

    if(get_Config_TempControlMixedSeL4CAmKESSetPoint.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESSetPoint.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESSetPoint.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESSetPoint.verbose) {
          println(s"Retrying for failing value: $v")
        }
        low = nextTempControlMixedSeL4CAmKESTemperature()
        high = nextTempControlMixedSeL4CAmKESTemperature()
        v = TempControlMixedSeL4CAmKES.SetPoint(low, high)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESSetPoint.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESSetPoint.verbose) {
         println(s"Retrying for failing value: $v")
       }
       low = nextTempControlMixedSeL4CAmKESTemperature()
       high = nextTempControlMixedSeL4CAmKESTemperature()
       v = TempControlMixedSeL4CAmKES.SetPoint(low, high)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.SetPoint_Payload ===================

  def get_Config_TempControlMixedSeL4CAmKESSetPoint_Payload: Config_TempControlMixedSeL4CAmKESSetPoint_Payload
  def set_Config_TempControlMixedSeL4CAmKESSetPoint_Payload(config: Config_TempControlMixedSeL4CAmKESSetPoint_Payload): RandomLib

  def nextTempControlMixedSeL4CAmKESSetPoint_Payload(): TempControlMixedSeL4CAmKES.SetPoint_Payload = {
    var value: TempControlMixedSeL4CAmKES.SetPoint = nextTempControlMixedSeL4CAmKESSetPoint()

    var v: TempControlMixedSeL4CAmKES.SetPoint_Payload = TempControlMixedSeL4CAmKES.SetPoint_Payload(value)

    if(get_Config_TempControlMixedSeL4CAmKESSetPoint_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESSetPoint_Payload.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESSetPoint_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESSetPoint_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedSeL4CAmKESSetPoint()
        v = TempControlMixedSeL4CAmKES.SetPoint_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESSetPoint_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESSetPoint_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedSeL4CAmKESSetPoint()
       v = TempControlMixedSeL4CAmKES.SetPoint_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container ===================

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container
  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container): RandomLib

  def nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container(): TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container = {
    var callEnum: ISZ[TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.Type] = ISZ(TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id, TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id)

    if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.additiveTypeFiltering) {
       callEnum = get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.typeFilter
    } else {
       for(h <- get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container = c match {
      case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
      case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== Option[art.Empty] =====================
  def get_Config_Option_artEmpty: Config_Option_artEmpty
  def set_Config_Option_artEmpty(config: Config_Option_artEmpty): RandomLib

  def nextOption_artEmpty(): Option[art.Empty] = {

    var none: Z = gen.nextZBetween(0,1)
    var v: Option[art.Empty] = if(none == 0) {
      Some(next_artEmpty())
    } else {
      None()
    }

    if(get_Config_Option_artEmpty.attempts >= 0) {
     for(i <- 0 to get_Config_Option_artEmpty.attempts) {
        if(get_Config_Option_artEmpty.filter(v)) {
          return v
        }
        if (get_Config_Option_artEmpty.verbose) {
          println(s"Retrying for failing value: $v")
        }

        none = gen.nextZBetween(0,1)
        v = if(none == 0) {
           Some(next_artEmpty())
        } else {
           None()
        }
     }
    } else {
     while(T) {
       if(get_Config_Option_artEmpty.filter(v)) {
         return v
       }
       if (get_Config_Option_artEmpty.verbose) {
         println(s"Retrying for failing value: $v")
       }

       none = gen.nextZBetween(0,1)
       v = if(none == 0) {
          Some(next_artEmpty())
       } else {
          None()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  //=================== Option[TempControlMixedSeL4CAmKES.SetPoint] =====================
  def get_Config_OptionTempControlMixedSeL4CAmKESSetPoint: Config_OptionTempControlMixedSeL4CAmKESSetPoint
  def set_Config_OptionTempControlMixedSeL4CAmKESSetPoint(config: Config_OptionTempControlMixedSeL4CAmKESSetPoint): RandomLib

  def nextOptionTempControlMixedSeL4CAmKESSetPoint(): Option[TempControlMixedSeL4CAmKES.SetPoint] = {

    var none: Z = gen.nextZBetween(0,1)
    var v: Option[TempControlMixedSeL4CAmKES.SetPoint] = if(none == 0) {
      Some(nextTempControlMixedSeL4CAmKESSetPoint())
    } else {
      None()
    }

    if(get_Config_OptionTempControlMixedSeL4CAmKESSetPoint.attempts >= 0) {
     for(i <- 0 to get_Config_OptionTempControlMixedSeL4CAmKESSetPoint.attempts) {
        if(get_Config_OptionTempControlMixedSeL4CAmKESSetPoint.filter(v)) {
          return v
        }
        if (get_Config_OptionTempControlMixedSeL4CAmKESSetPoint.verbose) {
          println(s"Retrying for failing value: $v")
        }

        none = gen.nextZBetween(0,1)
        v = if(none == 0) {
           Some(nextTempControlMixedSeL4CAmKESSetPoint())
        } else {
           None()
        }
     }
    } else {
     while(T) {
       if(get_Config_OptionTempControlMixedSeL4CAmKESSetPoint.filter(v)) {
         return v
       }
       if (get_Config_OptionTempControlMixedSeL4CAmKESSetPoint.verbose) {
         println(s"Retrying for failing value: $v")
       }

       none = gen.nextZBetween(0,1)
       v = if(none == 0) {
          Some(nextTempControlMixedSeL4CAmKESSetPoint())
       } else {
          None()
       }
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P ===================

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P
  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P): RandomLib

  def nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P(): TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P = {
    var api_tempChanged: Option[art.Empty] = nextOption_artEmpty()
    var api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type] = nextOptionTempControlMixedSeL4CAmKESFanAckType()
    var api_setPoint: Option[TempControlMixedSeL4CAmKES.SetPoint] = nextOptionTempControlMixedSeL4CAmKESSetPoint()
    var api_currentTemp: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()

    var v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)

    if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_tempChanged = nextOption_artEmpty()
        api_fanAck = nextOptionTempControlMixedSeL4CAmKESFanAckType()
        api_setPoint = nextOptionTempControlMixedSeL4CAmKESSetPoint()
        api_currentTemp = nextTempControlMixedSeL4CAmKESTemperature()
        v = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_tempChanged = nextOption_artEmpty()
       api_fanAck = nextOptionTempControlMixedSeL4CAmKESFanAckType()
       api_setPoint = nextOptionTempControlMixedSeL4CAmKESSetPoint()
       api_currentTemp = nextTempControlMixedSeL4CAmKESTemperature()
       v = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P(api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS ===================

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS
  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS): RandomLib

  def nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS(): TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS = {
    var In_currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type = nextTempControlMixedSeL4CAmKESFanCmdType()
    var In_currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint = nextTempControlMixedSeL4CAmKESSetPoint()
    var In_fanError: B = nextB()
    var In_latestTemp: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()
    var api_tempChanged: Option[art.Empty] = nextOption_artEmpty()
    var api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type] = nextOptionTempControlMixedSeL4CAmKESFanAckType()
    var api_setPoint: Option[TempControlMixedSeL4CAmKES.SetPoint] = nextOptionTempControlMixedSeL4CAmKESSetPoint()
    var api_currentTemp: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()

    var v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS(In_currentFanState, In_currentSetPoint, In_fanError, In_latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)

    if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        In_currentFanState = nextTempControlMixedSeL4CAmKESFanCmdType()
        In_currentSetPoint = nextTempControlMixedSeL4CAmKESSetPoint()
        In_fanError = nextB()
        In_latestTemp = nextTempControlMixedSeL4CAmKESTemperature()
        api_tempChanged = nextOption_artEmpty()
        api_fanAck = nextOptionTempControlMixedSeL4CAmKESFanAckType()
        api_setPoint = nextOptionTempControlMixedSeL4CAmKESSetPoint()
        api_currentTemp = nextTempControlMixedSeL4CAmKESTemperature()
        v = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS(In_currentFanState, In_currentSetPoint, In_fanError, In_latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       In_currentFanState = nextTempControlMixedSeL4CAmKESFanCmdType()
       In_currentSetPoint = nextTempControlMixedSeL4CAmKESSetPoint()
       In_fanError = nextB()
       In_latestTemp = nextTempControlMixedSeL4CAmKESTemperature()
       api_tempChanged = nextOption_artEmpty()
       api_fanAck = nextOptionTempControlMixedSeL4CAmKESFanAckType()
       api_setPoint = nextOptionTempControlMixedSeL4CAmKESSetPoint()
       api_currentTemp = nextTempControlMixedSeL4CAmKESTemperature()
       v = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS(In_currentFanState, In_currentSetPoint, In_fanError, In_latestTemp, api_tempChanged, api_fanAck, api_setPoint, api_currentTemp)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container ===================

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container
  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container): RandomLib

  def nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container(): TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container = {
    var callEnum: ISZ[TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.Type] = ISZ(TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id, TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id)

    if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.additiveTypeFiltering) {
       callEnum = get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.typeFilter
    } else {
       for(h <- get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container = c match {
      case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
      case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P ===================

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P
  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P): RandomLib

  def nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P(): TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P = {
    var api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = nextOptionTempControlMixedSeL4CAmKESFanCmdType()

    var v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P(api_fanCmd)

    if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_fanCmd = nextOptionTempControlMixedSeL4CAmKESFanCmdType()
        v = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P(api_fanCmd)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_fanCmd = nextOptionTempControlMixedSeL4CAmKESFanCmdType()
       v = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P(api_fanCmd)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS ===================

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS
  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS): RandomLib

  def nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS(): TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS = {
    var currentFanState: TempControlMixedSeL4CAmKES.FanCmd.Type = nextTempControlMixedSeL4CAmKESFanCmdType()
    var currentSetPoint: TempControlMixedSeL4CAmKES.SetPoint = nextTempControlMixedSeL4CAmKESSetPoint()
    var fanError: B = nextB()
    var latestTemp: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()
    var api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type] = nextOptionTempControlMixedSeL4CAmKESFanCmdType()

    var v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS(currentFanState, currentSetPoint, fanError, latestTemp, api_fanCmd)

    if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        currentFanState = nextTempControlMixedSeL4CAmKESFanCmdType()
        currentSetPoint = nextTempControlMixedSeL4CAmKESSetPoint()
        fanError = nextB()
        latestTemp = nextTempControlMixedSeL4CAmKESTemperature()
        api_fanCmd = nextOptionTempControlMixedSeL4CAmKESFanCmdType()
        v = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS(currentFanState, currentSetPoint, fanError, latestTemp, api_fanCmd)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       currentFanState = nextTempControlMixedSeL4CAmKESFanCmdType()
       currentSetPoint = nextTempControlMixedSeL4CAmKESSetPoint()
       fanError = nextB()
       latestTemp = nextTempControlMixedSeL4CAmKESTemperature()
       api_fanCmd = nextOptionTempControlMixedSeL4CAmKESFanCmdType()
       v = TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS(currentFanState, currentSetPoint, fanError, latestTemp, api_fanCmd)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container ===================

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container
  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container): RandomLib

  def nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container(): TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container = {
    var callEnum: ISZ[TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.Type] = ISZ(TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id, TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id)

    if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.additiveTypeFiltering) {
       callEnum = get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.typeFilter
    } else {
       for(h <- get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container = c match {
      case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
      case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P ===================

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P
  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P): RandomLib

  def nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P(): TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P = {

    var v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P()

    if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        v = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P()
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       v = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P()
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS ===================

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS
  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS): RandomLib

  def nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS(): TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS = {

    var v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS()

    if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        v = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS()
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       v = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS()
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container ===================

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container
  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container): RandomLib

  def nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container(): TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container = {
    var callEnum: ISZ[TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.Type] = ISZ(TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id, TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id)

    if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.additiveTypeFiltering) {
       callEnum = get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.typeFilter
    } else {
       for(h <- get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container = c match {
      case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
      case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
         case TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P ===================

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P
  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P): RandomLib

  def nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P(): TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P = {
    var api_tempChanged: Option[art.Empty] = nextOption_artEmpty()
    var api_currentTemp: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()

    var v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P(api_tempChanged, api_currentTemp)

    if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_tempChanged = nextOption_artEmpty()
        api_currentTemp = nextTempControlMixedSeL4CAmKESTemperature()
        v = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P(api_tempChanged, api_currentTemp)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_tempChanged = nextOption_artEmpty()
       api_currentTemp = nextTempControlMixedSeL4CAmKESTemperature()
       v = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P(api_tempChanged, api_currentTemp)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS ===================

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS
  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS): RandomLib

  def nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS(): TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS = {
    var api_tempChanged: Option[art.Empty] = nextOption_artEmpty()
    var api_currentTemp: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()

    var v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS(api_tempChanged, api_currentTemp)

    if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS.verbose) {
          println(s"Retrying for failing value: $v")
        }
        api_tempChanged = nextOption_artEmpty()
        api_currentTemp = nextTempControlMixedSeL4CAmKESTemperature()
        v = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS(api_tempChanged, api_currentTemp)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS.verbose) {
         println(s"Retrying for failing value: $v")
       }
       api_tempChanged = nextOption_artEmpty()
       api_currentTemp = nextTempControlMixedSeL4CAmKESTemperature()
       v = TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS(api_tempChanged, api_currentTemp)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempUnit.Type ===================

  def get_Config_TempControlMixedSeL4CAmKESTempUnitType: Config_TempControlMixedSeL4CAmKESTempUnitType
  def set_Config_TempControlMixedSeL4CAmKESTempUnitType(config: Config_TempControlMixedSeL4CAmKESTempUnitType): RandomLib

  def nextTempControlMixedSeL4CAmKESTempUnitType(): TempControlMixedSeL4CAmKES.TempUnit.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.TempUnit.numOfElements-1)

    var v: TempControlMixedSeL4CAmKES.TempUnit.Type = tc.TempControlMixedSeL4CAmKES.TempUnit.byOrdinal(ordinal).get
    if(get_Config_TempControlMixedSeL4CAmKESTempUnitType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempUnitType.attempts) {
       if(get_Config_TempControlMixedSeL4CAmKESTempUnitType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempUnitType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.TempUnit.numOfElements-1)
       v = tc.TempControlMixedSeL4CAmKES.TempUnit.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlMixedSeL4CAmKESTempUnitType.filter(v)) {
        return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempUnitType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlMixedSeL4CAmKES.TempUnit.numOfElements-1)
       v = tc.TempControlMixedSeL4CAmKES.TempUnit.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.TempUnit_Payload ===================

  def get_Config_TempControlMixedSeL4CAmKESTempUnit_Payload: Config_TempControlMixedSeL4CAmKESTempUnit_Payload
  def set_Config_TempControlMixedSeL4CAmKESTempUnit_Payload(config: Config_TempControlMixedSeL4CAmKESTempUnit_Payload): RandomLib

  def nextTempControlMixedSeL4CAmKESTempUnit_Payload(): TempControlMixedSeL4CAmKES.TempUnit_Payload = {
    var value: TempControlMixedSeL4CAmKES.TempUnit.Type = nextTempControlMixedSeL4CAmKESTempUnitType()

    var v: TempControlMixedSeL4CAmKES.TempUnit_Payload = TempControlMixedSeL4CAmKES.TempUnit_Payload(value)

    if(get_Config_TempControlMixedSeL4CAmKESTempUnit_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTempUnit_Payload.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTempUnit_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTempUnit_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedSeL4CAmKESTempUnitType()
        v = TempControlMixedSeL4CAmKES.TempUnit_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTempUnit_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTempUnit_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedSeL4CAmKESTempUnitType()
       v = TempControlMixedSeL4CAmKES.TempUnit_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.Temperature ===================

  def get_Config_TempControlMixedSeL4CAmKESTemperature: Config_TempControlMixedSeL4CAmKESTemperature
  def set_Config_TempControlMixedSeL4CAmKESTemperature(config: Config_TempControlMixedSeL4CAmKESTemperature): RandomLib

  def nextTempControlMixedSeL4CAmKESTemperature(): TempControlMixedSeL4CAmKES.Temperature = {
    var degrees: F32 = nextF32()
    var unit: TempControlMixedSeL4CAmKES.TempUnit.Type = nextTempControlMixedSeL4CAmKESTempUnitType()

    var v: TempControlMixedSeL4CAmKES.Temperature = TempControlMixedSeL4CAmKES.Temperature(degrees, unit)

    if(get_Config_TempControlMixedSeL4CAmKESTemperature.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTemperature.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTemperature.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTemperature.verbose) {
          println(s"Retrying for failing value: $v")
        }
        degrees = nextF32()
        unit = nextTempControlMixedSeL4CAmKESTempUnitType()
        v = TempControlMixedSeL4CAmKES.Temperature(degrees, unit)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTemperature.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTemperature.verbose) {
         println(s"Retrying for failing value: $v")
       }
       degrees = nextF32()
       unit = nextTempControlMixedSeL4CAmKESTempUnitType()
       v = TempControlMixedSeL4CAmKES.Temperature(degrees, unit)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlMixedSeL4CAmKES.Temperature_Payload ===================

  def get_Config_TempControlMixedSeL4CAmKESTemperature_Payload: Config_TempControlMixedSeL4CAmKESTemperature_Payload
  def set_Config_TempControlMixedSeL4CAmKESTemperature_Payload(config: Config_TempControlMixedSeL4CAmKESTemperature_Payload): RandomLib

  def nextTempControlMixedSeL4CAmKESTemperature_Payload(): TempControlMixedSeL4CAmKES.Temperature_Payload = {
    var value: TempControlMixedSeL4CAmKES.Temperature = nextTempControlMixedSeL4CAmKESTemperature()

    var v: TempControlMixedSeL4CAmKES.Temperature_Payload = TempControlMixedSeL4CAmKES.Temperature_Payload(value)

    if(get_Config_TempControlMixedSeL4CAmKESTemperature_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlMixedSeL4CAmKESTemperature_Payload.attempts) {
        if(get_Config_TempControlMixedSeL4CAmKESTemperature_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlMixedSeL4CAmKESTemperature_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlMixedSeL4CAmKESTemperature()
        v = TempControlMixedSeL4CAmKES.Temperature_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlMixedSeL4CAmKESTemperature_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlMixedSeL4CAmKESTemperature_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlMixedSeL4CAmKESTemperature()
       v = TempControlMixedSeL4CAmKES.Temperature_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.FanAck.Type ===================

  def get_Config_TempControlPeriodicFanAckType: Config_TempControlPeriodicFanAckType
  def set_Config_TempControlPeriodicFanAckType(config: Config_TempControlPeriodicFanAckType): RandomLib

  def nextTempControlPeriodicFanAckType(): TempControlPeriodic.FanAck.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlPeriodic.FanAck.numOfElements-1)

    var v: TempControlPeriodic.FanAck.Type = tc.TempControlPeriodic.FanAck.byOrdinal(ordinal).get
    if(get_Config_TempControlPeriodicFanAckType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicFanAckType.attempts) {
       if(get_Config_TempControlPeriodicFanAckType.filter(v)) {
        return v
       }
       if (get_Config_TempControlPeriodicFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlPeriodic.FanAck.numOfElements-1)
       v = tc.TempControlPeriodic.FanAck.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlPeriodicFanAckType.filter(v)) {
        return v
       }
       if (get_Config_TempControlPeriodicFanAckType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlPeriodic.FanAck.numOfElements-1)
       v = tc.TempControlPeriodic.FanAck.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.FanAck_Payload ===================

  def get_Config_TempControlPeriodicFanAck_Payload: Config_TempControlPeriodicFanAck_Payload
  def set_Config_TempControlPeriodicFanAck_Payload(config: Config_TempControlPeriodicFanAck_Payload): RandomLib

  def nextTempControlPeriodicFanAck_Payload(): TempControlPeriodic.FanAck_Payload = {
    var value: TempControlPeriodic.FanAck.Type = nextTempControlPeriodicFanAckType()

    var v: TempControlPeriodic.FanAck_Payload = TempControlPeriodic.FanAck_Payload(value)

    if(get_Config_TempControlPeriodicFanAck_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicFanAck_Payload.attempts) {
        if(get_Config_TempControlPeriodicFanAck_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlPeriodicFanAck_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlPeriodicFanAckType()
        v = TempControlPeriodic.FanAck_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlPeriodicFanAck_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlPeriodicFanAck_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlPeriodicFanAckType()
       v = TempControlPeriodic.FanAck_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.FanCmd.Type ===================

  def get_Config_TempControlPeriodicFanCmdType: Config_TempControlPeriodicFanCmdType
  def set_Config_TempControlPeriodicFanCmdType(config: Config_TempControlPeriodicFanCmdType): RandomLib

  def nextTempControlPeriodicFanCmdType(): TempControlPeriodic.FanCmd.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlPeriodic.FanCmd.numOfElements-1)

    var v: TempControlPeriodic.FanCmd.Type = tc.TempControlPeriodic.FanCmd.byOrdinal(ordinal).get
    if(get_Config_TempControlPeriodicFanCmdType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicFanCmdType.attempts) {
       if(get_Config_TempControlPeriodicFanCmdType.filter(v)) {
        return v
       }
       if (get_Config_TempControlPeriodicFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlPeriodic.FanCmd.numOfElements-1)
       v = tc.TempControlPeriodic.FanCmd.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlPeriodicFanCmdType.filter(v)) {
        return v
       }
       if (get_Config_TempControlPeriodicFanCmdType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlPeriodic.FanCmd.numOfElements-1)
       v = tc.TempControlPeriodic.FanCmd.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.FanCmd_Payload ===================

  def get_Config_TempControlPeriodicFanCmd_Payload: Config_TempControlPeriodicFanCmd_Payload
  def set_Config_TempControlPeriodicFanCmd_Payload(config: Config_TempControlPeriodicFanCmd_Payload): RandomLib

  def nextTempControlPeriodicFanCmd_Payload(): TempControlPeriodic.FanCmd_Payload = {
    var value: TempControlPeriodic.FanCmd.Type = nextTempControlPeriodicFanCmdType()

    var v: TempControlPeriodic.FanCmd_Payload = TempControlPeriodic.FanCmd_Payload(value)

    if(get_Config_TempControlPeriodicFanCmd_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicFanCmd_Payload.attempts) {
        if(get_Config_TempControlPeriodicFanCmd_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlPeriodicFanCmd_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlPeriodicFanCmdType()
        v = TempControlPeriodic.FanCmd_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlPeriodicFanCmd_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlPeriodicFanCmd_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlPeriodicFanCmdType()
       v = TempControlPeriodic.FanCmd_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.SetPoint ===================

  def get_Config_TempControlPeriodicSetPoint: Config_TempControlPeriodicSetPoint
  def set_Config_TempControlPeriodicSetPoint(config: Config_TempControlPeriodicSetPoint): RandomLib

  def nextTempControlPeriodicSetPoint(): TempControlPeriodic.SetPoint = {
    var low: TempControlPeriodic.Temperature = nextTempControlPeriodicTemperature()
    var high: TempControlPeriodic.Temperature = nextTempControlPeriodicTemperature()

    var v: TempControlPeriodic.SetPoint = TempControlPeriodic.SetPoint(low, high)

    if(get_Config_TempControlPeriodicSetPoint.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicSetPoint.attempts) {
        if(get_Config_TempControlPeriodicSetPoint.filter(v)) {
          return v
        }
        if (get_Config_TempControlPeriodicSetPoint.verbose) {
          println(s"Retrying for failing value: $v")
        }
        low = nextTempControlPeriodicTemperature()
        high = nextTempControlPeriodicTemperature()
        v = TempControlPeriodic.SetPoint(low, high)
     }
    } else {
     while(T) {
       if(get_Config_TempControlPeriodicSetPoint.filter(v)) {
         return v
       }
       if (get_Config_TempControlPeriodicSetPoint.verbose) {
         println(s"Retrying for failing value: $v")
       }
       low = nextTempControlPeriodicTemperature()
       high = nextTempControlPeriodicTemperature()
       v = TempControlPeriodic.SetPoint(low, high)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.SetPoint_Payload ===================

  def get_Config_TempControlPeriodicSetPoint_Payload: Config_TempControlPeriodicSetPoint_Payload
  def set_Config_TempControlPeriodicSetPoint_Payload(config: Config_TempControlPeriodicSetPoint_Payload): RandomLib

  def nextTempControlPeriodicSetPoint_Payload(): TempControlPeriodic.SetPoint_Payload = {
    var value: TempControlPeriodic.SetPoint = nextTempControlPeriodicSetPoint()

    var v: TempControlPeriodic.SetPoint_Payload = TempControlPeriodic.SetPoint_Payload(value)

    if(get_Config_TempControlPeriodicSetPoint_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicSetPoint_Payload.attempts) {
        if(get_Config_TempControlPeriodicSetPoint_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlPeriodicSetPoint_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlPeriodicSetPoint()
        v = TempControlPeriodic.SetPoint_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlPeriodicSetPoint_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlPeriodicSetPoint_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlPeriodicSetPoint()
       v = TempControlPeriodic.SetPoint_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.TempUnit.Type ===================

  def get_Config_TempControlPeriodicTempUnitType: Config_TempControlPeriodicTempUnitType
  def set_Config_TempControlPeriodicTempUnitType(config: Config_TempControlPeriodicTempUnitType): RandomLib

  def nextTempControlPeriodicTempUnitType(): TempControlPeriodic.TempUnit.Type = {

    var ordinal: Z = gen.nextZBetween(0, tc.TempControlPeriodic.TempUnit.numOfElements-1)

    var v: TempControlPeriodic.TempUnit.Type = tc.TempControlPeriodic.TempUnit.byOrdinal(ordinal).get
    if(get_Config_TempControlPeriodicTempUnitType.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicTempUnitType.attempts) {
       if(get_Config_TempControlPeriodicTempUnitType.filter(v)) {
        return v
       }
       if (get_Config_TempControlPeriodicTempUnitType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlPeriodic.TempUnit.numOfElements-1)
       v = tc.TempControlPeriodic.TempUnit.byOrdinal(ordinal).get
     }
    } else {
     while(T){
       if(get_Config_TempControlPeriodicTempUnitType.filter(v)) {
        return v
       }
       if (get_Config_TempControlPeriodicTempUnitType.verbose) {
         println(s"Retrying for failing value: $v")
       }
       ordinal= gen.nextZBetween(0, tc.TempControlPeriodic.TempUnit.numOfElements-1)
       v = tc.TempControlPeriodic.TempUnit.byOrdinal(ordinal).get
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.TempUnit_Payload ===================

  def get_Config_TempControlPeriodicTempUnit_Payload: Config_TempControlPeriodicTempUnit_Payload
  def set_Config_TempControlPeriodicTempUnit_Payload(config: Config_TempControlPeriodicTempUnit_Payload): RandomLib

  def nextTempControlPeriodicTempUnit_Payload(): TempControlPeriodic.TempUnit_Payload = {
    var value: TempControlPeriodic.TempUnit.Type = nextTempControlPeriodicTempUnitType()

    var v: TempControlPeriodic.TempUnit_Payload = TempControlPeriodic.TempUnit_Payload(value)

    if(get_Config_TempControlPeriodicTempUnit_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicTempUnit_Payload.attempts) {
        if(get_Config_TempControlPeriodicTempUnit_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlPeriodicTempUnit_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlPeriodicTempUnitType()
        v = TempControlPeriodic.TempUnit_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlPeriodicTempUnit_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlPeriodicTempUnit_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlPeriodicTempUnitType()
       v = TempControlPeriodic.TempUnit_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.Temperature ===================

  def get_Config_TempControlPeriodicTemperature: Config_TempControlPeriodicTemperature
  def set_Config_TempControlPeriodicTemperature(config: Config_TempControlPeriodicTemperature): RandomLib

  def nextTempControlPeriodicTemperature(): TempControlPeriodic.Temperature = {
    var degrees: F32 = nextF32()
    var unit: TempControlPeriodic.TempUnit.Type = nextTempControlPeriodicTempUnitType()

    var v: TempControlPeriodic.Temperature = TempControlPeriodic.Temperature(degrees, unit)

    if(get_Config_TempControlPeriodicTemperature.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicTemperature.attempts) {
        if(get_Config_TempControlPeriodicTemperature.filter(v)) {
          return v
        }
        if (get_Config_TempControlPeriodicTemperature.verbose) {
          println(s"Retrying for failing value: $v")
        }
        degrees = nextF32()
        unit = nextTempControlPeriodicTempUnitType()
        v = TempControlPeriodic.Temperature(degrees, unit)
     }
    } else {
     while(T) {
       if(get_Config_TempControlPeriodicTemperature.filter(v)) {
         return v
       }
       if (get_Config_TempControlPeriodicTemperature.verbose) {
         println(s"Retrying for failing value: $v")
       }
       degrees = nextF32()
       unit = nextTempControlPeriodicTempUnitType()
       v = TempControlPeriodic.Temperature(degrees, unit)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= TempControlPeriodic.Temperature_Payload ===================

  def get_Config_TempControlPeriodicTemperature_Payload: Config_TempControlPeriodicTemperature_Payload
  def set_Config_TempControlPeriodicTemperature_Payload(config: Config_TempControlPeriodicTemperature_Payload): RandomLib

  def nextTempControlPeriodicTemperature_Payload(): TempControlPeriodic.Temperature_Payload = {
    var value: TempControlPeriodic.Temperature = nextTempControlPeriodicTemperature()

    var v: TempControlPeriodic.Temperature_Payload = TempControlPeriodic.Temperature_Payload(value)

    if(get_Config_TempControlPeriodicTemperature_Payload.attempts >= 0) {
     for(i <- 0 to get_Config_TempControlPeriodicTemperature_Payload.attempts) {
        if(get_Config_TempControlPeriodicTemperature_Payload.filter(v)) {
          return v
        }
        if (get_Config_TempControlPeriodicTemperature_Payload.verbose) {
          println(s"Retrying for failing value: $v")
        }
        value = nextTempControlPeriodicTemperature()
        v = TempControlPeriodic.Temperature_Payload(value)
     }
    } else {
     while(T) {
       if(get_Config_TempControlPeriodicTemperature_Payload.filter(v)) {
         return v
       }
       if (get_Config_TempControlPeriodicTemperature_Payload.verbose) {
         println(s"Retrying for failing value: $v")
       }
       value = nextTempControlPeriodicTemperature()
       v = TempControlPeriodic.Temperature_Payload(value)
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= util.Container ===================

  def get_Config_utilContainer: Config_utilContainer
  def set_Config_utilContainer(config: Config_utilContainer): RandomLib

  def nextutilContainer(): util.Container = {
    var callEnum: ISZ[utilContainer_DataTypeId.Type] = ISZ(utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id, utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id, utilContainer_DataTypeId.utilEmptyContainer_Id)

    if(get_Config_utilContainer.additiveTypeFiltering) {
       callEnum = get_Config_utilContainer.typeFilter
    } else {
       for(h <- get_Config_utilContainer.typeFilter) {
         callEnum = ops.ISZOps(callEnum).filter(f => h =!= f)
       }
    }

    var c = callEnum(gen.nextZBetween(0, callEnum.size-1))

    var v: util.Container = c match {
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
      case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
      case utilContainer_DataTypeId.utilEmptyContainer_Id => (nextutilEmptyContainer _).apply()
      case _ => halt("Invalid Child")
    }


    if(get_Config_utilContainer.attempts >= 0) {
     for(i <- 0 to get_Config_utilContainer.attempts) {
       if(get_Config_utilContainer.filter(v)) {
        return v
       }
       if (get_Config_utilContainer.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
         case utilContainer_DataTypeId.utilEmptyContainer_Id => (nextutilEmptyContainer _).apply()
         case _ => halt("Invalid Child")
       }
     }
    } else {
     while(T) {
       if(get_Config_utilContainer.filter(v)) {
         return v
       }
       if (get_Config_utilContainer.verbose) {
         println(s"Retrying for failing value: $v")
       }
       c = callEnum(gen.nextZBetween(0, callEnum.size-1))

       v = c match {
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _).apply()
         case utilContainer_DataTypeId.TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS_Id => (nextTempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _).apply()
         case utilContainer_DataTypeId.utilEmptyContainer_Id => (nextutilEmptyContainer _).apply()
         case _ => halt("Invalid Child")
       }
     }
    }
    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

  // ============= util.EmptyContainer ===================

  def get_Config_utilEmptyContainer: Config_utilEmptyContainer
  def set_Config_utilEmptyContainer(config: Config_utilEmptyContainer): RandomLib

  def nextutilEmptyContainer(): util.EmptyContainer = {

    var v: util.EmptyContainer = util.EmptyContainer()

    if(get_Config_utilEmptyContainer.attempts >= 0) {
     for(i <- 0 to get_Config_utilEmptyContainer.attempts) {
        if(get_Config_utilEmptyContainer.filter(v)) {
          return v
        }
        if (get_Config_utilEmptyContainer.verbose) {
          println(s"Retrying for failing value: $v")
        }
        v = util.EmptyContainer()
     }
    } else {
     while(T) {
       if(get_Config_utilEmptyContainer.filter(v)) {
         return v
       }
       if (get_Config_utilEmptyContainer.verbose) {
         println(s"Retrying for failing value: $v")
       }
       v = util.EmptyContainer()
     }
    }

    assert(F, "Requirements too strict to generate")
    halt("Requirements too strict to generate")
  }

}

@record class RandomLib(val gen: org.sireum.Random.Gen) extends RandomLibI {

  var numElem: Z = 50

  var _verbose: B = F
  def verbose: RandomLib = {
    _verbose = !_verbose
    return this
  }

  def get_numElement: Z = {return numElem}

  def set_numElement(s: Z): Unit ={
    numElem = s
  }

  // ============= String =============

  def alwaysTrue_String(v: String): B = {return T}

  var config_String: Config_String = Config_String(0, numElem, 100, _verbose, alwaysTrue_String _)

  def get_Config_String: Config_String = {return config_String}

  def set_Config_String(config: Config_String): RandomLib = {
    config_String = config
    return this
  }

  // ============= Z ===================
  def alwaysTrue_Z(v: Z): B = {return T}

  var config_Z: Config_Z = Config_Z(None(), None(), 100, _verbose, alwaysTrue_Z _)
  def get_Config_Z: Config_Z = {return config_Z}

  def set_Config_Z(config: Config_Z): RandomLib ={
    config_Z = config
    return this
  }

  // ============= B ===================
  def alwaysTrue_B(v: B): B = {return T}

  var config_B: Config_B = Config_B(100, _verbose, alwaysTrue_B _)
  def get_Config_B: Config_B = {return config_B}

  def set_Config_B(config: Config_B): RandomLib ={
    config_B = config
    return this
  }

  // ============= C ===================
  def alwaysTrue_C(v: C): B = {return T}

  var config_C: Config_C = Config_C(None(), None(), 100, _verbose, alwaysTrue_C _)
  def get_Config_C: Config_C = {return config_C}

  def set_Config_C(config: Config_C): RandomLib ={
    config_C = config
    return this
  }

  // ============= R ===================
  def alwaysTrue_R(v: R): B = {return T}

  var config_R: Config_R = Config_R(None(), None(), 100, _verbose, alwaysTrue_R _)
  def get_Config_R: Config_R = {return config_R}

  def set_Config_R(config: Config_R): RandomLib ={
    config_R = config
    return this
  }

  // ============= F32 ===================
  def alwaysTrue_F32(v: F32): B = {return T}

  var config_F32: Config_F32 = Config_F32(None(), None(), 100, _verbose, alwaysTrue_F32 _)
  def get_Config_F32: Config_F32 = {return config_F32}

  def set_Config_F32(config: Config_F32): RandomLib ={
    config_F32 = config
    return this
  }

  // ============= F64 ===================
  def alwaysTrue_F64(v: F64): B = {return T}

  var config_F64: Config_F64 = Config_F64(None(), None(), 100, _verbose, alwaysTrue_F64 _)
  def get_Config_F64: Config_F64 = {return config_F64}

  def set_Config_F64(config: Config_F64): RandomLib ={
    config_F64 = config
    return this
  }

  // ============= S8 ===================
  def alwaysTrue_S8(v: S8): B = {return T}

  var config_S8: Config_S8 = Config_S8(None(), None(), 100, _verbose, alwaysTrue_S8 _)
  def get_Config_S8: Config_S8 = {return config_S8}

  def set_Config_S8(config: Config_S8): RandomLib ={
    config_S8 = config
    return this
  }

  // ============= S16 ===================
  def alwaysTrue_S16(v: S16): B = {return T}

  var config_S16: Config_S16 = Config_S16(None(), None(), 100, _verbose, alwaysTrue_S16 _)
  def get_Config_S16: Config_S16 = {return config_S16}

  def set_Config_S16(config: Config_S16): RandomLib ={
    config_S16 = config
    return this
  }

  // ============= S32 ===================
  def alwaysTrue_S32(v: S32): B = {return T}

  var config_S32: Config_S32 = Config_S32(None(), None(), 100, _verbose, alwaysTrue_S32 _)
  def get_Config_S32: Config_S32 = {return config_S32}

  def set_Config_S32(config: Config_S32): RandomLib ={
    config_S32 = config
    return this
  }

  // ============= S64 ===================
  def alwaysTrue_S64(v: S64): B = {return T}

  var config_S64: Config_S64 = Config_S64(None(), None(), 100, _verbose, alwaysTrue_S64 _)
  def get_Config_S64: Config_S64 = {return config_S64}

  def set_Config_S64(config: Config_S64): RandomLib ={
    config_S64 = config
    return this
  }

  // ============= U8 ===================
  def alwaysTrue_U8(v: U8): B = {return T}

  var config_U8: Config_U8 = Config_U8(None(), None(), 100, _verbose, alwaysTrue_U8 _)
  def get_Config_U8: Config_U8 = {return config_U8}

  def set_Config_U8(config: Config_U8): RandomLib ={
    config_U8 = config
    return this
  }

  // ============= U16 ===================
  def alwaysTrue_U16(v: U16): B = {return T}

  var config_U16: Config_U16 = Config_U16(None(), None(), 100, _verbose, alwaysTrue_U16 _)
  def get_Config_U16: Config_U16 = {return config_U16}

  def set_Config_U16(config: Config_U16): RandomLib ={
    config_U16 = config
    return this
  }

  // ============= U32 ===================
  def alwaysTrue_U32(v: U32): B = {return T}

  var config_U32: Config_U32 = Config_U32(None(), None(), 100, _verbose, alwaysTrue_U32 _)
  def get_Config_U32: Config_U32 = {return config_U32}

  def set_Config_U32(config: Config_U32): RandomLib ={
    config_U32 = config
    return this
  }

  // ============= U64 ===================
  def alwaysTrue_U64(v: U64): B = {return T}

  var config_U64: Config_U64 = Config_U64(None(), None(), 100, _verbose, alwaysTrue_U64 _)
  def get_Config_U64: Config_U64 = {return config_U64}

  def set_Config_U64(config: Config_U64): RandomLib ={
    config_U64 = config
    return this
  }

  // ============= art.DataContent ===================
  def alwaysTrue__artDataContent(v: art.DataContent): B = {return T}

  var config__artDataContent: Config__artDataContent = Config__artDataContent(100, _verbose, F, ISZ(), alwaysTrue__artDataContent _)

  def get_Config__artDataContent: Config__artDataContent = {return config__artDataContent}

  def set_Config__artDataContent(config: Config__artDataContent): RandomLib ={
    config__artDataContent = config
    return this
  }

  // ============= art.Empty ===================
  def alwaysTrue__artEmpty(v: art.Empty): B = {return T}

  var config__artEmpty: Config__artEmpty = Config__artEmpty(100, _verbose, alwaysTrue__artEmpty _)

  def get_Config__artEmpty: Config__artEmpty = {return config__artEmpty}

  def set_Config__artEmpty(config: Config__artEmpty): RandomLib ={
    config__artEmpty = config
    return this
  }

  // ============= Base_Types.Boolean_Payload ===================
  def alwaysTrue_Base_TypesBoolean_Payload(v: Base_Types.Boolean_Payload): B = {return T}

  var config_Base_TypesBoolean_Payload: Config_Base_TypesBoolean_Payload = Config_Base_TypesBoolean_Payload(100, _verbose, alwaysTrue_Base_TypesBoolean_Payload _)

  def get_Config_Base_TypesBoolean_Payload: Config_Base_TypesBoolean_Payload = {return config_Base_TypesBoolean_Payload}

  def set_Config_Base_TypesBoolean_Payload(config: Config_Base_TypesBoolean_Payload): RandomLib ={
    config_Base_TypesBoolean_Payload = config
    return this
  }

  // ============= Base_Types.Integer_Payload ===================
  def alwaysTrue_Base_TypesInteger_Payload(v: Base_Types.Integer_Payload): B = {return T}

  var config_Base_TypesInteger_Payload: Config_Base_TypesInteger_Payload = Config_Base_TypesInteger_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_Payload _)

  def get_Config_Base_TypesInteger_Payload: Config_Base_TypesInteger_Payload = {return config_Base_TypesInteger_Payload}

  def set_Config_Base_TypesInteger_Payload(config: Config_Base_TypesInteger_Payload): RandomLib ={
    config_Base_TypesInteger_Payload = config
    return this
  }

  // ============= Base_Types.Integer_8_Payload ===================
  def alwaysTrue_Base_TypesInteger_8_Payload(v: Base_Types.Integer_8_Payload): B = {return T}

  var config_Base_TypesInteger_8_Payload: Config_Base_TypesInteger_8_Payload = Config_Base_TypesInteger_8_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_8_Payload _)

  def get_Config_Base_TypesInteger_8_Payload: Config_Base_TypesInteger_8_Payload = {return config_Base_TypesInteger_8_Payload}

  def set_Config_Base_TypesInteger_8_Payload(config: Config_Base_TypesInteger_8_Payload): RandomLib ={
    config_Base_TypesInteger_8_Payload = config
    return this
  }

  // ============= Base_Types.Integer_16_Payload ===================
  def alwaysTrue_Base_TypesInteger_16_Payload(v: Base_Types.Integer_16_Payload): B = {return T}

  var config_Base_TypesInteger_16_Payload: Config_Base_TypesInteger_16_Payload = Config_Base_TypesInteger_16_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_16_Payload _)

  def get_Config_Base_TypesInteger_16_Payload: Config_Base_TypesInteger_16_Payload = {return config_Base_TypesInteger_16_Payload}

  def set_Config_Base_TypesInteger_16_Payload(config: Config_Base_TypesInteger_16_Payload): RandomLib ={
    config_Base_TypesInteger_16_Payload = config
    return this
  }

  // ============= Base_Types.Integer_32_Payload ===================
  def alwaysTrue_Base_TypesInteger_32_Payload(v: Base_Types.Integer_32_Payload): B = {return T}

  var config_Base_TypesInteger_32_Payload: Config_Base_TypesInteger_32_Payload = Config_Base_TypesInteger_32_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_32_Payload _)

  def get_Config_Base_TypesInteger_32_Payload: Config_Base_TypesInteger_32_Payload = {return config_Base_TypesInteger_32_Payload}

  def set_Config_Base_TypesInteger_32_Payload(config: Config_Base_TypesInteger_32_Payload): RandomLib ={
    config_Base_TypesInteger_32_Payload = config
    return this
  }

  // ============= Base_Types.Integer_64_Payload ===================
  def alwaysTrue_Base_TypesInteger_64_Payload(v: Base_Types.Integer_64_Payload): B = {return T}

  var config_Base_TypesInteger_64_Payload: Config_Base_TypesInteger_64_Payload = Config_Base_TypesInteger_64_Payload(100, _verbose, alwaysTrue_Base_TypesInteger_64_Payload _)

  def get_Config_Base_TypesInteger_64_Payload: Config_Base_TypesInteger_64_Payload = {return config_Base_TypesInteger_64_Payload}

  def set_Config_Base_TypesInteger_64_Payload(config: Config_Base_TypesInteger_64_Payload): RandomLib ={
    config_Base_TypesInteger_64_Payload = config
    return this
  }

  // ============= Base_Types.Unsigned_8_Payload ===================
  def alwaysTrue_Base_TypesUnsigned_8_Payload(v: Base_Types.Unsigned_8_Payload): B = {return T}

  var config_Base_TypesUnsigned_8_Payload: Config_Base_TypesUnsigned_8_Payload = Config_Base_TypesUnsigned_8_Payload(100, _verbose, alwaysTrue_Base_TypesUnsigned_8_Payload _)

  def get_Config_Base_TypesUnsigned_8_Payload: Config_Base_TypesUnsigned_8_Payload = {return config_Base_TypesUnsigned_8_Payload}

  def set_Config_Base_TypesUnsigned_8_Payload(config: Config_Base_TypesUnsigned_8_Payload): RandomLib ={
    config_Base_TypesUnsigned_8_Payload = config
    return this
  }

  // ============= Base_Types.Unsigned_16_Payload ===================
  def alwaysTrue_Base_TypesUnsigned_16_Payload(v: Base_Types.Unsigned_16_Payload): B = {return T}

  var config_Base_TypesUnsigned_16_Payload: Config_Base_TypesUnsigned_16_Payload = Config_Base_TypesUnsigned_16_Payload(100, _verbose, alwaysTrue_Base_TypesUnsigned_16_Payload _)

  def get_Config_Base_TypesUnsigned_16_Payload: Config_Base_TypesUnsigned_16_Payload = {return config_Base_TypesUnsigned_16_Payload}

  def set_Config_Base_TypesUnsigned_16_Payload(config: Config_Base_TypesUnsigned_16_Payload): RandomLib ={
    config_Base_TypesUnsigned_16_Payload = config
    return this
  }

  // ============= Base_Types.Unsigned_32_Payload ===================
  def alwaysTrue_Base_TypesUnsigned_32_Payload(v: Base_Types.Unsigned_32_Payload): B = {return T}

  var config_Base_TypesUnsigned_32_Payload: Config_Base_TypesUnsigned_32_Payload = Config_Base_TypesUnsigned_32_Payload(100, _verbose, alwaysTrue_Base_TypesUnsigned_32_Payload _)

  def get_Config_Base_TypesUnsigned_32_Payload: Config_Base_TypesUnsigned_32_Payload = {return config_Base_TypesUnsigned_32_Payload}

  def set_Config_Base_TypesUnsigned_32_Payload(config: Config_Base_TypesUnsigned_32_Payload): RandomLib ={
    config_Base_TypesUnsigned_32_Payload = config
    return this
  }

  // ============= Base_Types.Unsigned_64_Payload ===================
  def alwaysTrue_Base_TypesUnsigned_64_Payload(v: Base_Types.Unsigned_64_Payload): B = {return T}

  var config_Base_TypesUnsigned_64_Payload: Config_Base_TypesUnsigned_64_Payload = Config_Base_TypesUnsigned_64_Payload(100, _verbose, alwaysTrue_Base_TypesUnsigned_64_Payload _)

  def get_Config_Base_TypesUnsigned_64_Payload: Config_Base_TypesUnsigned_64_Payload = {return config_Base_TypesUnsigned_64_Payload}

  def set_Config_Base_TypesUnsigned_64_Payload(config: Config_Base_TypesUnsigned_64_Payload): RandomLib ={
    config_Base_TypesUnsigned_64_Payload = config
    return this
  }

  // ============= Base_Types.Float_Payload ===================
  def alwaysTrue_Base_TypesFloat_Payload(v: Base_Types.Float_Payload): B = {return T}

  var config_Base_TypesFloat_Payload: Config_Base_TypesFloat_Payload = Config_Base_TypesFloat_Payload(100, _verbose, alwaysTrue_Base_TypesFloat_Payload _)

  def get_Config_Base_TypesFloat_Payload: Config_Base_TypesFloat_Payload = {return config_Base_TypesFloat_Payload}

  def set_Config_Base_TypesFloat_Payload(config: Config_Base_TypesFloat_Payload): RandomLib ={
    config_Base_TypesFloat_Payload = config
    return this
  }

  // ============= Base_Types.Float_32_Payload ===================
  def alwaysTrue_Base_TypesFloat_32_Payload(v: Base_Types.Float_32_Payload): B = {return T}

  var config_Base_TypesFloat_32_Payload: Config_Base_TypesFloat_32_Payload = Config_Base_TypesFloat_32_Payload(100, _verbose, alwaysTrue_Base_TypesFloat_32_Payload _)

  def get_Config_Base_TypesFloat_32_Payload: Config_Base_TypesFloat_32_Payload = {return config_Base_TypesFloat_32_Payload}

  def set_Config_Base_TypesFloat_32_Payload(config: Config_Base_TypesFloat_32_Payload): RandomLib ={
    config_Base_TypesFloat_32_Payload = config
    return this
  }

  // ============= Base_Types.Float_64_Payload ===================
  def alwaysTrue_Base_TypesFloat_64_Payload(v: Base_Types.Float_64_Payload): B = {return T}

  var config_Base_TypesFloat_64_Payload: Config_Base_TypesFloat_64_Payload = Config_Base_TypesFloat_64_Payload(100, _verbose, alwaysTrue_Base_TypesFloat_64_Payload _)

  def get_Config_Base_TypesFloat_64_Payload: Config_Base_TypesFloat_64_Payload = {return config_Base_TypesFloat_64_Payload}

  def set_Config_Base_TypesFloat_64_Payload(config: Config_Base_TypesFloat_64_Payload): RandomLib ={
    config_Base_TypesFloat_64_Payload = config
    return this
  }

  // ============= Base_Types.Character_Payload ===================
  def alwaysTrue_Base_TypesCharacter_Payload(v: Base_Types.Character_Payload): B = {return T}

  var config_Base_TypesCharacter_Payload: Config_Base_TypesCharacter_Payload = Config_Base_TypesCharacter_Payload(100, _verbose, alwaysTrue_Base_TypesCharacter_Payload _)

  def get_Config_Base_TypesCharacter_Payload: Config_Base_TypesCharacter_Payload = {return config_Base_TypesCharacter_Payload}

  def set_Config_Base_TypesCharacter_Payload(config: Config_Base_TypesCharacter_Payload): RandomLib ={
    config_Base_TypesCharacter_Payload = config
    return this
  }

  // ============= Base_Types.String_Payload ===================
  def alwaysTrue_Base_TypesString_Payload(v: Base_Types.String_Payload): B = {return T}

  var config_Base_TypesString_Payload: Config_Base_TypesString_Payload = Config_Base_TypesString_Payload(100, _verbose, alwaysTrue_Base_TypesString_Payload _)

  def get_Config_Base_TypesString_Payload: Config_Base_TypesString_Payload = {return config_Base_TypesString_Payload}

  def set_Config_Base_TypesString_Payload(config: Config_Base_TypesString_Payload): RandomLib ={
    config_Base_TypesString_Payload = config
    return this
  }

  // ============= ISZ[B] ===================
  def alwaysTrue_ISZB(v: ISZ[B]): B = {return T}

  var config_ISZB: Config_ISZB = Config_ISZB(0, 20, 100, _verbose, alwaysTrue_ISZB _)
  def get_Config_ISZB: Config_ISZB = {return config_ISZB}

  def set_Config_ISZB(config: Config_ISZB): RandomLib ={
    config_ISZB = config
    return this
  }

  // ============= Base_Types.Bits_Payload ===================
  def alwaysTrue_Base_TypesBits_Payload(v: Base_Types.Bits_Payload): B = {return T}

  var config_Base_TypesBits_Payload: Config_Base_TypesBits_Payload = Config_Base_TypesBits_Payload(100, _verbose, alwaysTrue_Base_TypesBits_Payload _)

  def get_Config_Base_TypesBits_Payload: Config_Base_TypesBits_Payload = {return config_Base_TypesBits_Payload}

  def set_Config_Base_TypesBits_Payload(config: Config_Base_TypesBits_Payload): RandomLib ={
    config_Base_TypesBits_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.Failure_Flag ===================
  def alwaysTrue_Isolette_Data_ModelFailure_Flag(v: Isolette_Data_Model.Failure_Flag): B = {return T}

  var config_Isolette_Data_ModelFailure_Flag: Config_Isolette_Data_ModelFailure_Flag = Config_Isolette_Data_ModelFailure_Flag(100, _verbose, alwaysTrue_Isolette_Data_ModelFailure_Flag _)

  def get_Config_Isolette_Data_ModelFailure_Flag: Config_Isolette_Data_ModelFailure_Flag = {return config_Isolette_Data_ModelFailure_Flag}

  def set_Config_Isolette_Data_ModelFailure_Flag(config: Config_Isolette_Data_ModelFailure_Flag): RandomLib ={
    config_Isolette_Data_ModelFailure_Flag = config
    return this
  }

  // ============= Isolette_Data_Model.Failure_Flag_Payload ===================
  def alwaysTrue_Isolette_Data_ModelFailure_Flag_Payload(v: Isolette_Data_Model.Failure_Flag_Payload): B = {return T}

  var config_Isolette_Data_ModelFailure_Flag_Payload: Config_Isolette_Data_ModelFailure_Flag_Payload = Config_Isolette_Data_ModelFailure_Flag_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelFailure_Flag_Payload _)

  def get_Config_Isolette_Data_ModelFailure_Flag_Payload: Config_Isolette_Data_ModelFailure_Flag_Payload = {return config_Isolette_Data_ModelFailure_Flag_Payload}

  def set_Config_Isolette_Data_ModelFailure_Flag_Payload(config: Config_Isolette_Data_ModelFailure_Flag_Payload): RandomLib ={
    config_Isolette_Data_ModelFailure_Flag_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.Monitor_Mode.Type ===================
  def alwaysTrue_Isolette_Data_ModelMonitor_ModeType(v: Isolette_Data_Model.Monitor_Mode.Type): B = {return T}

  var config_Isolette_Data_ModelMonitor_ModeType: Config_Isolette_Data_ModelMonitor_ModeType = Config_Isolette_Data_ModelMonitor_ModeType(100, _verbose, alwaysTrue_Isolette_Data_ModelMonitor_ModeType _)

  def get_Config_Isolette_Data_ModelMonitor_ModeType: Config_Isolette_Data_ModelMonitor_ModeType = {return config_Isolette_Data_ModelMonitor_ModeType}

  def set_Config_Isolette_Data_ModelMonitor_ModeType(config: Config_Isolette_Data_ModelMonitor_ModeType): RandomLib ={
    config_Isolette_Data_ModelMonitor_ModeType = config
    return this
  }

  // ============= Isolette_Data_Model.Monitor_Mode_Payload ===================
  def alwaysTrue_Isolette_Data_ModelMonitor_Mode_Payload(v: Isolette_Data_Model.Monitor_Mode_Payload): B = {return T}

  var config_Isolette_Data_ModelMonitor_Mode_Payload: Config_Isolette_Data_ModelMonitor_Mode_Payload = Config_Isolette_Data_ModelMonitor_Mode_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelMonitor_Mode_Payload _)

  def get_Config_Isolette_Data_ModelMonitor_Mode_Payload: Config_Isolette_Data_ModelMonitor_Mode_Payload = {return config_Isolette_Data_ModelMonitor_Mode_Payload}

  def set_Config_Isolette_Data_ModelMonitor_Mode_Payload(config: Config_Isolette_Data_ModelMonitor_Mode_Payload): RandomLib ={
    config_Isolette_Data_ModelMonitor_Mode_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.On_Off.Type ===================
  def alwaysTrue_Isolette_Data_ModelOn_OffType(v: Isolette_Data_Model.On_Off.Type): B = {return T}

  var config_Isolette_Data_ModelOn_OffType: Config_Isolette_Data_ModelOn_OffType = Config_Isolette_Data_ModelOn_OffType(100, _verbose, alwaysTrue_Isolette_Data_ModelOn_OffType _)

  def get_Config_Isolette_Data_ModelOn_OffType: Config_Isolette_Data_ModelOn_OffType = {return config_Isolette_Data_ModelOn_OffType}

  def set_Config_Isolette_Data_ModelOn_OffType(config: Config_Isolette_Data_ModelOn_OffType): RandomLib ={
    config_Isolette_Data_ModelOn_OffType = config
    return this
  }

  // ============= Isolette_Data_Model.On_Off_Payload ===================
  def alwaysTrue_Isolette_Data_ModelOn_Off_Payload(v: Isolette_Data_Model.On_Off_Payload): B = {return T}

  var config_Isolette_Data_ModelOn_Off_Payload: Config_Isolette_Data_ModelOn_Off_Payload = Config_Isolette_Data_ModelOn_Off_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelOn_Off_Payload _)

  def get_Config_Isolette_Data_ModelOn_Off_Payload: Config_Isolette_Data_ModelOn_Off_Payload = {return config_Isolette_Data_ModelOn_Off_Payload}

  def set_Config_Isolette_Data_ModelOn_Off_Payload(config: Config_Isolette_Data_ModelOn_Off_Payload): RandomLib ={
    config_Isolette_Data_ModelOn_Off_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.PhysicalTemp ===================
  def alwaysTrue_Isolette_Data_ModelPhysicalTemp(v: Isolette_Data_Model.PhysicalTemp): B = {return T}

  var config_Isolette_Data_ModelPhysicalTemp: Config_Isolette_Data_ModelPhysicalTemp = Config_Isolette_Data_ModelPhysicalTemp(100, _verbose, alwaysTrue_Isolette_Data_ModelPhysicalTemp _)

  def get_Config_Isolette_Data_ModelPhysicalTemp: Config_Isolette_Data_ModelPhysicalTemp = {return config_Isolette_Data_ModelPhysicalTemp}

  def set_Config_Isolette_Data_ModelPhysicalTemp(config: Config_Isolette_Data_ModelPhysicalTemp): RandomLib ={
    config_Isolette_Data_ModelPhysicalTemp = config
    return this
  }

  // ============= Isolette_Data_Model.PhysicalTemp_Payload ===================
  def alwaysTrue_Isolette_Data_ModelPhysicalTemp_Payload(v: Isolette_Data_Model.PhysicalTemp_Payload): B = {return T}

  var config_Isolette_Data_ModelPhysicalTemp_Payload: Config_Isolette_Data_ModelPhysicalTemp_Payload = Config_Isolette_Data_ModelPhysicalTemp_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelPhysicalTemp_Payload _)

  def get_Config_Isolette_Data_ModelPhysicalTemp_Payload: Config_Isolette_Data_ModelPhysicalTemp_Payload = {return config_Isolette_Data_ModelPhysicalTemp_Payload}

  def set_Config_Isolette_Data_ModelPhysicalTemp_Payload(config: Config_Isolette_Data_ModelPhysicalTemp_Payload): RandomLib ={
    config_Isolette_Data_ModelPhysicalTemp_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.Regulator_Mode.Type ===================
  def alwaysTrue_Isolette_Data_ModelRegulator_ModeType(v: Isolette_Data_Model.Regulator_Mode.Type): B = {return T}

  var config_Isolette_Data_ModelRegulator_ModeType: Config_Isolette_Data_ModelRegulator_ModeType = Config_Isolette_Data_ModelRegulator_ModeType(100, _verbose, alwaysTrue_Isolette_Data_ModelRegulator_ModeType _)

  def get_Config_Isolette_Data_ModelRegulator_ModeType: Config_Isolette_Data_ModelRegulator_ModeType = {return config_Isolette_Data_ModelRegulator_ModeType}

  def set_Config_Isolette_Data_ModelRegulator_ModeType(config: Config_Isolette_Data_ModelRegulator_ModeType): RandomLib ={
    config_Isolette_Data_ModelRegulator_ModeType = config
    return this
  }

  // ============= Isolette_Data_Model.Regulator_Mode_Payload ===================
  def alwaysTrue_Isolette_Data_ModelRegulator_Mode_Payload(v: Isolette_Data_Model.Regulator_Mode_Payload): B = {return T}

  var config_Isolette_Data_ModelRegulator_Mode_Payload: Config_Isolette_Data_ModelRegulator_Mode_Payload = Config_Isolette_Data_ModelRegulator_Mode_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelRegulator_Mode_Payload _)

  def get_Config_Isolette_Data_ModelRegulator_Mode_Payload: Config_Isolette_Data_ModelRegulator_Mode_Payload = {return config_Isolette_Data_ModelRegulator_Mode_Payload}

  def set_Config_Isolette_Data_ModelRegulator_Mode_Payload(config: Config_Isolette_Data_ModelRegulator_Mode_Payload): RandomLib ={
    config_Isolette_Data_ModelRegulator_Mode_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.Status.Type ===================
  def alwaysTrue_Isolette_Data_ModelStatusType(v: Isolette_Data_Model.Status.Type): B = {return T}

  var config_Isolette_Data_ModelStatusType: Config_Isolette_Data_ModelStatusType = Config_Isolette_Data_ModelStatusType(100, _verbose, alwaysTrue_Isolette_Data_ModelStatusType _)

  def get_Config_Isolette_Data_ModelStatusType: Config_Isolette_Data_ModelStatusType = {return config_Isolette_Data_ModelStatusType}

  def set_Config_Isolette_Data_ModelStatusType(config: Config_Isolette_Data_ModelStatusType): RandomLib ={
    config_Isolette_Data_ModelStatusType = config
    return this
  }

  // ============= Isolette_Data_Model.Status_Payload ===================
  def alwaysTrue_Isolette_Data_ModelStatus_Payload(v: Isolette_Data_Model.Status_Payload): B = {return T}

  var config_Isolette_Data_ModelStatus_Payload: Config_Isolette_Data_ModelStatus_Payload = Config_Isolette_Data_ModelStatus_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelStatus_Payload _)

  def get_Config_Isolette_Data_ModelStatus_Payload: Config_Isolette_Data_ModelStatus_Payload = {return config_Isolette_Data_ModelStatus_Payload}

  def set_Config_Isolette_Data_ModelStatus_Payload(config: Config_Isolette_Data_ModelStatus_Payload): RandomLib ={
    config_Isolette_Data_ModelStatus_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.Temp ===================
  def alwaysTrue_Isolette_Data_ModelTemp(v: Isolette_Data_Model.Temp): B = {return T}

  var config_Isolette_Data_ModelTemp: Config_Isolette_Data_ModelTemp = Config_Isolette_Data_ModelTemp(100, _verbose, alwaysTrue_Isolette_Data_ModelTemp _)

  def get_Config_Isolette_Data_ModelTemp: Config_Isolette_Data_ModelTemp = {return config_Isolette_Data_ModelTemp}

  def set_Config_Isolette_Data_ModelTemp(config: Config_Isolette_Data_ModelTemp): RandomLib ={
    config_Isolette_Data_ModelTemp = config
    return this
  }

  // ============= Isolette_Data_Model.Temp_Payload ===================
  def alwaysTrue_Isolette_Data_ModelTemp_Payload(v: Isolette_Data_Model.Temp_Payload): B = {return T}

  var config_Isolette_Data_ModelTemp_Payload: Config_Isolette_Data_ModelTemp_Payload = Config_Isolette_Data_ModelTemp_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelTemp_Payload _)

  def get_Config_Isolette_Data_ModelTemp_Payload: Config_Isolette_Data_ModelTemp_Payload = {return config_Isolette_Data_ModelTemp_Payload}

  def set_Config_Isolette_Data_ModelTemp_Payload(config: Config_Isolette_Data_ModelTemp_Payload): RandomLib ={
    config_Isolette_Data_ModelTemp_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.TempWstatus ===================
  def alwaysTrue_Isolette_Data_ModelTempWstatus(v: Isolette_Data_Model.TempWstatus): B = {return T}

  var config_Isolette_Data_ModelTempWstatus: Config_Isolette_Data_ModelTempWstatus = Config_Isolette_Data_ModelTempWstatus(100, _verbose, alwaysTrue_Isolette_Data_ModelTempWstatus _)

  def get_Config_Isolette_Data_ModelTempWstatus: Config_Isolette_Data_ModelTempWstatus = {return config_Isolette_Data_ModelTempWstatus}

  def set_Config_Isolette_Data_ModelTempWstatus(config: Config_Isolette_Data_ModelTempWstatus): RandomLib ={
    config_Isolette_Data_ModelTempWstatus = config
    return this
  }

  // ============= Isolette_Data_Model.TempWstatus_Payload ===================
  def alwaysTrue_Isolette_Data_ModelTempWstatus_Payload(v: Isolette_Data_Model.TempWstatus_Payload): B = {return T}

  var config_Isolette_Data_ModelTempWstatus_Payload: Config_Isolette_Data_ModelTempWstatus_Payload = Config_Isolette_Data_ModelTempWstatus_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelTempWstatus_Payload _)

  def get_Config_Isolette_Data_ModelTempWstatus_Payload: Config_Isolette_Data_ModelTempWstatus_Payload = {return config_Isolette_Data_ModelTempWstatus_Payload}

  def set_Config_Isolette_Data_ModelTempWstatus_Payload(config: Config_Isolette_Data_ModelTempWstatus_Payload): RandomLib ={
    config_Isolette_Data_ModelTempWstatus_Payload = config
    return this
  }

  // ============= Isolette_Data_Model.ValueStatus.Type ===================
  def alwaysTrue_Isolette_Data_ModelValueStatusType(v: Isolette_Data_Model.ValueStatus.Type): B = {return T}

  var config_Isolette_Data_ModelValueStatusType: Config_Isolette_Data_ModelValueStatusType = Config_Isolette_Data_ModelValueStatusType(100, _verbose, alwaysTrue_Isolette_Data_ModelValueStatusType _)

  def get_Config_Isolette_Data_ModelValueStatusType: Config_Isolette_Data_ModelValueStatusType = {return config_Isolette_Data_ModelValueStatusType}

  def set_Config_Isolette_Data_ModelValueStatusType(config: Config_Isolette_Data_ModelValueStatusType): RandomLib ={
    config_Isolette_Data_ModelValueStatusType = config
    return this
  }

  // ============= Isolette_Data_Model.ValueStatus_Payload ===================
  def alwaysTrue_Isolette_Data_ModelValueStatus_Payload(v: Isolette_Data_Model.ValueStatus_Payload): B = {return T}

  var config_Isolette_Data_ModelValueStatus_Payload: Config_Isolette_Data_ModelValueStatus_Payload = Config_Isolette_Data_ModelValueStatus_Payload(100, _verbose, alwaysTrue_Isolette_Data_ModelValueStatus_Payload _)

  def get_Config_Isolette_Data_ModelValueStatus_Payload: Config_Isolette_Data_ModelValueStatus_Payload = {return config_Isolette_Data_ModelValueStatus_Payload}

  def set_Config_Isolette_Data_ModelValueStatus_Payload(config: Config_Isolette_Data_ModelValueStatus_Payload): RandomLib ={
    config_Isolette_Data_ModelValueStatus_Payload = config
    return this
  }

  // ============= Isolette_Environment.Air_Interaction ===================
  def alwaysTrue_Isolette_EnvironmentAir_Interaction(v: Isolette_Environment.Air_Interaction): B = {return T}

  var config_Isolette_EnvironmentAir_Interaction: Config_Isolette_EnvironmentAir_Interaction = Config_Isolette_EnvironmentAir_Interaction(100, _verbose, alwaysTrue_Isolette_EnvironmentAir_Interaction _)

  def get_Config_Isolette_EnvironmentAir_Interaction: Config_Isolette_EnvironmentAir_Interaction = {return config_Isolette_EnvironmentAir_Interaction}

  def set_Config_Isolette_EnvironmentAir_Interaction(config: Config_Isolette_EnvironmentAir_Interaction): RandomLib ={
    config_Isolette_EnvironmentAir_Interaction = config
    return this
  }

  // ============= Isolette_Environment.Air_Interaction_Payload ===================
  def alwaysTrue_Isolette_EnvironmentAir_Interaction_Payload(v: Isolette_Environment.Air_Interaction_Payload): B = {return T}

  var config_Isolette_EnvironmentAir_Interaction_Payload: Config_Isolette_EnvironmentAir_Interaction_Payload = Config_Isolette_EnvironmentAir_Interaction_Payload(100, _verbose, alwaysTrue_Isolette_EnvironmentAir_Interaction_Payload _)

  def get_Config_Isolette_EnvironmentAir_Interaction_Payload: Config_Isolette_EnvironmentAir_Interaction_Payload = {return config_Isolette_EnvironmentAir_Interaction_Payload}

  def set_Config_Isolette_EnvironmentAir_Interaction_Payload(config: Config_Isolette_EnvironmentAir_Interaction_Payload): RandomLib ={
    config_Isolette_EnvironmentAir_Interaction_Payload = config
    return this
  }

  // ============= Isolette_Environment.Heat ===================
  def alwaysTrue_Isolette_EnvironmentHeat(v: Isolette_Environment.Heat): B = {return T}

  var config_Isolette_EnvironmentHeat: Config_Isolette_EnvironmentHeat = Config_Isolette_EnvironmentHeat(100, _verbose, alwaysTrue_Isolette_EnvironmentHeat _)

  def get_Config_Isolette_EnvironmentHeat: Config_Isolette_EnvironmentHeat = {return config_Isolette_EnvironmentHeat}

  def set_Config_Isolette_EnvironmentHeat(config: Config_Isolette_EnvironmentHeat): RandomLib ={
    config_Isolette_EnvironmentHeat = config
    return this
  }

  // ============= Isolette_Environment.Heat_Payload ===================
  def alwaysTrue_Isolette_EnvironmentHeat_Payload(v: Isolette_Environment.Heat_Payload): B = {return T}

  var config_Isolette_EnvironmentHeat_Payload: Config_Isolette_EnvironmentHeat_Payload = Config_Isolette_EnvironmentHeat_Payload(100, _verbose, alwaysTrue_Isolette_EnvironmentHeat_Payload _)

  def get_Config_Isolette_EnvironmentHeat_Payload: Config_Isolette_EnvironmentHeat_Payload = {return config_Isolette_EnvironmentHeat_Payload}

  def set_Config_Isolette_EnvironmentHeat_Payload(config: Config_Isolette_EnvironmentHeat_Payload): RandomLib ={
    config_Isolette_EnvironmentHeat_Payload = config
    return this
  }

  // ============= Isolette_Environment.Interface_Interaction ===================
  def alwaysTrue_Isolette_EnvironmentInterface_Interaction(v: Isolette_Environment.Interface_Interaction): B = {return T}

  var config_Isolette_EnvironmentInterface_Interaction: Config_Isolette_EnvironmentInterface_Interaction = Config_Isolette_EnvironmentInterface_Interaction(100, _verbose, alwaysTrue_Isolette_EnvironmentInterface_Interaction _)

  def get_Config_Isolette_EnvironmentInterface_Interaction: Config_Isolette_EnvironmentInterface_Interaction = {return config_Isolette_EnvironmentInterface_Interaction}

  def set_Config_Isolette_EnvironmentInterface_Interaction(config: Config_Isolette_EnvironmentInterface_Interaction): RandomLib ={
    config_Isolette_EnvironmentInterface_Interaction = config
    return this
  }

  // ============= Isolette_Environment.Interface_Interaction_Payload ===================
  def alwaysTrue_Isolette_EnvironmentInterface_Interaction_Payload(v: Isolette_Environment.Interface_Interaction_Payload): B = {return T}

  var config_Isolette_EnvironmentInterface_Interaction_Payload: Config_Isolette_EnvironmentInterface_Interaction_Payload = Config_Isolette_EnvironmentInterface_Interaction_Payload(100, _verbose, alwaysTrue_Isolette_EnvironmentInterface_Interaction_Payload _)

  def get_Config_Isolette_EnvironmentInterface_Interaction_Payload: Config_Isolette_EnvironmentInterface_Interaction_Payload = {return config_Isolette_EnvironmentInterface_Interaction_Payload}

  def set_Config_Isolette_EnvironmentInterface_Interaction_Payload(config: Config_Isolette_EnvironmentInterface_Interaction_Payload): RandomLib ={
    config_Isolette_EnvironmentInterface_Interaction_Payload = config
    return this
  }

  // ============= TempControlMixed.FanAck.Type ===================
  def alwaysTrue_TempControlMixedFanAckType(v: TempControlMixed.FanAck.Type): B = {return T}

  var config_TempControlMixedFanAckType: Config_TempControlMixedFanAckType = Config_TempControlMixedFanAckType(100, _verbose, alwaysTrue_TempControlMixedFanAckType _)

  def get_Config_TempControlMixedFanAckType: Config_TempControlMixedFanAckType = {return config_TempControlMixedFanAckType}

  def set_Config_TempControlMixedFanAckType(config: Config_TempControlMixedFanAckType): RandomLib ={
    config_TempControlMixedFanAckType = config
    return this
  }

  // ============= TempControlMixed.FanAck_Payload ===================
  def alwaysTrue_TempControlMixedFanAck_Payload(v: TempControlMixed.FanAck_Payload): B = {return T}

  var config_TempControlMixedFanAck_Payload: Config_TempControlMixedFanAck_Payload = Config_TempControlMixedFanAck_Payload(100, _verbose, alwaysTrue_TempControlMixedFanAck_Payload _)

  def get_Config_TempControlMixedFanAck_Payload: Config_TempControlMixedFanAck_Payload = {return config_TempControlMixedFanAck_Payload}

  def set_Config_TempControlMixedFanAck_Payload(config: Config_TempControlMixedFanAck_Payload): RandomLib ={
    config_TempControlMixedFanAck_Payload = config
    return this
  }

  // ============= TempControlMixed.FanCmd.Type ===================
  def alwaysTrue_TempControlMixedFanCmdType(v: TempControlMixed.FanCmd.Type): B = {return T}

  var config_TempControlMixedFanCmdType: Config_TempControlMixedFanCmdType = Config_TempControlMixedFanCmdType(100, _verbose, alwaysTrue_TempControlMixedFanCmdType _)

  def get_Config_TempControlMixedFanCmdType: Config_TempControlMixedFanCmdType = {return config_TempControlMixedFanCmdType}

  def set_Config_TempControlMixedFanCmdType(config: Config_TempControlMixedFanCmdType): RandomLib ={
    config_TempControlMixedFanCmdType = config
    return this
  }

  // ============= TempControlMixed.FanCmd_Payload ===================
  def alwaysTrue_TempControlMixedFanCmd_Payload(v: TempControlMixed.FanCmd_Payload): B = {return T}

  var config_TempControlMixedFanCmd_Payload: Config_TempControlMixedFanCmd_Payload = Config_TempControlMixedFanCmd_Payload(100, _verbose, alwaysTrue_TempControlMixedFanCmd_Payload _)

  def get_Config_TempControlMixedFanCmd_Payload: Config_TempControlMixedFanCmd_Payload = {return config_TempControlMixedFanCmd_Payload}

  def set_Config_TempControlMixedFanCmd_Payload(config: Config_TempControlMixedFanCmd_Payload): RandomLib ={
    config_TempControlMixedFanCmd_Payload = config
    return this
  }

  // ============= TempControlMixed.SetPoint ===================
  def alwaysTrue_TempControlMixedSetPoint(v: TempControlMixed.SetPoint): B = {return T}

  var config_TempControlMixedSetPoint: Config_TempControlMixedSetPoint = Config_TempControlMixedSetPoint(100, _verbose, tc.TempControlMixed.SetPoint.D_Inv_SetPoint _)

  def get_Config_TempControlMixedSetPoint: Config_TempControlMixedSetPoint = {return config_TempControlMixedSetPoint}

  def set_Config_TempControlMixedSetPoint(config: Config_TempControlMixedSetPoint): RandomLib ={
    config_TempControlMixedSetPoint = config
    return this
  }

  // ============= TempControlMixed.SetPoint_Payload ===================
  def alwaysTrue_TempControlMixedSetPoint_Payload(v: TempControlMixed.SetPoint_Payload): B = {return T}

  var config_TempControlMixedSetPoint_Payload: Config_TempControlMixedSetPoint_Payload = Config_TempControlMixedSetPoint_Payload(100, _verbose, alwaysTrue_TempControlMixedSetPoint_Payload _)

  def get_Config_TempControlMixedSetPoint_Payload: Config_TempControlMixedSetPoint_Payload = {return config_TempControlMixedSetPoint_Payload}

  def set_Config_TempControlMixedSetPoint_Payload(config: Config_TempControlMixedSetPoint_Payload): RandomLib ={
    config_TempControlMixedSetPoint_Payload = config
    return this
  }

  // ============= TempControlMixed.TempUnit.Type ===================
  def alwaysTrue_TempControlMixedTempUnitType(v: TempControlMixed.TempUnit.Type): B = {return T}

  var config_TempControlMixedTempUnitType: Config_TempControlMixedTempUnitType = Config_TempControlMixedTempUnitType(100, _verbose, alwaysTrue_TempControlMixedTempUnitType _)

  def get_Config_TempControlMixedTempUnitType: Config_TempControlMixedTempUnitType = {return config_TempControlMixedTempUnitType}

  def set_Config_TempControlMixedTempUnitType(config: Config_TempControlMixedTempUnitType): RandomLib ={
    config_TempControlMixedTempUnitType = config
    return this
  }

  // ============= TempControlMixed.TempUnit_Payload ===================
  def alwaysTrue_TempControlMixedTempUnit_Payload(v: TempControlMixed.TempUnit_Payload): B = {return T}

  var config_TempControlMixedTempUnit_Payload: Config_TempControlMixedTempUnit_Payload = Config_TempControlMixedTempUnit_Payload(100, _verbose, alwaysTrue_TempControlMixedTempUnit_Payload _)

  def get_Config_TempControlMixedTempUnit_Payload: Config_TempControlMixedTempUnit_Payload = {return config_TempControlMixedTempUnit_Payload}

  def set_Config_TempControlMixedTempUnit_Payload(config: Config_TempControlMixedTempUnit_Payload): RandomLib ={
    config_TempControlMixedTempUnit_Payload = config
    return this
  }

  // ============= TempControlMixed.Temperature ===================
  def alwaysTrue_TempControlMixedTemperature(v: TempControlMixed.Temperature): B = {return T}

  var config_TempControlMixedTemperature: Config_TempControlMixedTemperature = Config_TempControlMixedTemperature(100, _verbose, tc.TempControlMixed.Temperature.D_Inv_Temperature _)

  def get_Config_TempControlMixedTemperature: Config_TempControlMixedTemperature = {return config_TempControlMixedTemperature}

  def set_Config_TempControlMixedTemperature(config: Config_TempControlMixedTemperature): RandomLib ={
    config_TempControlMixedTemperature = config
    return this
  }

  // ============= TempControlMixed.Temperature_Payload ===================
  def alwaysTrue_TempControlMixedTemperature_Payload(v: TempControlMixed.Temperature_Payload): B = {return T}

  var config_TempControlMixedTemperature_Payload: Config_TempControlMixedTemperature_Payload = Config_TempControlMixedTemperature_Payload(100, _verbose, alwaysTrue_TempControlMixedTemperature_Payload _)

  def get_Config_TempControlMixedTemperature_Payload: Config_TempControlMixedTemperature_Payload = {return config_TempControlMixedTemperature_Payload}

  def set_Config_TempControlMixedTemperature_Payload(config: Config_TempControlMixedTemperature_Payload): RandomLib ={
    config_TempControlMixedTemperature_Payload = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.FanAck.Type ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFanAckType(v: TempControlMixedSeL4CAmKES.FanAck.Type): B = {return T}

  var config_TempControlMixedSeL4CAmKESFanAckType: Config_TempControlMixedSeL4CAmKESFanAckType = Config_TempControlMixedSeL4CAmKESFanAckType(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESFanAckType _)

  def get_Config_TempControlMixedSeL4CAmKESFanAckType: Config_TempControlMixedSeL4CAmKESFanAckType = {return config_TempControlMixedSeL4CAmKESFanAckType}

  def set_Config_TempControlMixedSeL4CAmKESFanAckType(config: Config_TempControlMixedSeL4CAmKESFanAckType): RandomLib ={
    config_TempControlMixedSeL4CAmKESFanAckType = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.FanAck_Payload ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFanAck_Payload(v: TempControlMixedSeL4CAmKES.FanAck_Payload): B = {return T}

  var config_TempControlMixedSeL4CAmKESFanAck_Payload: Config_TempControlMixedSeL4CAmKESFanAck_Payload = Config_TempControlMixedSeL4CAmKESFanAck_Payload(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESFanAck_Payload _)

  def get_Config_TempControlMixedSeL4CAmKESFanAck_Payload: Config_TempControlMixedSeL4CAmKESFanAck_Payload = {return config_TempControlMixedSeL4CAmKESFanAck_Payload}

  def set_Config_TempControlMixedSeL4CAmKESFanAck_Payload(config: Config_TempControlMixedSeL4CAmKESFanAck_Payload): RandomLib ={
    config_TempControlMixedSeL4CAmKESFanAck_Payload = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.FanCmd.Type ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFanCmdType(v: TempControlMixedSeL4CAmKES.FanCmd.Type): B = {return T}

  var config_TempControlMixedSeL4CAmKESFanCmdType: Config_TempControlMixedSeL4CAmKESFanCmdType = Config_TempControlMixedSeL4CAmKESFanCmdType(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESFanCmdType _)

  def get_Config_TempControlMixedSeL4CAmKESFanCmdType: Config_TempControlMixedSeL4CAmKESFanCmdType = {return config_TempControlMixedSeL4CAmKESFanCmdType}

  def set_Config_TempControlMixedSeL4CAmKESFanCmdType(config: Config_TempControlMixedSeL4CAmKESFanCmdType): RandomLib ={
    config_TempControlMixedSeL4CAmKESFanCmdType = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.FanCmd_Payload ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFanCmd_Payload(v: TempControlMixedSeL4CAmKES.FanCmd_Payload): B = {return T}

  var config_TempControlMixedSeL4CAmKESFanCmd_Payload: Config_TempControlMixedSeL4CAmKESFanCmd_Payload = Config_TempControlMixedSeL4CAmKESFanCmd_Payload(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESFanCmd_Payload _)

  def get_Config_TempControlMixedSeL4CAmKESFanCmd_Payload: Config_TempControlMixedSeL4CAmKESFanCmd_Payload = {return config_TempControlMixedSeL4CAmKESFanCmd_Payload}

  def set_Config_TempControlMixedSeL4CAmKESFanCmd_Payload(config: Config_TempControlMixedSeL4CAmKESFanCmd_Payload): RandomLib ={
    config_TempControlMixedSeL4CAmKESFanCmd_Payload = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container(v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container): B = {return T}

  var config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container = Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container(100, _verbose, F, ISZ(), alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container _)

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container = {return config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container}

  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container): RandomLib ={
    config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container = config
    return this
  }

  // ============= Option[TempControlMixedSeL4CAmKES.FanCmd.Type] ===================
  def alwaysTrue_OptionTempControlMixedSeL4CAmKESFanCmdType(v: Option[TempControlMixedSeL4CAmKES.FanCmd.Type]): B = {return T}

  var config_OptionTempControlMixedSeL4CAmKESFanCmdType: Config_OptionTempControlMixedSeL4CAmKESFanCmdType = Config_OptionTempControlMixedSeL4CAmKESFanCmdType(0, 20, 100, _verbose, alwaysTrue_OptionTempControlMixedSeL4CAmKESFanCmdType _)
  def get_Config_OptionTempControlMixedSeL4CAmKESFanCmdType: Config_OptionTempControlMixedSeL4CAmKESFanCmdType = {return config_OptionTempControlMixedSeL4CAmKESFanCmdType}

  def set_Config_OptionTempControlMixedSeL4CAmKESFanCmdType(config: Config_OptionTempControlMixedSeL4CAmKESFanCmdType): RandomLib ={
    config_OptionTempControlMixedSeL4CAmKESFanCmdType = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P(v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_P): B = {return T}

  var config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P = Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P _)

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P = {return config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P}

  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P): RandomLib ={
    config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_P = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS(v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PreState_Container_PS): B = {return T}

  var config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS = Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS _)

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS = {return config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS}

  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS): RandomLib ={
    config_TempControlMixedSeL4CAmKESFan_fp_ft_PreState_Container_PS = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container(v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container): B = {return T}

  var config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container = Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container(100, _verbose, F, ISZ(), alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container _)

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container = {return config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container}

  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container): RandomLib ={
    config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container = config
    return this
  }

  // ============= Option[TempControlMixedSeL4CAmKES.FanAck.Type] ===================
  def alwaysTrue_OptionTempControlMixedSeL4CAmKESFanAckType(v: Option[TempControlMixedSeL4CAmKES.FanAck.Type]): B = {return T}

  var config_OptionTempControlMixedSeL4CAmKESFanAckType: Config_OptionTempControlMixedSeL4CAmKESFanAckType = Config_OptionTempControlMixedSeL4CAmKESFanAckType(0, 20, 100, _verbose, alwaysTrue_OptionTempControlMixedSeL4CAmKESFanAckType _)
  def get_Config_OptionTempControlMixedSeL4CAmKESFanAckType: Config_OptionTempControlMixedSeL4CAmKESFanAckType = {return config_OptionTempControlMixedSeL4CAmKESFanAckType}

  def set_Config_OptionTempControlMixedSeL4CAmKESFanAckType(config: Config_OptionTempControlMixedSeL4CAmKESFanAckType): RandomLib ={
    config_OptionTempControlMixedSeL4CAmKESFanAckType = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P(v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_P): B = {return T}

  var config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P = Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P _)

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P = {return config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P}

  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P): RandomLib ={
    config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_P = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS(v: TempControlMixedSeL4CAmKES.Fan_fp_ft_PostState_Container_PS): B = {return T}

  var config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS = Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS _)

  def get_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS = {return config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS}

  def set_Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS(config: Config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS): RandomLib ={
    config_TempControlMixedSeL4CAmKESFan_fp_ft_PostState_Container_PS = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.SetPoint ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESSetPoint(v: TempControlMixedSeL4CAmKES.SetPoint): B = {return T}

  var config_TempControlMixedSeL4CAmKESSetPoint: Config_TempControlMixedSeL4CAmKESSetPoint = Config_TempControlMixedSeL4CAmKESSetPoint(100, _verbose, tc.TempControlMixedSeL4CAmKES.SetPoint.D_Inv_SetPoint _)

  def get_Config_TempControlMixedSeL4CAmKESSetPoint: Config_TempControlMixedSeL4CAmKESSetPoint = {return config_TempControlMixedSeL4CAmKESSetPoint}

  def set_Config_TempControlMixedSeL4CAmKESSetPoint(config: Config_TempControlMixedSeL4CAmKESSetPoint): RandomLib ={
    config_TempControlMixedSeL4CAmKESSetPoint = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.SetPoint_Payload ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESSetPoint_Payload(v: TempControlMixedSeL4CAmKES.SetPoint_Payload): B = {return T}

  var config_TempControlMixedSeL4CAmKESSetPoint_Payload: Config_TempControlMixedSeL4CAmKESSetPoint_Payload = Config_TempControlMixedSeL4CAmKESSetPoint_Payload(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESSetPoint_Payload _)

  def get_Config_TempControlMixedSeL4CAmKESSetPoint_Payload: Config_TempControlMixedSeL4CAmKESSetPoint_Payload = {return config_TempControlMixedSeL4CAmKESSetPoint_Payload}

  def set_Config_TempControlMixedSeL4CAmKESSetPoint_Payload(config: Config_TempControlMixedSeL4CAmKESSetPoint_Payload): RandomLib ={
    config_TempControlMixedSeL4CAmKESSetPoint_Payload = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container(v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container = Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container(100, _verbose, F, ISZ(), alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container _)

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container = {return config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container}

  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container = config
    return this
  }

  // ============= Option[art.Empty] ===================
  def alwaysTrue_Option_artEmpty(v: Option[art.Empty]): B = {return T}

  var config_Option_artEmpty: Config_Option_artEmpty = Config_Option_artEmpty(0, 20, 100, _verbose, alwaysTrue_Option_artEmpty _)
  def get_Config_Option_artEmpty: Config_Option_artEmpty = {return config_Option_artEmpty}

  def set_Config_Option_artEmpty(config: Config_Option_artEmpty): RandomLib ={
    config_Option_artEmpty = config
    return this
  }

  // ============= Option[TempControlMixedSeL4CAmKES.SetPoint] ===================
  def alwaysTrue_OptionTempControlMixedSeL4CAmKESSetPoint(v: Option[TempControlMixedSeL4CAmKES.SetPoint]): B = {return T}

  var config_OptionTempControlMixedSeL4CAmKESSetPoint: Config_OptionTempControlMixedSeL4CAmKESSetPoint = Config_OptionTempControlMixedSeL4CAmKESSetPoint(0, 20, 100, _verbose, alwaysTrue_OptionTempControlMixedSeL4CAmKESSetPoint _)
  def get_Config_OptionTempControlMixedSeL4CAmKESSetPoint: Config_OptionTempControlMixedSeL4CAmKESSetPoint = {return config_OptionTempControlMixedSeL4CAmKESSetPoint}

  def set_Config_OptionTempControlMixedSeL4CAmKESSetPoint(config: Config_OptionTempControlMixedSeL4CAmKESSetPoint): RandomLib ={
    config_OptionTempControlMixedSeL4CAmKESSetPoint = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P(v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_P): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P = Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P _)

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P = {return config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P}

  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_P = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS(v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PreState_Container_PS): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS = Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS _)

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS = {return config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS}

  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PreState_Container_PS = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container(v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container = Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container(100, _verbose, F, ISZ(), alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container _)

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container = {return config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container}

  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P(v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_P): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P = Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P _)

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P = {return config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P}

  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_P = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS(v: TempControlMixedSeL4CAmKES.TempControl_tcp_tct_PostState_Container_PS): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS = Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS _)

  def get_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS = {return config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS}

  def set_Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS(config: Config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempControl_tcp_tct_PostState_Container_PS = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container(v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container = Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container(100, _verbose, F, ISZ(), alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container _)

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container = {return config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container}

  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P(v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_P): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P = Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P _)

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P = {return config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P}

  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_P = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS(v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PreState_Container_PS): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS = Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS _)

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS = {return config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS}

  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PreState_Container_PS = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container(v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container = Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container(100, _verbose, F, ISZ(), alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container _)

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container = {return config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container}

  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P(v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_P): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P = Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P _)

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P = {return config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P}

  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_P = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS(v: TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_PostState_Container_PS): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS = Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS _)

  def get_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS = {return config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS}

  def set_Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS(config: Config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempSensor_tsp_tst_PostState_Container_PS = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempUnit.Type ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempUnitType(v: TempControlMixedSeL4CAmKES.TempUnit.Type): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempUnitType: Config_TempControlMixedSeL4CAmKESTempUnitType = Config_TempControlMixedSeL4CAmKESTempUnitType(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempUnitType _)

  def get_Config_TempControlMixedSeL4CAmKESTempUnitType: Config_TempControlMixedSeL4CAmKESTempUnitType = {return config_TempControlMixedSeL4CAmKESTempUnitType}

  def set_Config_TempControlMixedSeL4CAmKESTempUnitType(config: Config_TempControlMixedSeL4CAmKESTempUnitType): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempUnitType = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.TempUnit_Payload ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTempUnit_Payload(v: TempControlMixedSeL4CAmKES.TempUnit_Payload): B = {return T}

  var config_TempControlMixedSeL4CAmKESTempUnit_Payload: Config_TempControlMixedSeL4CAmKESTempUnit_Payload = Config_TempControlMixedSeL4CAmKESTempUnit_Payload(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTempUnit_Payload _)

  def get_Config_TempControlMixedSeL4CAmKESTempUnit_Payload: Config_TempControlMixedSeL4CAmKESTempUnit_Payload = {return config_TempControlMixedSeL4CAmKESTempUnit_Payload}

  def set_Config_TempControlMixedSeL4CAmKESTempUnit_Payload(config: Config_TempControlMixedSeL4CAmKESTempUnit_Payload): RandomLib ={
    config_TempControlMixedSeL4CAmKESTempUnit_Payload = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.Temperature ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTemperature(v: TempControlMixedSeL4CAmKES.Temperature): B = {return T}

  var config_TempControlMixedSeL4CAmKESTemperature: Config_TempControlMixedSeL4CAmKESTemperature = Config_TempControlMixedSeL4CAmKESTemperature(100, _verbose, tc.TempControlMixedSeL4CAmKES.Temperature.D_Inv_Temperature _)

  def get_Config_TempControlMixedSeL4CAmKESTemperature: Config_TempControlMixedSeL4CAmKESTemperature = {return config_TempControlMixedSeL4CAmKESTemperature}

  def set_Config_TempControlMixedSeL4CAmKESTemperature(config: Config_TempControlMixedSeL4CAmKESTemperature): RandomLib ={
    config_TempControlMixedSeL4CAmKESTemperature = config
    return this
  }

  // ============= TempControlMixedSeL4CAmKES.Temperature_Payload ===================
  def alwaysTrue_TempControlMixedSeL4CAmKESTemperature_Payload(v: TempControlMixedSeL4CAmKES.Temperature_Payload): B = {return T}

  var config_TempControlMixedSeL4CAmKESTemperature_Payload: Config_TempControlMixedSeL4CAmKESTemperature_Payload = Config_TempControlMixedSeL4CAmKESTemperature_Payload(100, _verbose, alwaysTrue_TempControlMixedSeL4CAmKESTemperature_Payload _)

  def get_Config_TempControlMixedSeL4CAmKESTemperature_Payload: Config_TempControlMixedSeL4CAmKESTemperature_Payload = {return config_TempControlMixedSeL4CAmKESTemperature_Payload}

  def set_Config_TempControlMixedSeL4CAmKESTemperature_Payload(config: Config_TempControlMixedSeL4CAmKESTemperature_Payload): RandomLib ={
    config_TempControlMixedSeL4CAmKESTemperature_Payload = config
    return this
  }

  // ============= TempControlPeriodic.FanAck.Type ===================
  def alwaysTrue_TempControlPeriodicFanAckType(v: TempControlPeriodic.FanAck.Type): B = {return T}

  var config_TempControlPeriodicFanAckType: Config_TempControlPeriodicFanAckType = Config_TempControlPeriodicFanAckType(100, _verbose, alwaysTrue_TempControlPeriodicFanAckType _)

  def get_Config_TempControlPeriodicFanAckType: Config_TempControlPeriodicFanAckType = {return config_TempControlPeriodicFanAckType}

  def set_Config_TempControlPeriodicFanAckType(config: Config_TempControlPeriodicFanAckType): RandomLib ={
    config_TempControlPeriodicFanAckType = config
    return this
  }

  // ============= TempControlPeriodic.FanAck_Payload ===================
  def alwaysTrue_TempControlPeriodicFanAck_Payload(v: TempControlPeriodic.FanAck_Payload): B = {return T}

  var config_TempControlPeriodicFanAck_Payload: Config_TempControlPeriodicFanAck_Payload = Config_TempControlPeriodicFanAck_Payload(100, _verbose, alwaysTrue_TempControlPeriodicFanAck_Payload _)

  def get_Config_TempControlPeriodicFanAck_Payload: Config_TempControlPeriodicFanAck_Payload = {return config_TempControlPeriodicFanAck_Payload}

  def set_Config_TempControlPeriodicFanAck_Payload(config: Config_TempControlPeriodicFanAck_Payload): RandomLib ={
    config_TempControlPeriodicFanAck_Payload = config
    return this
  }

  // ============= TempControlPeriodic.FanCmd.Type ===================
  def alwaysTrue_TempControlPeriodicFanCmdType(v: TempControlPeriodic.FanCmd.Type): B = {return T}

  var config_TempControlPeriodicFanCmdType: Config_TempControlPeriodicFanCmdType = Config_TempControlPeriodicFanCmdType(100, _verbose, alwaysTrue_TempControlPeriodicFanCmdType _)

  def get_Config_TempControlPeriodicFanCmdType: Config_TempControlPeriodicFanCmdType = {return config_TempControlPeriodicFanCmdType}

  def set_Config_TempControlPeriodicFanCmdType(config: Config_TempControlPeriodicFanCmdType): RandomLib ={
    config_TempControlPeriodicFanCmdType = config
    return this
  }

  // ============= TempControlPeriodic.FanCmd_Payload ===================
  def alwaysTrue_TempControlPeriodicFanCmd_Payload(v: TempControlPeriodic.FanCmd_Payload): B = {return T}

  var config_TempControlPeriodicFanCmd_Payload: Config_TempControlPeriodicFanCmd_Payload = Config_TempControlPeriodicFanCmd_Payload(100, _verbose, alwaysTrue_TempControlPeriodicFanCmd_Payload _)

  def get_Config_TempControlPeriodicFanCmd_Payload: Config_TempControlPeriodicFanCmd_Payload = {return config_TempControlPeriodicFanCmd_Payload}

  def set_Config_TempControlPeriodicFanCmd_Payload(config: Config_TempControlPeriodicFanCmd_Payload): RandomLib ={
    config_TempControlPeriodicFanCmd_Payload = config
    return this
  }

  // ============= TempControlPeriodic.SetPoint ===================
  def alwaysTrue_TempControlPeriodicSetPoint(v: TempControlPeriodic.SetPoint): B = {return T}

  var config_TempControlPeriodicSetPoint: Config_TempControlPeriodicSetPoint = Config_TempControlPeriodicSetPoint(100, _verbose, tc.TempControlPeriodic.SetPoint.D_Inv_SetPoint _)

  def get_Config_TempControlPeriodicSetPoint: Config_TempControlPeriodicSetPoint = {return config_TempControlPeriodicSetPoint}

  def set_Config_TempControlPeriodicSetPoint(config: Config_TempControlPeriodicSetPoint): RandomLib ={
    config_TempControlPeriodicSetPoint = config
    return this
  }

  // ============= TempControlPeriodic.SetPoint_Payload ===================
  def alwaysTrue_TempControlPeriodicSetPoint_Payload(v: TempControlPeriodic.SetPoint_Payload): B = {return T}

  var config_TempControlPeriodicSetPoint_Payload: Config_TempControlPeriodicSetPoint_Payload = Config_TempControlPeriodicSetPoint_Payload(100, _verbose, alwaysTrue_TempControlPeriodicSetPoint_Payload _)

  def get_Config_TempControlPeriodicSetPoint_Payload: Config_TempControlPeriodicSetPoint_Payload = {return config_TempControlPeriodicSetPoint_Payload}

  def set_Config_TempControlPeriodicSetPoint_Payload(config: Config_TempControlPeriodicSetPoint_Payload): RandomLib ={
    config_TempControlPeriodicSetPoint_Payload = config
    return this
  }

  // ============= TempControlPeriodic.TempUnit.Type ===================
  def alwaysTrue_TempControlPeriodicTempUnitType(v: TempControlPeriodic.TempUnit.Type): B = {return T}

  var config_TempControlPeriodicTempUnitType: Config_TempControlPeriodicTempUnitType = Config_TempControlPeriodicTempUnitType(100, _verbose, alwaysTrue_TempControlPeriodicTempUnitType _)

  def get_Config_TempControlPeriodicTempUnitType: Config_TempControlPeriodicTempUnitType = {return config_TempControlPeriodicTempUnitType}

  def set_Config_TempControlPeriodicTempUnitType(config: Config_TempControlPeriodicTempUnitType): RandomLib ={
    config_TempControlPeriodicTempUnitType = config
    return this
  }

  // ============= TempControlPeriodic.TempUnit_Payload ===================
  def alwaysTrue_TempControlPeriodicTempUnit_Payload(v: TempControlPeriodic.TempUnit_Payload): B = {return T}

  var config_TempControlPeriodicTempUnit_Payload: Config_TempControlPeriodicTempUnit_Payload = Config_TempControlPeriodicTempUnit_Payload(100, _verbose, alwaysTrue_TempControlPeriodicTempUnit_Payload _)

  def get_Config_TempControlPeriodicTempUnit_Payload: Config_TempControlPeriodicTempUnit_Payload = {return config_TempControlPeriodicTempUnit_Payload}

  def set_Config_TempControlPeriodicTempUnit_Payload(config: Config_TempControlPeriodicTempUnit_Payload): RandomLib ={
    config_TempControlPeriodicTempUnit_Payload = config
    return this
  }

  // ============= TempControlPeriodic.Temperature ===================
  def alwaysTrue_TempControlPeriodicTemperature(v: TempControlPeriodic.Temperature): B = {return T}

  var config_TempControlPeriodicTemperature: Config_TempControlPeriodicTemperature = Config_TempControlPeriodicTemperature(100, _verbose, tc.TempControlPeriodic.Temperature.D_Inv_Temperature _)

  def get_Config_TempControlPeriodicTemperature: Config_TempControlPeriodicTemperature = {return config_TempControlPeriodicTemperature}

  def set_Config_TempControlPeriodicTemperature(config: Config_TempControlPeriodicTemperature): RandomLib ={
    config_TempControlPeriodicTemperature = config
    return this
  }

  // ============= TempControlPeriodic.Temperature_Payload ===================
  def alwaysTrue_TempControlPeriodicTemperature_Payload(v: TempControlPeriodic.Temperature_Payload): B = {return T}

  var config_TempControlPeriodicTemperature_Payload: Config_TempControlPeriodicTemperature_Payload = Config_TempControlPeriodicTemperature_Payload(100, _verbose, alwaysTrue_TempControlPeriodicTemperature_Payload _)

  def get_Config_TempControlPeriodicTemperature_Payload: Config_TempControlPeriodicTemperature_Payload = {return config_TempControlPeriodicTemperature_Payload}

  def set_Config_TempControlPeriodicTemperature_Payload(config: Config_TempControlPeriodicTemperature_Payload): RandomLib ={
    config_TempControlPeriodicTemperature_Payload = config
    return this
  }

  // ============= util.Container ===================
  def alwaysTrue_utilContainer(v: util.Container): B = {return T}

  var config_utilContainer: Config_utilContainer = Config_utilContainer(100, _verbose, F, ISZ(), alwaysTrue_utilContainer _)

  def get_Config_utilContainer: Config_utilContainer = {return config_utilContainer}

  def set_Config_utilContainer(config: Config_utilContainer): RandomLib ={
    config_utilContainer = config
    return this
  }

  // ============= util.EmptyContainer ===================
  def alwaysTrue_utilEmptyContainer(v: util.EmptyContainer): B = {return T}

  var config_utilEmptyContainer: Config_utilEmptyContainer = Config_utilEmptyContainer(100, _verbose, alwaysTrue_utilEmptyContainer _)

  def get_Config_utilEmptyContainer: Config_utilEmptyContainer = {return config_utilEmptyContainer}

  def set_Config_utilEmptyContainer(config: Config_utilEmptyContainer): RandomLib ={
    config_utilEmptyContainer = config
    return this
  }
}

