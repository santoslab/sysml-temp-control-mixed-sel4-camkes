#ifndef SIREUM_H_tc_Isolette_Data_Model_PhysicalTemp
#define SIREUM_H_tc_Isolette_Data_Model_PhysicalTemp

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.PhysicalTemp

#define tc_Isolette_Data_Model_PhysicalTemp_degrees_(this) ((this)->degrees)

B tc_Isolette_Data_Model_PhysicalTemp__eq(tc_Isolette_Data_Model_PhysicalTemp this, tc_Isolette_Data_Model_PhysicalTemp other);
inline B tc_Isolette_Data_Model_PhysicalTemp__ne(tc_Isolette_Data_Model_PhysicalTemp this, tc_Isolette_Data_Model_PhysicalTemp other) {
  return !tc_Isolette_Data_Model_PhysicalTemp__eq(this, other);
};
B tc_Isolette_Data_Model_PhysicalTemp__equiv(tc_Isolette_Data_Model_PhysicalTemp this, tc_Isolette_Data_Model_PhysicalTemp other);
inline B tc_Isolette_Data_Model_PhysicalTemp__inequiv(tc_Isolette_Data_Model_PhysicalTemp this, tc_Isolette_Data_Model_PhysicalTemp other) {
  return !tc_Isolette_Data_Model_PhysicalTemp__equiv(this, other);
};
void tc_Isolette_Data_Model_PhysicalTemp_string_(STACK_FRAME String result, tc_Isolette_Data_Model_PhysicalTemp this);
void tc_Isolette_Data_Model_PhysicalTemp_cprint(tc_Isolette_Data_Model_PhysicalTemp this, B isOut);

inline B tc_Isolette_Data_Model_PhysicalTemp__is(STACK_FRAME void* this) {
  return ((tc_Isolette_Data_Model_PhysicalTemp) this)->type == Ttc_Isolette_Data_Model_PhysicalTemp;
}

inline tc_Isolette_Data_Model_PhysicalTemp tc_Isolette_Data_Model_PhysicalTemp__as(STACK_FRAME void *this) {
  if (tc_Isolette_Data_Model_PhysicalTemp__is(CALLER this)) return (tc_Isolette_Data_Model_PhysicalTemp) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Isolette_Data_Model.PhysicalTemp.");
  abort();
}

void tc_Isolette_Data_Model_PhysicalTemp_apply(STACK_FRAME tc_Isolette_Data_Model_PhysicalTemp this, F32 degrees);

void tc_Isolette_Data_Model_PhysicalTemp_example(STACK_FRAME tc_Isolette_Data_Model_PhysicalTemp result);

#ifdef __cplusplus
}
#endif

#endif