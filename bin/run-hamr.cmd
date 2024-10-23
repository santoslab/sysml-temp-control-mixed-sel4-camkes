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

import org.sireum.String.escape
import org.sireum._

val home = Os.slashDir.up

val sireum = Os.path(Os.env("SIREUM_HOME").get) / "bin" / (if (Os.isWin) "sireum.bat" else "sireum")

var platform: String = "JVM"
val expectedPlatforms: Set[String] = Set(ISZ("JVM", "Linux", "seL4"))
var sysml_aadl_libraries: Option[Os.Path] =
  if ((home.up.up.up.up / "sysmlv2-models").exists) Some(home.up.up.up.up / "sysmlv2-models" / "sysml-aadl-libraries")
  else None()

def exit(msg: String): Unit = {
  cprintln(T, msg)
  Os.exit(-1)
  halt("")
}

def set(a: String): Unit = {
  if (expectedPlatforms.contains(a)) {
    platform = a
  } else {
    val cand = Os.path(a)
    if (cand.exists && (cand / "aadl.library").exists) {
      sysml_aadl_libraries = Some(cand)
    } else {
      exit(s"Expecting either the platform or the location of the sysml-aadl-libraries but can't resolve '$a''")
    }
  }
}

Os.cliArgs match {
  case ISZ(a) => set(a)
  case ISZ(a, b) =>
    set (a)
    set (b)
  case s =>
    if (s.size > 2) {
      exit("Only expecting the platform and/or the location of sysml-aadl-libraries")
    }
}

if (sysml_aadl_libraries.isEmpty) {
  exit("Please specify the location of the directory that contains aadl.library and aadl.propertysets")
}

var codegeArgs: ISZ[String] = ISZ(
    sireum.value, "hamr", "sysml", "codegen",
    "--platform", platform,
    "--sourcepath", s"${sysml_aadl_libraries.get.value}:${home.value}",
    (home / "TempControlMixedCamkes.sysml").value)

val results = Os.proc(codegeArgs).console.run()

Os.exit(results.exitCode)