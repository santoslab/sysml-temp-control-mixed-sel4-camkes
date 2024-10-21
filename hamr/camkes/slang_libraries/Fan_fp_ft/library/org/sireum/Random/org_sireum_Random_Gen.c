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

Z Random_Gen64Impl_nextZBetween_(STACK_FRAME Random_Gen64Impl this, Z min, Z max) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen", "nextZBetween", 0);

  sfUpdateLoc(131);
  Z d;
  {
    d = Z__add(Z__sub(max, min), Z_C(1));
  }

  sfUpdateLoc(132);
  Z r;
  {
    B t_0;
    {
      B t_1 = F;
      Z t_2 = U64_toZ_(SF U64_Min);
      if (Z__le(t_2, d)) {
        Z t_3 = U64_toZ_(SF U64_Max);
        t_1 = Z__le(d, t_3);
      }
      t_0 = t_1;
    }
    if (t_0) {

      sfUpdateLoc(133);
      U64 m;
      {
        m = U64_C(1);
      }

      sfUpdateLoc(134);
      B t_134_9;
      {
        B t_4 = F;
        if (U64__lt(m, U64_C(64))) {
          Z t_5 = U64_toZ_(SF U64__shl(U64_C(1), m));
          t_4 = Z__le(t_5, d);
        }
        t_134_9 = t_4;
      }
      while(t_134_9) {

        sfUpdateLoc(135);
        {
          m = U64__add(m, U64_C(1));
        }

        sfUpdateLoc(134);
        B t_6 = F;
        if (U64__lt(m, U64_C(64))) {
          Z t_7 = U64_toZ_(SF U64__shl(U64_C(1), m));
          t_6 = Z__le(t_7, d);
        }
        t_134_9 = t_6;
      }
      U64 t_8 = Random_Gen64Impl_nextU64_(SF this);
      Z t_9 = U64_toZ_(SF U64__ushr(t_8, U64__sub(U64_C(64), m)));
      r = t_9;
    } else {

      sfUpdateLoc(139);
      Z t;
      {
        Z t_10 = Random_Gen64Impl_nextZ_(SF this);
        t = t_10;
      }

      sfUpdateLoc(140);
      B t_11;
      {
        t_11 = Z__lt(t, Z_C(0));
      }
      if (t_11) {

        sfUpdateLoc(141);
        {
          t = Z__minus(t);
        }
      }
      r = t;
    }
  }

  sfUpdateLoc(145);
  {
    r = Z__add(Z__rem(r, d), min);
  }
  return r;
}

Z Random_Gen64Impl_nextZ_(STACK_FRAME Random_Gen64Impl this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen", "nextZ", 0);

  sfUpdateLoc(72);
  Z n;
  {
    U8 t_0 = Random_Gen64Impl_nextU8Between_(SF this, U8_C(0), U8_C(16));
    Z t_1 = U8_toZ_(SF t_0);
    n = t_1;
  }

  sfUpdateLoc(73);
  Z r;
  {
    S64 t_2 = Random_Gen64Impl_nextS64_(SF this);
    Z t_3 = S64_toZ_(SF t_2);
    r = t_3;
  }

  sfUpdateLoc(74);
  {
    Z t_6;
    {
      t_6 = Z_C(0);
    }
    Z t_7;
    {
      t_7 = n;
    }
    Z t_8;
    {
      t_8 = (Z) 1;
    }
    while (t_6 < t_7) {

      sfUpdateLoc(75);
      {
        S64 t_4 = Random_Gen64Impl_nextS64_(SF this);
        Z t_5 = S64_toZ_(SF t_4);
        r = Z__mul(r, t_5);
      }

      sfUpdateLoc(74);
      t_6 = (Z) (t_6 + t_8);
    }
  }
  return r;
}

U8 Random_Gen64Impl_nextU8Between_(STACK_FRAME Random_Gen64Impl this, U8 min, U8 max) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen", "nextU8Between", 0);

  sfUpdateLoc(225);
  B t_0;
  {
    B t_1 = F;
    if (U8__eq(U8_Min, min)) {
      t_1 = U8__eq(U8_Max, max);
    }
    t_0 = t_1;
  }
  if (t_0) {
    U8 t_2 = Random_Gen64Impl_nextU8_(SF this);
    return t_2;
  }

  sfUpdateLoc(228);
  U8 d;
  {
    d = U8__add(U8__sub(max, min), U8_C(1));
  }

  sfUpdateLoc(229);
  U8 r;
  {
    {

      sfUpdateLoc(230);
      U8 m;
      {
        m = U8_C(1);
      }

      sfUpdateLoc(231);
      B t_231_9;
      {
        B t_3 = F;
        if (U8__lt(m, U8_C(8))) {
          t_3 = U8__le(U8__shl(U8_C(1), m), d);
        }
        t_231_9 = t_3;
      }
      while(t_231_9) {

        sfUpdateLoc(232);
        {
          m = U8__add(m, U8_C(1));
        }

        sfUpdateLoc(231);
        B t_4 = F;
        if (U8__lt(m, U8_C(8))) {
          t_4 = U8__le(U8__shl(U8_C(1), m), d);
        }
        t_231_9 = t_4;
      }
      U8 t_5 = Random_Gen64Impl_nextU8_(SF this);
      r = U8__ushr(t_5, U8__sub(U8_C(8), m));
    }
  }
  return U8__add(U8__rem(r, d), min);
}

S64 Random_Gen64Impl_nextS64_(STACK_FRAME Random_Gen64Impl this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen", "nextS64", 0);
  U64 t_0 = Random_Gen64Impl_nextU64_(SF this);
  return conversions_U64_toRawS64(SF t_0);
}

U8 Random_Gen64Impl_nextU8_(STACK_FRAME Random_Gen64Impl this) {
  DeclNewStackFrame(caller, "Random.scala", "org.sireum.Random.Gen", "nextU8", 0);
  U64 t_0 = Random_Gen64Impl_nextU64_(SF this);
  Z t_1 = U64_toZ_(SF U64__ushr(t_0, U64_C(56)));
  return U8_fromZ(SF t_1);
}