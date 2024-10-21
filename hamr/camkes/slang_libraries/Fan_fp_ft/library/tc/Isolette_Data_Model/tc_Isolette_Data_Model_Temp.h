#ifndef SIREUM_H_tc_Isolette_Data_Model_Temp
#define SIREUM_H_tc_Isolette_Data_Model_Temp

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.Temp

#define tc_Isolette_Data_Model_Temp_degrees_(this) ((this)->degrees)

B tc_Isolette_Data_Model_Temp__eq(tc_Isolette_Data_Model_Temp this, tc_Isolette_Data_Model_Temp other);
inline B tc_Isolette_Data_Model_Temp__ne(tc_Isolette_Data_Model_Temp this, tc_Isolette_Data_Model_Temp other) {
  return !tc_Isolette_Data_Model_Temp__eq(this, other);
};
B tc_Isolette_Data_Model_Temp__equiv(tc_Isolette_Data_Model_Temp this, tc_Isolette_Data_Model_Temp other);
inline B tc_Isolette_Data_Model_Temp__inequiv(tc_Isolette_Data_Model_Temp this, tc_Isolette_Data_Model_Temp other) {
  return !tc_Isolette_Data_Model_Temp__equiv(this, other);
};
void tc_Isolette_Data_Model_Temp_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Temp this);
void tc_Isolette_Data_Model_Temp_cprint(tc_Isolette_Data_Model_Temp this, B isOut);

inline B tc_Isolette_Data_Model_Temp__is(STACK_FRAME void* this) {
  return ((tc_Isolette_Data_Model_Temp) this)->type == Ttc_Isolette_Data_Model_Temp;
}

inline tc_Isolette_Data_Model_Temp tc_Isolette_Data_Model_Temp__as(STACK_FRAME void *this) {
  if (tc_Isolette_Data_Model_Temp__is(CALLER this)) return (tc_Isolette_Data_Model_Temp) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Isolette_Data_Model.Temp.");
  abort();
}

void tc_Isolette_Data_Model_Temp_apply(STACK_FRAME tc_Isolette_Data_Model_Temp this, F32 degrees);

void tc_Isolette_Data_Model_Temp_example(STACK_FRAME tc_Isolette_Data_Model_Temp result);

#ifdef __cplusplus
}
#endif

#endif