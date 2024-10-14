// #Sireum

package slang.TempControlMixedSeL4CAmKES

import org.sireum._
import art._
import slang.SystemTestSuiteSlang.runtimeMonitorStream
import slang._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object Fan_fp_f_SystemTestAPI {
  /** helper method to set the values of all incoming ports
    * @param api_fanCmd incoming event data port
    */
  def put_concrete_inputs(api_fanCmd: Option[TempControlMixedSeL4CAmKES.FanCmd.Type]): Unit = {
    put_fanCmd(api_fanCmd)
  }

  // setter for incoming event data port
  def put_fanCmd(value: Option[TempControlMixedSeL4CAmKES.FanCmd.Type]): Unit = {
    value match {
      case Some(v) => Art.insertInInfrastructurePort(Arch.TempControlSystem_Instance_fp_f.operational_api.fanCmd_Id, TempControlMixedSeL4CAmKES.FanCmd_Payload(v))
      case _ =>
    }
  }

  def fetchContainer(): slang.TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS = {
    if (runtimeMonitorStream.contains(Arch.TempControlSystem_Instance_fp_f.id)) {
      val (_, postContainer_) = runtimeMonitorStream.get(Arch.TempControlSystem_Instance_fp_f.id).get
      return postContainer_.asInstanceOf[slang.TempControlMixedSeL4CAmKES.Fan_fp_f_PostState_Container_PS]
    }
    else {
      assert(F, s"No post state recorded for ${Arch.TempControlSystem_Instance_fp_f.name}")
      halt(s"No post state recorded for ${Arch.TempControlSystem_Instance_fp_f.name}")
    }
  }

  def check_concrete_outputs(api_fanAck: Option[TempControlMixedSeL4CAmKES.FanAck.Type]): Unit = {
    var failureReasons: ISZ[ST] = ISZ()

    val actual_fanAck = get_api_fanAck()
    if (api_fanAck != actual_fanAck) {
      failureReasons = failureReasons :+ st"'fanAck' did not match expected.  Expected: $api_fanAck, Actual: $actual_fanAck"
    }

    assert(failureReasons.isEmpty, st"${(failureReasons, "\n")}".render)
  }

  def get_api_fanAck(): Option[TempControlMixedSeL4CAmKES.FanAck.Type] = {
    return fetchContainer().api_fanAck
  }
}