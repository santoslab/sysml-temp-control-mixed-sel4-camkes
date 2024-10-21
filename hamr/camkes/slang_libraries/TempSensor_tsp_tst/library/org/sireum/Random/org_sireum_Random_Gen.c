#include <all.h>

// Random.Gen

B Random_Gen__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRandom_Gen64Impl: return T;
    default: return F;
  }
}

Random_Gen Random_Gen__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TRandom_Gen64Impl: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Random.Gen.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Random_Gen) this;
}

void Random_Gen_string_(STACK_FRAME String result, Random_Gen this);

F32 Random_Gen64Impl_nextF32Between_(STACK_FRAME Random_Gen64Impl this, F32 min, F32 max) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen", "nextF32Between", 0);

  sfUpdateLoc(155);
  F32 r;
  {
    F32 t_0 = Random_Gen64Impl_nextF32_01_(SF this);
    r = F32__add(F32__mul(t_0, F32__sub(max, min)), min);
  }

  sfUpdateLoc(156);
  B t_1;
  {
    t_1 = F32__ge(r, max);
  }
  if (t_1) {

    sfUpdateLoc(157);
    {
      r = max;
    }
  }
  return r;
}

F32 Random_Gen64Impl_nextF32_01_(STACK_FRAME Random_Gen64Impl this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen", "nextF32_01", 0);
  U32 t_0 = Random_Gen64Impl_nextU32_(SF this);
  return F32__mul(conversions_U32_toF32(SF U32__shr(t_0, U32_C(7))), 2.9802322E-8F);
}