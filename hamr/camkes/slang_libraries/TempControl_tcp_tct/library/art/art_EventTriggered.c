#include <all.h>

// art.EventTriggered

B art_EventTriggered__eq(art_EventTriggered this, art_EventTriggered other) {
  if (IS_D10119__ne((IS_D10119) &this->portIds, (IS_D10119) &other->portIds)) return F;
  return T;
}

B art_EventTriggered__equiv(art_EventTriggered this, art_EventTriggered other) {
  if (IS_D10119__inequiv((IS_D10119) &this->portIds, (IS_D10119) &other->portIds)) return F;
  return T;
}

B art_EventTriggered__ne(art_EventTriggered this, art_EventTriggered other);
B art_EventTriggered__inequiv(art_EventTriggered this, art_EventTriggered other);

void art_EventTriggered_string_(STACK_FRAME String result, art_EventTriggered this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.EventTriggered", "string", 0);
  String_string_(SF result, string("EventTriggered("));
  IS_D10119_string_(SF result, (IS_D10119) &this->portIds);
  String_string_(SF result, string(")"));
}

void art_EventTriggered_cprint(art_EventTriggered this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EventTriggered("), isOut);
  IS_D10119_cprint((IS_D10119) &this->portIds, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_EventTriggered__is(STACK_FRAME void* this);
art_EventTriggered art_EventTriggered__as(STACK_FRAME void *this);

void art_EventTriggered_apply(STACK_FRAME art_EventTriggered this, IS_D10119 portIds) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.EventTriggered", "apply", 0);
  Type_assign(&this->portIds, portIds, sizeof(struct IS_D10119));
}