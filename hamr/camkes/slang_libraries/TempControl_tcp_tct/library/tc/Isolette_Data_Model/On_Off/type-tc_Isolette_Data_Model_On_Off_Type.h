#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_On_Off_Type
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_On_Off_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.On_Off.Type
typedef enum {
  tc_Isolette_Data_Model_On_Off_Type_Onn = 0,
  tc_Isolette_Data_Model_On_Off_Type_Off = 1
} tc_Isolette_Data_Model_On_Off_Type;

inline B tc_Isolette_Data_Model_On_Off_Type__eq(tc_Isolette_Data_Model_On_Off_Type this, tc_Isolette_Data_Model_On_Off_Type other) {
  return this == other;
}

inline B tc_Isolette_Data_Model_On_Off_Type__ne(tc_Isolette_Data_Model_On_Off_Type this, tc_Isolette_Data_Model_On_Off_Type other) {
  return this != other;
}

inline B tc_Isolette_Data_Model_On_Off_Type__equiv(tc_Isolette_Data_Model_On_Off_Type this, tc_Isolette_Data_Model_On_Off_Type other) {
  return this == other;
}

inline B tc_Isolette_Data_Model_On_Off_Type__inequiv(tc_Isolette_Data_Model_On_Off_Type this, tc_Isolette_Data_Model_On_Off_Type other) {
  return this != other;
}

inline Z tc_Isolette_Data_Model_On_Off_Type__ordinal(tc_Isolette_Data_Model_On_Off_Type this) {
  return (Z) this;
}

inline void tc_Isolette_Data_Model_On_Off_Type_name_(String result, tc_Isolette_Data_Model_On_Off_Type this) {
  switch (this) {
    case tc_Isolette_Data_Model_On_Off_Type_Onn: String_assign(result, string("Onn")); return;
    case tc_Isolette_Data_Model_On_Off_Type_Off: String_assign(result, string("Off")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif