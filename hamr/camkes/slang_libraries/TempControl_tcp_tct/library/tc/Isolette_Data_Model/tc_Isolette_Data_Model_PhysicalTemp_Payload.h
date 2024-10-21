#ifndef SIREUM_H_tc_Isolette_Data_Model_PhysicalTemp_Payload
#define SIREUM_H_tc_Isolette_Data_Model_PhysicalTemp_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.PhysicalTemp_Payload

#define tc_Isolette_Data_Model_PhysicalTemp_Payload_value_(this) ((tc_Isolette_Data_Model_PhysicalTemp) &(this)->value)

B tc_Isolette_Data_Model_PhysicalTemp_Payload__eq(tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp_Payload other);
inline B tc_Isolette_Data_Model_PhysicalTemp_Payload__ne(tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp_Payload other) {
  return !tc_Isolette_Data_Model_PhysicalTemp_Payload__eq(this, other);
};
B tc_Isolette_Data_Model_PhysicalTemp_Payload__equiv(tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp_Payload other);
inline B tc_Isolette_Data_Model_PhysicalTemp_Payload__inequiv(tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp_Payload other) {
  return !tc_Isolette_Data_Model_PhysicalTemp_Payload__equiv(this, other);
};
void tc_Isolette_Data_Model_PhysicalTemp_Payload_string_(STACK_FRAME String result, tc_Isolette_Data_Model_PhysicalTemp_Payload this);
void tc_Isolette_Data_Model_PhysicalTemp_Payload_cprint(tc_Isolette_Data_Model_PhysicalTemp_Payload this, B isOut);

inline B tc_Isolette_Data_Model_PhysicalTemp_Payload__is(STACK_FRAME void* this) {
  return ((tc_Isolette_Data_Model_PhysicalTemp_Payload) this)->type == Ttc_Isolette_Data_Model_PhysicalTemp_Payload;
}

inline tc_Isolette_Data_Model_PhysicalTemp_Payload tc_Isolette_Data_Model_PhysicalTemp_Payload__as(STACK_FRAME void *this) {
  if (tc_Isolette_Data_Model_PhysicalTemp_Payload__is(CALLER this)) return (tc_Isolette_Data_Model_PhysicalTemp_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Isolette_Data_Model.PhysicalTemp_Payload.");
  abort();
}

void tc_Isolette_Data_Model_PhysicalTemp_Payload_apply(STACK_FRAME tc_Isolette_Data_Model_PhysicalTemp_Payload this, tc_Isolette_Data_Model_PhysicalTemp value);

#ifdef __cplusplus
}
#endif

#endif