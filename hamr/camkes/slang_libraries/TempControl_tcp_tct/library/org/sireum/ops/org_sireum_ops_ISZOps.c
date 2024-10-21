#include <all.h>

B ops_ISZOps_3974F3_contains_(STACK_FRAME ops_ISZOps_3974F3 this, art_Art_PortId e) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "contains", 0);

  sfUpdateLoc(237);
  {
    IS_D10119 t_1 = ops_ISZOps_3974F3_s_(this);
    int8_t t_2 = (ops_ISZOps_3974F3_s_(this))->size;
    for (int8_t t_3 = 0; t_3 < t_2; t_3++) {
      art_Art_PortId v = t_1->value[t_3];

      sfUpdateLoc(238);
      B t_0;
      {
        t_0 = art_Art_PortId__eq(v, e);
      }
      if (t_0) {
        return T;
      }
    }
  }
  return F;
}