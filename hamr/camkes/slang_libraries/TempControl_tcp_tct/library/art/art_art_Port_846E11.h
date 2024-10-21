#ifndef SIREUM_H_art_art_Port_846E11
#define SIREUM_H_art_art_Port_846E11

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[tc.TempControlMixedSeL4CAmKES.SetPoint]

#define art_Port_846E11_id_(this) ((this)->id)
#define art_Port_846E11_name_(this) ((String) &(this)->name)
#define art_Port_846E11_mode_(this) ((this)->mode)

B art_Port_846E11__eq(art_Port_846E11 this, art_Port_846E11 other);
inline B art_Port_846E11__ne(art_Port_846E11 this, art_Port_846E11 other) {
  return !art_Port_846E11__eq(this, other);
};
B art_Port_846E11__equiv(art_Port_846E11 this, art_Port_846E11 other);
inline B art_Port_846E11__inequiv(art_Port_846E11 this, art_Port_846E11 other) {
  return !art_Port_846E11__equiv(this, other);
};
void art_Port_846E11_string_(STACK_FRAME String result, art_Port_846E11 this);
void art_Port_846E11_cprint(art_Port_846E11 this, B isOut);

inline B art_Port_846E11__is(STACK_FRAME void* this) {
  return ((art_Port_846E11) this)->type == Tart_Port_846E11;
}

inline art_Port_846E11 art_Port_846E11__as(STACK_FRAME void *this) {
  if (art_Port_846E11__is(CALLER this)) return (art_Port_846E11) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[tc.TempControlMixedSeL4CAmKES.SetPoint].");
  abort();
}

void art_Port_846E11_apply(STACK_FRAME art_Port_846E11 this, art_Art_PortId id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif