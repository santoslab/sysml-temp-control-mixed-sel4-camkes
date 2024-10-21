#ifndef SIREUM_H_org_sireum_Random_Gen64
#define SIREUM_H_org_sireum_Random_Gen64

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Random.Gen64

#define Random_Gen64__eq(this, other) Type__eq(this, other)
#define Random_Gen64__ne(this, other) (!Type__eq(this, other))
#define Random_Gen64__equiv(this, other) Type__equiv(this, other)
#define Random_Gen64__inequiv(this, other) (!Type__equiv(this, other))
#define Random_Gen64_cprint(this, isOut) Type_cprint(this, isOut)
B Random_Gen64__is(STACK_FRAME void *this);
Random_Gen64 Random_Gen64__as(STACK_FRAME void *this);
inline void Random_Gen64_string_(STACK_FRAME String result, Random_Gen64 this) {
  Type_string_(CALLER result, this);
}

U64 Random_Gen64Impl_nextU64_(STACK_FRAME Random_Gen64Impl this);

#ifdef __cplusplus
}
#endif

#endif