#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_TempUnit_Type
#define SIREUM_TYPE_H_tc_TempControlPeriodic_TempUnit_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.TempUnit.Type
typedef enum {
  tc_TempControlPeriodic_TempUnit_Type_Fahrenheit = 0,
  tc_TempControlPeriodic_TempUnit_Type_Celsius = 1,
  tc_TempControlPeriodic_TempUnit_Type_Kelvin = 2
} tc_TempControlPeriodic_TempUnit_Type;

inline B tc_TempControlPeriodic_TempUnit_Type__eq(tc_TempControlPeriodic_TempUnit_Type this, tc_TempControlPeriodic_TempUnit_Type other) {
  return this == other;
}

inline B tc_TempControlPeriodic_TempUnit_Type__ne(tc_TempControlPeriodic_TempUnit_Type this, tc_TempControlPeriodic_TempUnit_Type other) {
  return this != other;
}

inline B tc_TempControlPeriodic_TempUnit_Type__equiv(tc_TempControlPeriodic_TempUnit_Type this, tc_TempControlPeriodic_TempUnit_Type other) {
  return this == other;
}

inline B tc_TempControlPeriodic_TempUnit_Type__inequiv(tc_TempControlPeriodic_TempUnit_Type this, tc_TempControlPeriodic_TempUnit_Type other) {
  return this != other;
}

inline Z tc_TempControlPeriodic_TempUnit_Type__ordinal(tc_TempControlPeriodic_TempUnit_Type this) {
  return (Z) this;
}

inline void tc_TempControlPeriodic_TempUnit_Type_name_(String result, tc_TempControlPeriodic_TempUnit_Type this) {
  switch (this) {
    case tc_TempControlPeriodic_TempUnit_Type_Fahrenheit: String_assign(result, string("Fahrenheit")); return;
    case tc_TempControlPeriodic_TempUnit_Type_Celsius: String_assign(result, string("Celsius")); return;
    case tc_TempControlPeriodic_TempUnit_Type_Kelvin: String_assign(result, string("Kelvin")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif