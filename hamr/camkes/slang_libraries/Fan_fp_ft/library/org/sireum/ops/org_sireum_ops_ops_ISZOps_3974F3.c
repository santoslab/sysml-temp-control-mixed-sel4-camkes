#include <all.h>

// ops.ISZOps[art.Art.PortId]

B ops_ISZOps_3974F3__eq(ops_ISZOps_3974F3 this, ops_ISZOps_3974F3 other) {
  if (IS_D10119__ne((IS_D10119) &this->s, (IS_D10119) &other->s)) return F;
  return T;
}

B ops_ISZOps_3974F3__equiv(ops_ISZOps_3974F3 this, ops_ISZOps_3974F3 other) {
  if (IS_D10119__inequiv((IS_D10119) &this->s, (IS_D10119) &other->s)) return F;
  return T;
}

B ops_ISZOps_3974F3__ne(ops_ISZOps_3974F3 this, ops_ISZOps_3974F3 other);
B ops_ISZOps_3974F3__inequiv(ops_ISZOps_3974F3 this, ops_ISZOps_3974F3 other);

void ops_ISZOps_3974F3_string_(STACK_FRAME String result, ops_ISZOps_3974F3 this) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "string", 0);
  String_string_(SF result, string("ISZOps("));
  IS_D10119_string_(SF result, (IS_D10119) &this->s);
  String_string_(SF result, string(")"));
}

void ops_ISZOps_3974F3_cprint(ops_ISZOps_3974F3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("ISZOps("), isOut);
  IS_D10119_cprint((IS_D10119) &this->s, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B ops_ISZOps_3974F3__is(STACK_FRAME void* this);
ops_ISZOps_3974F3 ops_ISZOps_3974F3__as(STACK_FRAME void *this);

void ops_ISZOps_3974F3_apply(STACK_FRAME ops_ISZOps_3974F3 this, IS_D10119 s) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ops_ISZOps_3974F3", "apply", 0);
  Type_assign(&this->s, s, sizeof(struct IS_D10119));
}