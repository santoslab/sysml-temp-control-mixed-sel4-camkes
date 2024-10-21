#ifndef SIREUM_TYPE_H_tc_TempControlPeriodic_FanAck_Type
#define SIREUM_TYPE_H_tc_TempControlPeriodic_FanAck_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlPeriodic.FanAck.Type
typedef enum {
  tc_TempControlPeriodic_FanAck_Type_Ok = 0,
  tc_TempControlPeriodic_FanAck_Type_Error = 1
} tc_TempControlPeriodic_FanAck_Type;

inline B tc_TempControlPeriodic_FanAck_Type__eq(tc_TempControlPeriodic_FanAck_Type this, tc_TempControlPeriodic_FanAck_Type other) {
  return this == other;
}

inline B tc_TempControlPeriodic_FanAck_Type__ne(tc_TempControlPeriodic_FanAck_Type this, tc_TempControlPeriodic_FanAck_Type other) {
  return this != other;
}

inline B tc_TempControlPeriodic_FanAck_Type__equiv(tc_TempControlPeriodic_FanAck_Type this, tc_TempControlPeriodic_FanAck_Type other) {
  return this == other;
}

inline B tc_TempControlPeriodic_FanAck_Type__inequiv(tc_TempControlPeriodic_FanAck_Type this, tc_TempControlPeriodic_FanAck_Type other) {
  return this != other;
}

inline Z tc_TempControlPeriodic_FanAck_Type__ordinal(tc_TempControlPeriodic_FanAck_Type this) {
  return (Z) this;
}

inline void tc_TempControlPeriodic_FanAck_Type_name_(String result, tc_TempControlPeriodic_FanAck_Type this) {
  switch (this) {
    case tc_TempControlPeriodic_FanAck_Type_Ok: String_assign(result, string("Ok")); return;
    case tc_TempControlPeriodic_FanAck_Type_Error: String_assign(result, string("Error")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif