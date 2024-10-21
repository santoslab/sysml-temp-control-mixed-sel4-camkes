#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_ValueStatus_Type
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_ValueStatus_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.ValueStatus.Type
typedef enum {
  tc_Isolette_Data_Model_ValueStatus_Type_Valid = 0,
  tc_Isolette_Data_Model_ValueStatus_Type_Invalid = 1
} tc_Isolette_Data_Model_ValueStatus_Type;

inline B tc_Isolette_Data_Model_ValueStatus_Type__eq(tc_Isolette_Data_Model_ValueStatus_Type this, tc_Isolette_Data_Model_ValueStatus_Type other) {
  return this == other;
}

inline B tc_Isolette_Data_Model_ValueStatus_Type__ne(tc_Isolette_Data_Model_ValueStatus_Type this, tc_Isolette_Data_Model_ValueStatus_Type other) {
  return this != other;
}

inline B tc_Isolette_Data_Model_ValueStatus_Type__equiv(tc_Isolette_Data_Model_ValueStatus_Type this, tc_Isolette_Data_Model_ValueStatus_Type other) {
  return this == other;
}

inline B tc_Isolette_Data_Model_ValueStatus_Type__inequiv(tc_Isolette_Data_Model_ValueStatus_Type this, tc_Isolette_Data_Model_ValueStatus_Type other) {
  return this != other;
}

inline Z tc_Isolette_Data_Model_ValueStatus_Type__ordinal(tc_Isolette_Data_Model_ValueStatus_Type this) {
  return (Z) this;
}

inline void tc_Isolette_Data_Model_ValueStatus_Type_name_(String result, tc_Isolette_Data_Model_ValueStatus_Type this) {
  switch (this) {
    case tc_Isolette_Data_Model_ValueStatus_Type_Valid: String_assign(result, string("Valid")); return;
    case tc_Isolette_Data_Model_ValueStatus_Type_Invalid: String_assign(result, string("Invalid")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif