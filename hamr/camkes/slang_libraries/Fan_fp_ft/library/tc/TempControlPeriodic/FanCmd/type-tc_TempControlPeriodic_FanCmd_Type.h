#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_FanCmd_Type
#define SIREUM_TYPE_H_tc_TempControlPeriodic_FanCmd_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.FanCmd.Type
typedef enum {
  tc_TempControlPeriodic_FanCmd_Type_On = 0,
  tc_TempControlPeriodic_FanCmd_Type_Off = 1
} tc_TempControlPeriodic_FanCmd_Type;

inline B tc_TempControlPeriodic_FanCmd_Type__eq(tc_TempControlPeriodic_FanCmd_Type this, tc_TempControlPeriodic_FanCmd_Type other) {
  return this == other;
}

inline B tc_TempControlPeriodic_FanCmd_Type__ne(tc_TempControlPeriodic_FanCmd_Type this, tc_TempControlPeriodic_FanCmd_Type other) {
  return this != other;
}

inline B tc_TempControlPeriodic_FanCmd_Type__equiv(tc_TempControlPeriodic_FanCmd_Type this, tc_TempControlPeriodic_FanCmd_Type other) {
  return this == other;
}

inline B tc_TempControlPeriodic_FanCmd_Type__inequiv(tc_TempControlPeriodic_FanCmd_Type this, tc_TempControlPeriodic_FanCmd_Type other) {
  return this != other;
}

inline Z tc_TempControlPeriodic_FanCmd_Type__ordinal(tc_TempControlPeriodic_FanCmd_Type this) {
  return (Z) this;
}

inline void tc_TempControlPeriodic_FanCmd_Type_name_(String result, tc_TempControlPeriodic_FanCmd_Type this) {
  switch (this) {
    case tc_TempControlPeriodic_FanCmd_Type_On: String_assign(result, string("On")); return;
    case tc_TempControlPeriodic_FanCmd_Type_Off: String_assign(result, string("Off")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif