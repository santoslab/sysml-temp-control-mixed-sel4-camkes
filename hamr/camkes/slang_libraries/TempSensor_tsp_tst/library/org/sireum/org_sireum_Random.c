#include <all.h>

U64 Random_rotl64(STACK_FRAME U64 x, U64 k) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random", "rotl64", 0);

  sfUpdateLoc(531);
  U64 _r_;
  {
    _r_ = U64__or(U64__shl(x, k), U64__shr(x, U64__sub(U64_C(64), k)));
  }
  return _r_;
}