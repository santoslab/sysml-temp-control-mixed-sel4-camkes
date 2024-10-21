#ifndef SIREUM_H_art_art_Port_AE5929
#define SIREUM_H_art_art_Port_AE5929

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[tc.TempControlMixedSeL4CAmKES.FanAck.Type]

#define art_Port_AE5929_id_(this) ((this)->id)
#define art_Port_AE5929_name_(this) ((String) &(this)->name)
#define art_Port_AE5929_mode_(this) ((this)->mode)

B art_Port_AE5929__eq(art_Port_AE5929 this, art_Port_AE5929 other);
inline B art_Port_AE5929__ne(art_Port_AE5929 this, art_Port_AE5929 other) {
  return !art_Port_AE5929__eq(this, other);
};
B art_Port_AE5929__equiv(art_Port_AE5929 this, art_Port_AE5929 other);
inline B art_Port_AE5929__inequiv(art_Port_AE5929 this, art_Port_AE5929 other) {
  return !art_Port_AE5929__equiv(this, other);
};
void art_Port_AE5929_string_(STACK_FRAME String result, art_Port_AE5929 this);
void art_Port_AE5929_cprint(art_Port_AE5929 this, B isOut);

inline B art_Port_AE5929__is(STACK_FRAME void* this) {
  return ((art_Port_AE5929) this)->type == Tart_Port_AE5929;
}

inline art_Port_AE5929 art_Port_AE5929__as(STACK_FRAME void *this) {
  if (art_Port_AE5929__is(CALLER this)) return (art_Port_AE5929) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[tc.TempControlMixedSeL4CAmKES.FanAck.Type].");
  abort();
}

void art_Port_AE5929_apply(STACK_FRAME art_Port_AE5929 this, art_Art_PortId id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif