#include <all.h>

// Random.Gen64Impl

B Random_Gen64Impl__eq(Random_Gen64Impl this, Random_Gen64Impl other) {
  if (Random_Impl_Xoshiro256__ne((Random_Impl_Xoshiro256) &this->gen, (Random_Impl_Xoshiro256) &other->gen)) return F;
  return T;
}

B Random_Gen64Impl__equiv(Random_Gen64Impl this, Random_Gen64Impl other) {
  if (Random_Impl_Xoshiro256__inequiv((Random_Impl_Xoshiro256) &this->gen, (Random_Impl_Xoshiro256) &other->gen)) return F;
  return T;
}

B Random_Gen64Impl__ne(Random_Gen64Impl this, Random_Gen64Impl other);
B Random_Gen64Impl__inequiv(Random_Gen64Impl this, Random_Gen64Impl other);

void Random_Gen64Impl_string_(STACK_FRAME String result, Random_Gen64Impl this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen64Impl", "string", 0);
  String_string_(SF result, string("Gen64Impl("));
  Random_Impl_Xoshiro256_string_(SF result, (Random_Impl_Xoshiro256) &this->gen);
  String_string_(SF result, string(")"));
}

void Random_Gen64Impl_cprint(Random_Gen64Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Gen64Impl("), isOut);
  Random_Impl_Xoshiro256_cprint((Random_Impl_Xoshiro256) &this->gen, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Random_Gen64Impl__is(STACK_FRAME void* this);
Random_Gen64Impl Random_Gen64Impl__as(STACK_FRAME void *this);

void Random_Gen64Impl_apply(STACK_FRAME Random_Gen64Impl this, Random_Impl_Xoshiro256 gen) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen64Impl", "apply", 0);
  Type_assign(&this->gen, gen, sizeof(struct Random_Impl_Xoshiro256));
}

U64 Random_Gen64Impl_genU64_(STACK_FRAME Random_Gen64Impl this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen64Impl", "genU64", 0);
  U64 t_0 = Random_Impl_Xoshiro256_pp_(SF Random_Gen64Impl_gen_(this));
  return t_0;
}