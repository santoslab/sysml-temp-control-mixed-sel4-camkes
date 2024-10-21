#ifndef SIREUM_H_tc_Isolette_Data_Model_Failure_Flag
#define SIREUM_H_tc_Isolette_Data_Model_Failure_Flag

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.Failure_Flag

#define tc_Isolette_Data_Model_Failure_Flag_flag_(this) ((this)->flag)

B tc_Isolette_Data_Model_Failure_Flag__eq(tc_Isolette_Data_Model_Failure_Flag this, tc_Isolette_Data_Model_Failure_Flag other);
inline B tc_Isolette_Data_Model_Failure_Flag__ne(tc_Isolette_Data_Model_Failure_Flag this, tc_Isolette_Data_Model_Failure_Flag other) {
  return !tc_Isolette_Data_Model_Failure_Flag__eq(this, other);
};
B tc_Isolette_Data_Model_Failure_Flag__equiv(tc_Isolette_Data_Model_Failure_Flag this, tc_Isolette_Data_Model_Failure_Flag other);
inline B tc_Isolette_Data_Model_Failure_Flag__inequiv(tc_Isolette_Data_Model_Failure_Flag this, tc_Isolette_Data_Model_Failure_Flag other) {
  return !tc_Isolette_Data_Model_Failure_Flag__equiv(this, other);
};
void tc_Isolette_Data_Model_Failure_Flag_string_(STACK_FRAME String result, tc_Isolette_Data_Model_Failure_Flag this);
void tc_Isolette_Data_Model_Failure_Flag_cprint(tc_Isolette_Data_Model_Failure_Flag this, B isOut);

inline B tc_Isolette_Data_Model_Failure_Flag__is(STACK_FRAME void* this) {
  return ((tc_Isolette_Data_Model_Failure_Flag) this)->type == Ttc_Isolette_Data_Model_Failure_Flag;
}

inline tc_Isolette_Data_Model_Failure_Flag tc_Isolette_Data_Model_Failure_Flag__as(STACK_FRAME void *this) {
  if (tc_Isolette_Data_Model_Failure_Flag__is(CALLER this)) return (tc_Isolette_Data_Model_Failure_Flag) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Isolette_Data_Model.Failure_Flag.");
  abort();
}

void tc_Isolette_Data_Model_Failure_Flag_apply(STACK_FRAME tc_Isolette_Data_Model_Failure_Flag this, B flag);

void tc_Isolette_Data_Model_Failure_Flag_example(STACK_FRAME tc_Isolette_Data_Model_Failure_Flag result);

#ifdef __cplusplus
}
#endif

#endif