#ifndef SIREUM_TYPE_H_tc_TempControlMixed_TempUnit_Type
#define SIREUM_TYPE_H_tc_TempControlMixed_TempUnit_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixed.TempUnit.Type
typedef enum {
  tc_TempControlMixed_TempUnit_Type_Fahrenheit = 0,
  tc_TempControlMixed_TempUnit_Type_Celsius = 1,
  tc_TempControlMixed_TempUnit_Type_Kelvin = 2
} tc_TempControlMixed_TempUnit_Type;

inline B tc_TempControlMixed_TempUnit_Type__eq(tc_TempControlMixed_TempUnit_Type this, tc_TempControlMixed_TempUnit_Type other) {
  return this == other;
}

inline B tc_TempControlMixed_TempUnit_Type__ne(tc_TempControlMixed_TempUnit_Type this, tc_TempControlMixed_TempUnit_Type other) {
  return this != other;
}

inline B tc_TempControlMixed_TempUnit_Type__equiv(tc_TempControlMixed_TempUnit_Type this, tc_TempControlMixed_TempUnit_Type other) {
  return this == other;
}

inline B tc_TempControlMixed_TempUnit_Type__inequiv(tc_TempControlMixed_TempUnit_Type this, tc_TempControlMixed_TempUnit_Type other) {
  return this != other;
}

inline Z tc_TempControlMixed_TempUnit_Type__ordinal(tc_TempControlMixed_TempUnit_Type this) {
  return (Z) this;
}

inline void tc_TempControlMixed_TempUnit_Type_name_(String result, tc_TempControlMixed_TempUnit_Type this) {
  switch (this) {
    case tc_TempControlMixed_TempUnit_Type_Fahrenheit: String_assign(result, string("Fahrenheit")); return;
    case tc_TempControlMixed_TempUnit_Type_Celsius: String_assign(result, string("Celsius")); return;
    case tc_TempControlMixed_TempUnit_Type_Kelvin: String_assign(result, string("Kelvin")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif