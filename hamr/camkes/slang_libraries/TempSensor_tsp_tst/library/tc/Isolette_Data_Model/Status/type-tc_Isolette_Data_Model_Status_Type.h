#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_Status_Type
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_Status_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.Status.Type
typedef enum {
  tc_Isolette_Data_Model_Status_Type_Init_Status = 0,
  tc_Isolette_Data_Model_Status_Type_On_Status = 1,
  tc_Isolette_Data_Model_Status_Type_Failed_Status = 2
} tc_Isolette_Data_Model_Status_Type;

inline B tc_Isolette_Data_Model_Status_Type__eq(tc_Isolette_Data_Model_Status_Type this, tc_Isolette_Data_Model_Status_Type other) {
  return this == other;
}

inline B tc_Isolette_Data_Model_Status_Type__ne(tc_Isolette_Data_Model_Status_Type this, tc_Isolette_Data_Model_Status_Type other) {
  return this != other;
}

inline B tc_Isolette_Data_Model_Status_Type__equiv(tc_Isolette_Data_Model_Status_Type this, tc_Isolette_Data_Model_Status_Type other) {
  return this == other;
}

inline B tc_Isolette_Data_Model_Status_Type__inequiv(tc_Isolette_Data_Model_Status_Type this, tc_Isolette_Data_Model_Status_Type other) {
  return this != other;
}

inline Z tc_Isolette_Data_Model_Status_Type__ordinal(tc_Isolette_Data_Model_Status_Type this) {
  return (Z) this;
}

inline void tc_Isolette_Data_Model_Status_Type_name_(String result, tc_Isolette_Data_Model_Status_Type this) {
  switch (this) {
    case tc_Isolette_Data_Model_Status_Type_Init_Status: String_assign(result, string("Init_Status")); return;
    case tc_Isolette_Data_Model_Status_Type_On_Status: String_assign(result, string("On_Status")); return;
    case tc_Isolette_Data_Model_Status_Type_Failed_Status: String_assign(result, string("Failed_Status")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif