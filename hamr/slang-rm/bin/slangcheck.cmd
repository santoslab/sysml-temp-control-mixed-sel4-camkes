::/*#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF           #
if [ -z "${SIREUM_HOME}" ]; then                      #
  echo "Please set SIREUM_HOME env var"               #
  exit -1                                             #
fi                                                    #
exec "${SIREUM_HOME}/bin/sireum" slang run "$0" "$@"    #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
"%SIREUM_HOME%\bin\sireum.bat" slang run %0 %*
exit /B %errorlevel%
::!#*/
// #Sireum

import org.sireum._

val sireum = Os.path(Os.env("SIREUM_HOME").get) / "bin" / (if (Os.isWin) "sireum.bat" else "sireum")

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

// create SlangCheck artifacts for the Slang types used in the project

val files: ISZ[String] = ISZ("../src/main/data/slang_rm/TempControlMixed/Temperature.scala",
                             "../src/main/data/slang_rm/TempControlMixed/SetPoint.scala",
                             "../src/main/data/slang_rm/TempControlMixed/TempUnit.scala",
                             "../src/main/data/slang_rm/TempControlMixed/FanCmd.scala",
                             "../src/main/data/slang_rm/TempControlMixed/FanAck.scala",
                             "../src/main/data/slang_rm/TempControlMixedSeL4CAmKES/Temperature.scala",
                             "../src/main/data/slang_rm/TempControlMixedSeL4CAmKES/SetPoint.scala",
                             "../src/main/data/slang_rm/TempControlMixedSeL4CAmKES/TempUnit.scala",
                             "../src/main/data/slang_rm/TempControlMixedSeL4CAmKES/FanCmd.scala",
                             "../src/main/data/slang_rm/TempControlMixedSeL4CAmKES/FanAck.scala",
                             "../src/main/data/slang_rm/Isolette_Environment/Heat.scala",
                             "../src/main/data/slang_rm/Isolette_Environment/Interface_Interaction.scala",
                             "../src/main/data/slang_rm/Isolette_Environment/Air_Interaction.scala",
                             "../src/main/data/slang_rm/TempControlPeriodic/Temperature.scala",
                             "../src/main/data/slang_rm/TempControlPeriodic/SetPoint.scala",
                             "../src/main/data/slang_rm/TempControlPeriodic/TempUnit.scala",
                             "../src/main/data/slang_rm/TempControlPeriodic/FanCmd.scala",
                             "../src/main/data/slang_rm/TempControlPeriodic/FanAck.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/PhysicalTemp.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/TempWstatus.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/Temp.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/On_Off.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/Failure_Flag.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/ValueStatus.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/Status.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/Regulator_Mode.scala",
                             "../src/main/data/slang_rm/Isolette_Data_Model/Monitor_Mode.scala",
                             "../src/main/data/slang_rm/Base_Types.scala",
                             "../src/main/component/slang_rm/GUMBO_Periodic_Definitions/GUMBO__Library.scala",
                             "../src/main/component/slang_rm/TempControlMixed/GUMBO__Library.scala",
                             "../src/main/component/slang_rm/GUMBO_Mixed_Definitions/GUMBO__Library.scala",
                             "../src/main/component/slang_rm/TempControlPeriodic/GUMBO__Library.scala",
                             "../src/main/data/slang_rm/TempControlMixedSeL4CAmKES/TempSensor_tsp_ts_Containers.scala",
                             "../src/main/data/slang_rm/TempControlMixedSeL4CAmKES/TempControl_tcp_tc_Containers.scala",
                             "../src/main/data/slang_rm/TempControlMixedSeL4CAmKES/Fan_fp_f_Containers.scala",
                             "../src/main/util/slang_rm/runtimemonitor/ObservationKind.scala",
                             "../src/main/data/slang_rm/util/Container.scala",
                             "../src/main/art/art/DataContent.scala",
                             "../src/main/data/slang_rm/Aux_Types.scala")

val toolargs: String = st"${(files, " ")}".render

(Os.slashDir.up / "src" / "main" / "util" / "slang_rm").mkdirAll()

proc"$sireum proyek slangcheck -p slang_rm -o ${Os.slashDir.up}/src/main/util/slang_rm ${Os.slashDir.up} $toolargs".at(Os.slashDir).console.runCheck()

// call to the tools version of SlangCheck which does not invoke Tipe
//proc"$sireum tools slangcheck generator -p slang_rm -o ${Os.slashDir.up}/src/main/util/slang_rm $toolargs".at(Os.slashDir).console.runCheck()
