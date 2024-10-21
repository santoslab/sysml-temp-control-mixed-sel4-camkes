#include <all.h>

// Random.Impl.SplitMix64

B Random_Impl_SplitMix64__eq(Random_Impl_SplitMix64 this, Random_Impl_SplitMix64 other) {
  if (U64__ne(this->seed, other->seed)) return F;
  return T;
}

B Random_Impl_SplitMix64__equiv(Random_Impl_SplitMix64 this, Random_Impl_SplitMix64 other) {
  if (U64__inequiv(this->seed, other->seed)) return F;
  return T;
}

B Random_Impl_SplitMix64__ne(Random_Impl_SplitMix64 this, Random_Impl_SplitMix64 other);
B Random_Impl_SplitMix64__inequiv(Random_Impl_SplitMix64 this, Random_Impl_SplitMix64 other);

void Random_Impl_SplitMix64_string_(STACK_FRAME String result, Random_Impl_SplitMix64 this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.SplitMix64", "string", 0);
  String_string_(SF result, string("SplitMix64("));
  U64_string_(SF result, this->seed);
  String_string_(SF result, string(")"));
}

void Random_Impl_SplitMix64_cprint(Random_Impl_SplitMix64 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("SplitMix64("), isOut);
  U64_cprint(this->seed, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Random_Impl_SplitMix64__is(STACK_FRAME void* this);
Random_Impl_SplitMix64 Random_Impl_SplitMix64__as(STACK_FRAME void *this);

void Random_Impl_SplitMix64_apply(STACK_FRAME Random_Impl_SplitMix64 this, U64 seed) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.SplitMix64", "apply", 0);
  this->seed = seed;
}

void Random_Impl_SplitMix64_create(STACK_FRAME Random_Impl_SplitMix64 result) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.SplitMix64", "create", 0);
  Z t_1 = extension_Time_currentNanos(SF_LAST);
  DeclNewRandom_Impl_SplitMix64(t_0);
  Random_Impl_SplitMix64_apply(SF &t_0, U64_fromZ(SF t_1));
  Type_assign(result, (&t_0), sizeof(struct Random_Impl_SplitMix64));
  return;
}

U64 Random_Impl_SplitMix64_next_(STACK_FRAME Random_Impl_SplitMix64 this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.SplitMix64", "next", 0);

  sfUpdateLoc(552);
  {
    Random_Impl_SplitMix64_seed_a(this, (U64) U64__add(Random_Impl_SplitMix64_seed_(this), U64_C(11400714819323198485)));
  }

  sfUpdateLoc(553);
  U64 z;
  {
    z = U64__mul(U64__xor(Random_Impl_SplitMix64_seed_(this), U64__ushr(Random_Impl_SplitMix64_seed_(this), U64_C(30))), U64_C(13787848793156543929));
  }

  sfUpdateLoc(554);
  {
    z = U64__mul(U64__xor(z, U64__ushr(z, U64_C(27))), U64_C(10723151780598845931));
  }
  return U64__xor(z, U64__ushr(z, U64_C(31)));
}