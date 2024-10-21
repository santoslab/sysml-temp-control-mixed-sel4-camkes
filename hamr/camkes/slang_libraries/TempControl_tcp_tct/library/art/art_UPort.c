#include <all.h>

// art.UPort

B art_UPort__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_890848: return T;
    case Tart_Port_9CBF18: return T;
    case Tart_Port_AE5929: return T;
    case Tart_Port_846E11: return T;
    case Tart_Port_70EB35: return T;
    default: return F;
  }
}

art_UPort art_UPort__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_Port_890848: break;
    case Tart_Port_9CBF18: break;
    case Tart_Port_AE5929: break;
    case Tart_Port_846E11: break;
    case Tart_Port_70EB35: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.UPort.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_UPort) this;
}

void art_UPort_string_(STACK_FRAME String result, art_UPort this);