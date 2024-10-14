// #Sireum
package slang_rm.TempControlMixedSeL4CAmKES

import org.sireum._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

@msig trait TempControl_tcp_tc_Injection_Provider {
  def pre_receiveInput(): Unit
}

object TempControl_tcp_tc_Injection_Service {

  var providers: MSZ[TempControl_tcp_tc_Injection_Provider] = MSZ()

  def register(provider: TempControl_tcp_tc_Injection_Provider): Unit = {
    providers = providers :+ provider
  }

  def pre_receiveInput(): Unit = {
    for (provider <- providers) {
      provider.pre_receiveInput()
    }
  }
}