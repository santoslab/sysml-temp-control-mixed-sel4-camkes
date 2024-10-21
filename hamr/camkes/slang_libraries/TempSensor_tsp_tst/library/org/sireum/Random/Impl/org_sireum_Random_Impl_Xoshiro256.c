#include <all.h>

// Random.Impl.Xoshiro256

B Random_Impl_Xoshiro256__eq(Random_Impl_Xoshiro256 this, Random_Impl_Xoshiro256 other) {
  if (U64__ne(this->seed0, other->seed0)) return F;
  if (U64__ne(this->seed1, other->seed1)) return F;
  if (U64__ne(this->seed2, other->seed2)) return F;
  if (U64__ne(this->seed3, other->seed3)) return F;
  return T;
}

B Random_Impl_Xoshiro256__equiv(Random_Impl_Xoshiro256 this, Random_Impl_Xoshiro256 other) {
  if (U64__inequiv(this->seed0, other->seed0)) return F;
  if (U64__inequiv(this->seed1, other->seed1)) return F;
  if (U64__inequiv(this->seed2, other->seed2)) return F;
  if (U64__inequiv(this->seed3, other->seed3)) return F;
  return T;
}

B Random_Impl_Xoshiro256__ne(Random_Impl_Xoshiro256 this, Random_Impl_Xoshiro256 other);
B Random_Impl_Xoshiro256__inequiv(Random_Impl_Xoshiro256 this, Random_Impl_Xoshiro256 other);

void Random_Impl_Xoshiro256_string_(STACK_FRAME String result, Random_Impl_Xoshiro256 this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.Xoshiro256", "string", 0);
  String_string_(SF result, string("Xoshiro256("));
  String sep = string(", ");
  U64_string_(SF result, this->seed0);
  String_string_(SF result, sep);
  U64_string_(SF result, this->seed1);
  String_string_(SF result, sep);
  U64_string_(SF result, this->seed2);
  String_string_(SF result, sep);
  U64_string_(SF result, this->seed3);
  String_string_(SF result, string(")"));
}

void Random_Impl_Xoshiro256_cprint(Random_Impl_Xoshiro256 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Xoshiro256("), isOut);
  String sep = string(", ");
  U64_cprint(this->seed0, isOut);
  String_cprint(sep, isOut);
  U64_cprint(this->seed1, isOut);
  String_cprint(sep, isOut);
  U64_cprint(this->seed2, isOut);
  String_cprint(sep, isOut);
  U64_cprint(this->seed3, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Random_Impl_Xoshiro256__is(STACK_FRAME void* this);
Random_Impl_Xoshiro256 Random_Impl_Xoshiro256__as(STACK_FRAME void *this);

void Random_Impl_Xoshiro256_apply(STACK_FRAME Random_Impl_Xoshiro256 this, U64 seed0, U64 seed1, U64 seed2, U64 seed3) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.Xoshiro256", "apply", 0);
  this->seed0 = seed0;
  this->seed1 = seed1;
  this->seed2 = seed2;
  this->seed3 = seed3;
}

void Random_Impl_Xoshiro256_create(STACK_FRAME Random_Impl_Xoshiro256 result) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.Xoshiro256", "create", 0);

  sfUpdateLoc(561);
  DeclNewRandom_Impl_SplitMix64(_r);
  Random_Impl_SplitMix64 r = (Random_Impl_SplitMix64) &_r;
  {
    DeclNewRandom_Impl_SplitMix64(t_0);
    Random_Impl_SplitMix64_create(SF (Random_Impl_SplitMix64) &t_0);
    Type_assign(r, ((Random_Impl_SplitMix64) &t_0), sizeof(struct Random_Impl_SplitMix64));
  }
  U64 t_2 = Random_Impl_SplitMix64_next_(SF r);
  U64 t_3 = Random_Impl_SplitMix64_next_(SF r);
  U64 t_4 = Random_Impl_SplitMix64_next_(SF r);
  U64 t_5 = Random_Impl_SplitMix64_next_(SF r);
  DeclNewRandom_Impl_Xoshiro256(t_1);
  Random_Impl_Xoshiro256_apply(SF &t_1, t_2, t_3, t_4, t_5);
  Type_assign(result, (&t_1), sizeof(struct Random_Impl_Xoshiro256));
  return;
}

U64 Random_Impl_Xoshiro256_pp_(STACK_FRAME Random_Impl_Xoshiro256 this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.Xoshiro256", "pp", 0);

  sfUpdateLoc(584);
  U64 result;
  {
    U64 t_0 = Random_rotl64(SF U64__add(Random_Impl_Xoshiro256_seed0_(this), Random_Impl_Xoshiro256_seed3_(this)), U64_C(23));
    result = U64__add(t_0, Random_Impl_Xoshiro256_seed0_(this));
  }

  sfUpdateLoc(585);
  {
    Random_Impl_Xoshiro256_update_(SF this);
  }
  return result;
}

Unit Random_Impl_Xoshiro256_update_(STACK_FRAME Random_Impl_Xoshiro256 this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Impl.Xoshiro256", "update", 0);

  sfUpdateLoc(573);
  U64 t;
  {
    t = U64__shl(Random_Impl_Xoshiro256_seed1_(this), U64_C(17));
  }

  sfUpdateLoc(574);
  {
    Random_Impl_Xoshiro256_seed2_a(this, (U64) U64__xor(Random_Impl_Xoshiro256_seed2_(this), Random_Impl_Xoshiro256_seed0_(this)));
  }

  sfUpdateLoc(575);
  {
    Random_Impl_Xoshiro256_seed3_a(this, (U64) U64__xor(Random_Impl_Xoshiro256_seed3_(this), Random_Impl_Xoshiro256_seed1_(this)));
  }

  sfUpdateLoc(576);
  {
    Random_Impl_Xoshiro256_seed1_a(this, (U64) U64__xor(Random_Impl_Xoshiro256_seed1_(this), Random_Impl_Xoshiro256_seed2_(this)));
  }

  sfUpdateLoc(577);
  {
    Random_Impl_Xoshiro256_seed0_a(this, (U64) U64__xor(Random_Impl_Xoshiro256_seed0_(this), Random_Impl_Xoshiro256_seed3_(this)));
  }

  sfUpdateLoc(578);
  {
    Random_Impl_Xoshiro256_seed2_a(this, (U64) U64__xor(Random_Impl_Xoshiro256_seed2_(this), t));
  }

  sfUpdateLoc(579);
  {
    U64 t_0 = Random_rotl64(SF Random_Impl_Xoshiro256_seed3_(this), U64_C(45));
    Random_Impl_Xoshiro256_seed3_a(this, (U64) t_0);
  }
}