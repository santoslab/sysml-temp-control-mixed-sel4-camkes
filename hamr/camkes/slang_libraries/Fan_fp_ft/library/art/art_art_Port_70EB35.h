#ifndef SIREUM_H_art_art_Port_70EB35
#define SIREUM_H_art_art_Port_70EB35

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]

#define art_Port_70EB35_id_(this) ((this)->id)
#define art_Port_70EB35_name_(this) ((String) &(this)->name)
#define art_Port_70EB35_mode_(this) ((this)->mode)

B art_Port_70EB35__eq(art_Port_70EB35 this, art_Port_70EB35 other);
inline B art_Port_70EB35__ne(art_Port_70EB35 this, art_Port_70EB35 other) {
  return !art_Port_70EB35__eq(this, other);
};
B art_Port_70EB35__equiv(art_Port_70EB35 this, art_Port_70EB35 other);
inline B art_Port_70EB35__inequiv(art_Port_70EB35 this, art_Port_70EB35 other) {
  return !art_Port_70EB35__equiv(this, other);
};
void art_Port_70EB35_string_(STACK_FRAME String result, art_Port_70EB35 this);
void art_Port_70EB35_cprint(art_Port_70EB35 this, B isOut);

inline B art_Port_70EB35__is(STACK_FRAME void* this) {
  return ((art_Port_70EB35) this)->type == Tart_Port_70EB35;
}

inline art_Port_70EB35 art_Port_70EB35__as(STACK_FRAME void *this) {
  if (art_Port_70EB35__is(CALLER this)) return (art_Port_70EB35) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[tc.TempControlMixedSeL4CAmKES.FanCmd.Type].");
  abort();
}

void art_Port_70EB35_apply(STACK_FRAME art_Port_70EB35 this, art_Art_PortId id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif