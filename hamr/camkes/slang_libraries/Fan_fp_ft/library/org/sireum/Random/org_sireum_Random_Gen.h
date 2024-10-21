#ifndef SIREUM_H_org_sireum_Random_Gen
#define SIREUM_H_org_sireum_Random_Gen

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Random.Gen

#define Random_Gen__eq(this, other) Type__eq(this, other)
#define Random_Gen__ne(this, other) (!Type__eq(this, other))
#define Random_Gen__equiv(this, other) Type__equiv(this, other)
#define Random_Gen__inequiv(this, other) (!Type__equiv(this, other))
#define Random_Gen_cprint(this, isOut) Type_cprint(this, isOut)
B Random_Gen__is(STACK_FRAME void *this);
Random_Gen Random_Gen__as(STACK_FRAME void *this);
inline void Random_Gen_string_(STACK_FRAME String result, Random_Gen this) {
  Type_string_(CALLER result, this);
}

Z Random_Gen64Impl_nextZBetween_(STACK_FRAME Random_Gen64Impl this, Z min, Z max);

Z Random_Gen64Impl_nextZ_(STACK_FRAME Random_Gen64Impl this);

U8 Random_Gen64Impl_nextU8Between_(STACK_FRAME Random_Gen64Impl this, U8 min, U8 max);

S64 Random_Gen64Impl_nextS64_(STACK_FRAME Random_Gen64Impl this);

U8 Random_Gen64Impl_nextU8_(STACK_FRAME Random_Gen64Impl this);

#ifdef __cplusplus
}
#endif

#endif