// #Sireum

package slang.Isolette_Environment

import org.sireum._
import slang._

// Do not edit this file as it will be overwritten if HAMR codegen is rerun

object Heat {
  def example(): Isolette_Environment.Heat = {
    return Isolette_Environment.Heat(
      dummyField = Base_Types.Boolean_example())
  }
}

@datatype class Heat(
  val dummyField: B) {
}

object Heat_Payload {
  def example(): Heat_Payload = {
    return Heat_Payload(Isolette_Environment.Heat.example())
  }
}

@datatype class Heat_Payload(value: Isolette_Environment.Heat) extends art.DataContent
