#ifndef SIREUM_H_art_art_Port_890848
#define SIREUM_H_art_art_Port_890848

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[tc.TempControlMixedSeL4CAmKES.Temperature]

#define art_Port_890848_id_(this) ((this)->id)
#define art_Port_890848_name_(this) ((String) &(this)->name)
#define art_Port_890848_mode_(this) ((this)->mode)

B art_Port_890848__eq(art_Port_890848 this, art_Port_890848 other);
inline B art_Port_890848__ne(art_Port_890848 this, art_Port_890848 other) {
  return !art_Port_890848__eq(this, other);
};
B art_Port_890848__equiv(art_Port_890848 this, art_Port_890848 other);
inline B art_Port_890848__inequiv(art_Port_890848 this, art_Port_890848 other) {
  return !art_Port_890848__equiv(this, other);
};
void art_Port_890848_string_(STACK_FRAME String result, art_Port_890848 this);
void art_Port_890848_cprint(art_Port_890848 this, B isOut);

inline B art_Port_890848__is(STACK_FRAME void* this) {
  return ((art_Port_890848) this)->type == Tart_Port_890848;
}

inline art_Port_890848 art_Port_890848__as(STACK_FRAME void *this) {
  if (art_Port_890848__is(CALLER this)) return (art_Port_890848) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[tc.TempControlMixedSeL4CAmKES.Temperature].");
  abort();
}

void art_Port_890848_apply(STACK_FRAME art_Port_890848 this, art_Art_PortId id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif