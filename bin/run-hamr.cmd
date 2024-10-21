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

val home = Os.slashDir.up

val sireum = Os.path(Os.env("SIREUM_HOME").get) / "bin" / (if (Os.isWin) "sireum.bat" else "sireum")

val sysml_models_dir: Os.Path = Os.env("sysmlv2-models") match {
    case Some(d) =>
      val cand = Os.path(d)
      if (!cand.exists || !cand.isDir) {
        println(s"$cand is not a valid directory")
        Os.exit(1)
        halt("")
      } else {
        cand
      }
    case _ =>
      val cand = home.up.up.up.up / "sysmlv2-models"
      if (cand.exists && cand.isDir) {
        cand
      } else {
        println("Please set the sysmlv2-models environment variable")
        Os.exit(1)
        halt("")
      }
}

val platform: String =
  if(Os.cliArgs.nonEmpty) Os.cliArgs(0)
  else "JVM"

var codegeArgs: ISZ[String] = ISZ(
    sireum.value, "hamr", "sysml", "codegen",
    "--platform", platform,
    "--sourcepath", sysml_models_dir.value,
    (home / "TempControlMixedCamkes.sysml").value)

val results = Os.proc(codegeArgs).console.run()

Os.exit(results.exitCode)