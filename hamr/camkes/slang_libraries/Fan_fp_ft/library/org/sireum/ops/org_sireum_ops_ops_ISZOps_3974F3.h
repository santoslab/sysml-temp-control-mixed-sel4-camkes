#ifndef SIREUM_H_org_sireum_ops_ops_ISZOps_3974F3
#define SIREUM_H_org_sireum_ops_ops_ISZOps_3974F3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// ops.ISZOps[art.Art.PortId]

#define ops_ISZOps_3974F3_s_(this) ((IS_D10119) &(this)->s)

B ops_ISZOps_3974F3__eq(ops_ISZOps_3974F3 this, ops_ISZOps_3974F3 other);
inline B ops_ISZOps_3974F3__ne(ops_ISZOps_3974F3 this, ops_ISZOps_3974F3 other) {
  return !ops_ISZOps_3974F3__eq(this, other);
};
B ops_ISZOps_3974F3__equiv(ops_ISZOps_3974F3 this, ops_ISZOps_3974F3 other);
inline B ops_ISZOps_3974F3__inequiv(ops_ISZOps_3974F3 this, ops_ISZOps_3974F3 other) {
  return !ops_ISZOps_3974F3__equiv(this, other);
};
void ops_ISZOps_3974F3_string_(STACK_FRAME String result, ops_ISZOps_3974F3 this);
void ops_ISZOps_3974F3_cprint(ops_ISZOps_3974F3 this, B isOut);

inline B ops_ISZOps_3974F3__is(STACK_FRAME void* this) {
  return ((ops_ISZOps_3974F3) this)->type == Tops_ISZOps_3974F3;
}

inline ops_ISZOps_3974F3 ops_ISZOps_3974F3__as(STACK_FRAME void *this) {
  if (ops_ISZOps_3974F3__is(CALLER this)) return (ops_ISZOps_3974F3) this;
  sfAbortImpl(CALLER "Invalid cast to ops.ISZOps[art.Art.PortId].");
  abort();
}

void ops_ISZOps_3974F3_apply(STACK_FRAME ops_ISZOps_3974F3 this, IS_D10119 s);

#ifdef __cplusplus
}
#endif

#endif