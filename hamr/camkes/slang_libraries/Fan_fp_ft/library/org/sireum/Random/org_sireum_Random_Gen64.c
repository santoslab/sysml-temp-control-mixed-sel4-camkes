#include <all.h>

// Random.Gen64

B Random_Gen64__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRandom_Gen64Impl: return T;
    default: return F;
  }
}

Random_Gen64 Random_Gen64__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRandom_Gen64Impl: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Random.Gen64.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Random_Gen64) this;
}

void Random_Gen64_string_(STACK_FRAME String result, Random_Gen64 this);

U64 Random_Gen64Impl_nextU64_(STACK_FRAME Random_Gen64Impl this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen64", "nextU64", 0);
  U64 t_0 = Random_Gen64Impl_genU64_(SF this);
  return t_0;
}