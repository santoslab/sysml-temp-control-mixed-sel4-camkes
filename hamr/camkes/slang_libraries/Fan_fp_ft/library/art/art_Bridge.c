#include <all.h>

// art.Bridge

B art_Bridge__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Ttc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge: return T;
    default: return F;
  }
}

art_Bridge art_Bridge__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Ttc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_Bridge) this;
}

void art_Bridge_string_(STACK_FRAME String result, art_Bridge this);

void art_Bridge_name_(STACK_FRAME String result, art_Bridge this) {
  switch (this->type) {
    case Ttc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge: Type_assign(result, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_name_((tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}