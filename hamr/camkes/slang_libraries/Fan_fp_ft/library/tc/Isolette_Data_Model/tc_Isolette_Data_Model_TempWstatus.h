#ifndef SIREUM_H_tc_Isolette_Data_Model_TempWstatus
#define SIREUM_H_tc_Isolette_Data_Model_TempWstatus

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// tc.Isolette_Data_Model.TempWstatus

#define tc_Isolette_Data_Model_TempWstatus_degrees_(this) ((this)->degrees)
#define tc_Isolette_Data_Model_TempWstatus_status_(this) ((this)->status)

B tc_Isolette_Data_Model_TempWstatus__eq(tc_Isolette_Data_Model_TempWstatus this, tc_Isolette_Data_Model_TempWstatus other);
inline B tc_Isolette_Data_Model_TempWstatus__ne(tc_Isolette_Data_Model_TempWstatus this, tc_Isolette_Data_Model_TempWstatus other) {
  return !tc_Isolette_Data_Model_TempWstatus__eq(this, other);
};
B tc_Isolette_Data_Model_TempWstatus__equiv(tc_Isolette_Data_Model_TempWstatus this, tc_Isolette_Data_Model_TempWstatus other);
inline B tc_Isolette_Data_Model_TempWstatus__inequiv(tc_Isolette_Data_Model_TempWstatus this, tc_Isolette_Data_Model_TempWstatus other) {
  return !tc_Isolette_Data_Model_TempWstatus__equiv(this, other);
};
void tc_Isolette_Data_Model_TempWstatus_string_(STACK_FRAME String result, tc_Isolette_Data_Model_TempWstatus this);
void tc_Isolette_Data_Model_TempWstatus_cprint(tc_Isolette_Data_Model_TempWstatus this, B isOut);

inline B tc_Isolette_Data_Model_TempWstatus__is(STACK_FRAME void* this) {
  return ((tc_Isolette_Data_Model_TempWstatus) this)->type == Ttc_Isolette_Data_Model_TempWstatus;
}

inline tc_Isolette_Data_Model_TempWstatus tc_Isolette_Data_Model_TempWstatus__as(STACK_FRAME void *this) {
  if (tc_Isolette_Data_Model_TempWstatus__is(CALLER this)) return (tc_Isolette_Data_Model_TempWstatus) this;
  sfAbortImpl(CALLER "Invalid cast to tc.Isolette_Data_Model.TempWstatus.");
  abort();
}

void tc_Isolette_Data_Model_TempWstatus_apply(STACK_FRAME tc_Isolette_Data_Model_TempWstatus this, F32 degrees, tc_Isolette_Data_Model_ValueStatus_Type status);

void tc_Isolette_Data_Model_TempWstatus_example(STACK_FRAME tc_Isolette_Data_Model_TempWstatus result);

#ifdef __cplusplus
}
#endif

#endif