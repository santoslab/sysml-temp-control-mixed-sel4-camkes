#ifndef SIREUM_TYPE_H_tc_TempControlMixed_FanAck_Type
#define SIREUM_TYPE_H_tc_TempControlMixed_FanAck_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// tc.TempControlMixed.FanAck.Type
typedef enum {
  tc_TempControlMixed_FanAck_Type_Ok = 0,
  tc_TempControlMixed_FanAck_Type_Error = 1
} tc_TempControlMixed_FanAck_Type;

inline B tc_TempControlMixed_FanAck_Type__eq(tc_TempControlMixed_FanAck_Type this, tc_TempControlMixed_FanAck_Type other) {
  return this == other;
}

inline B tc_TempControlMixed_FanAck_Type__ne(tc_TempControlMixed_FanAck_Type this, tc_TempControlMixed_FanAck_Type other) {
  return this != other;
}

inline B tc_TempControlMixed_FanAck_Type__equiv(tc_TempControlMixed_FanAck_Type this, tc_TempControlMixed_FanAck_Type other) {
  return this == other;
}

inline B tc_TempControlMixed_FanAck_Type__inequiv(tc_TempControlMixed_FanAck_Type this, tc_TempControlMixed_FanAck_Type other) {
  return this != other;
}

inline Z tc_TempControlMixed_FanAck_Type__ordinal(tc_TempControlMixed_FanAck_Type this) {
  return (Z) this;
}

inline void tc_TempControlMixed_FanAck_Type_name_(String result, tc_TempControlMixed_FanAck_Type this) {
  switch (this) {
    case tc_TempControlMixed_FanAck_Type_Ok: String_assign(result, string("Ok")); return;
    case tc_TempControlMixed_FanAck_Type_Error: String_assign(result, string("Error")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif