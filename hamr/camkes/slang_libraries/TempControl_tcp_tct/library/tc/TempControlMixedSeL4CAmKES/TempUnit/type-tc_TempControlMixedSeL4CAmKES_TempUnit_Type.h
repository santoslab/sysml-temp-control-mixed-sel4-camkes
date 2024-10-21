#ifndef SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempUnit_Type
#define SIREUM_TYPE_H_tc_TempControlMixedSeL4CAmKES_TempUnit_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixedSeL4CAmKES.TempUnit.Type
typedef enum {
  tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit = 0
} tc_TempControlMixedSeL4CAmKES_TempUnit_Type;

inline B tc_TempControlMixedSeL4CAmKES_TempUnit_Type__eq(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type other) {
  return this == other;
}

inline B tc_TempControlMixedSeL4CAmKES_TempUnit_Type__ne(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type other) {
  return this != other;
}

inline B tc_TempControlMixedSeL4CAmKES_TempUnit_Type__equiv(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type other) {
  return this == other;
}

inline B tc_TempControlMixedSeL4CAmKES_TempUnit_Type__inequiv(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this, tc_TempControlMixedSeL4CAmKES_TempUnit_Type other) {
  return this != other;
}

inline Z tc_TempControlMixedSeL4CAmKES_TempUnit_Type__ordinal(tc_TempControlMixedSeL4CAmKES_TempUnit_Type this) {
  return (Z) this;
}

inline void tc_TempControlMixedSeL4CAmKES_TempUnit_Type_name_(String result, tc_TempControlMixedSeL4CAmKES_TempUnit_Type this) {
  switch (this) {
    case tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit: String_assign(result, string("Fahrenheit")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif