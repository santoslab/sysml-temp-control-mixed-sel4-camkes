#ifndef SIREUM_H_org_sireum_Option_5071ED
#define SIREUM_H_org_sireum_Option_5071ED

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]

#define Option_5071ED__eq(this, other) Type__eq(this, other)
#define Option_5071ED__ne(this, other) (!Type__eq(this, other))
#define Option_5071ED__equiv(this, other) Type__equiv(this, other)
#define Option_5071ED__inequiv(this, other) (!Type__equiv(this, other))
#define Option_5071ED_cprint(this, isOut) Type_cprint(this, isOut)
B Option_5071ED__is(STACK_FRAME void *this);
Option_5071ED Option_5071ED__as(STACK_FRAME void *this);
inline void Option_5071ED_string_(STACK_FRAME String result, Option_5071ED this) {
  Type_string_(CALLER result, this);
}

tc_TempControlMixedSeL4CAmKES_FanCmd_Type Option_5071ED_get_(STACK_FRAME Option_5071ED this);

#ifdef __cplusplus
}
#endif

#endif