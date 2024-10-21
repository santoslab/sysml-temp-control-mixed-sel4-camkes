#ifndef SIREUM_TYPE_H_tc_Isolette_Data_Model_Regulator_Mode_Type
#define SIREUM_TYPE_H_tc_Isolette_Data_Model_Regulator_Mode_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.Isolette_Data_Model.Regulator_Mode.Type
typedef enum {
  tc_Isolette_Data_Model_Regulator_Mode_Type_Init_Regulator_Mode = 0,
  tc_Isolette_Data_Model_Regulator_Mode_Type_Normal_Regulator_Mode = 1,
  tc_Isolette_Data_Model_Regulator_Mode_Type_Failed_Regulator_Mode = 2
} tc_Isolette_Data_Model_Regulator_Mode_Type;

inline B tc_Isolette_Data_Model_Regulator_Mode_Type__eq(tc_Isolette_Data_Model_Regulator_Mode_Type this, tc_Isolette_Data_Model_Regulator_Mode_Type other) {
  return this == other;
}

inline B tc_Isolette_Data_Model_Regulator_Mode_Type__ne(tc_Isolette_Data_Model_Regulator_Mode_Type this, tc_Isolette_Data_Model_Regulator_Mode_Type other) {
  return this != other;
}

inline B tc_Isolette_Data_Model_Regulator_Mode_Type__equiv(tc_Isolette_Data_Model_Regulator_Mode_Type this, tc_Isolette_Data_Model_Regulator_Mode_Type other) {
  return this == other;
}

inline B tc_Isolette_Data_Model_Regulator_Mode_Type__inequiv(tc_Isolette_Data_Model_Regulator_Mode_Type this, tc_Isolette_Data_Model_Regulator_Mode_Type other) {
  return this != other;
}

inline Z tc_Isolette_Data_Model_Regulator_Mode_Type__ordinal(tc_Isolette_Data_Model_Regulator_Mode_Type this) {
  return (Z) this;
}

inline void tc_Isolette_Data_Model_Regulator_Mode_Type_name_(String result, tc_Isolette_Data_Model_Regulator_Mode_Type this) {
  switch (this) {
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Init_Regulator_Mode: String_assign(result, string("Init_Regulator_Mode")); return;
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Normal_Regulator_Mode: String_assign(result, string("Normal_Regulator_Mode")); return;
    case tc_Isolette_Data_Model_Regulator_Mode_Type_Failed_Regulator_Mode: String_assign(result, string("Failed_Regulator_Mode")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif