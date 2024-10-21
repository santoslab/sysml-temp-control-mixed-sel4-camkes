#ifndef SIREUM_H_tc_Isolette_Data_Model_Temp_Payload
#define SIREUM_H_tc_Isolette_Data_Model_Temp_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.Temp_Payload

#define tc_Isolette_Data_Model_Temp_Payload_value_(this) ((tc_Isolette_Data_Model_Temp) &(this)->value)

B tc_Isolette_Data_Model_Temp_Payload__eq(tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp_Payload other);
inline B tc_Isolette_Data_Model_Temp_Payload__ne(tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp_Payload other) {
  return !tc_Isolette_Data_Model_Temp_Payload__eq(this, other);
};
B tc_Isolette_Data_Model_Temp_Payload__equiv(tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp_Payload other);
inline B tc_Isolette_Data_Model_Temp_Payload__inequiv(tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp_Payload other) {
  return !tc_Isolette_Data_Model_Temp_Payload__equiv(this, other);
};
void tc_Isolette_Data_Model_Temp_Payload_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Temp_Payload this);
void tc_Isolette_Data_Model_Temp_Payload_cprint(tc_Isolette_Data_Model_Temp_Payload this, B isOut);

inline B tc_Isolette_Data_Model_Temp_Payload__is(STACK_FRAME void* this) {
  return ((tc_Isolette_Data_Model_Temp_Payload) this)->type == Ttc_Isolette_Data_Model_Temp_Payload;
}

inline tc_Isolette_Data_Model_Temp_Payload tc_Isolette_Data_Model_Temp_Payload__as(STACK_FRAME void *this) {
  if (tc_Isolette_Data_Model_Temp_Payload__is(CALLER this)) return (tc_Isolette_Data_Model_Temp_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Isolette_Data_Model.Temp_Payload.");
  abort();
}

void tc_Isolette_Data_Model_Temp_Payload_apply(STACK_FRAME tc_Isolette_Data_Model_Temp_Payload this, tc_Isolette_Data_Model_Temp value);

#ifdef __cplusplus
}
#endif

#endif