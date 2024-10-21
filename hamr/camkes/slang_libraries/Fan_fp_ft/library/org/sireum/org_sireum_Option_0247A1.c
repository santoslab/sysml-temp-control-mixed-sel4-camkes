#include <all.h>

// Option[IS[Z, art.Art.PortId]]

B Option_0247A1__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_CFD2B0: return T;
    default: return F;
  }
}

Option_0247A1 Option_0247A1__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_CFD2B0: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[IS[Z, art.Art.PortId]].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_0247A1) this;
}

void Option_0247A1_string_(STACK_FRAME String result, Option_0247A1 this);

B Option_0247A1_isEmpty_(STACK_FRAME Option_0247A1 this) {
  switch (this->type) {
    case TNone_CFD2B0: return None_CFD2B0_isEmpty_(CALLER (None_CFD2B0) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void Option_0247A1_get_(STACK_FRAME IS_D10119 result, Option_0247A1 this) {
  switch (this->type) {
    case TNone_CFD2B0: None_CFD2B0_get_(CALLER (IS_D10119) result, (None_CFD2B0) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}