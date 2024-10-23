#ifndef SIREUM_TYPE_H_art_DataContent
#define SIREUM_TYPE_H_art_DataContent

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.DataContent

#include <type-tc_TempControlMixedSeL4CAmKES_SetPoint_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanCmd_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanAck_Payload.h>
#include <type-art_Empty.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempUnit_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature_Payload.h>
#include <type-tc_Base_Types_Boolean_Payload.h>
#include <type-tc_Base_Types_Integer_Payload.h>
#include <type-tc_Base_Types_Integer_8_Payload.h>
#include <type-tc_Base_Types_Integer_16_Payload.h>
#include <type-tc_Base_Types_Integer_32_Payload.h>
#include <type-tc_Base_Types_Integer_64_Payload.h>
#include <type-tc_Base_Types_Unsigned_8_Payload.h>
#include <type-tc_Base_Types_Unsigned_16_Payload.h>
#include <type-tc_Base_Types_Unsigned_32_Payload.h>
#include <type-tc_Base_Types_Unsigned_64_Payload.h>
#include <type-tc_Base_Types_Float_Payload.h>
#include <type-tc_Base_Types_Float_32_Payload.h>
#include <type-tc_Base_Types_Float_64_Payload.h>
#include <type-tc_Base_Types_Character_Payload.h>
#include <type-tc_Base_Types_String_Payload.h>

typedef union art_DataContent *art_DataContent;
union art_DataContent {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_SetPoint_Payload tc_TempControlMixedSeL4CAmKES_SetPoint_Payload;
  struct tc_TempControlMixedSeL4CAmKES_FanCmd_Payload tc_TempControlMixedSeL4CAmKES_FanCmd_Payload;
  struct tc_TempControlMixedSeL4CAmKES_FanAck_Payload tc_TempControlMixedSeL4CAmKES_FanAck_Payload;
  struct art_Empty art_Empty;
  struct tc_TempControlMixedSeL4CAmKES_TempUnit_Payload tc_TempControlMixedSeL4CAmKES_TempUnit_Payload;
  struct tc_TempControlMixedSeL4CAmKES_Temperature_Payload tc_TempControlMixedSeL4CAmKES_Temperature_Payload;
  struct tc_Base_Types_Boolean_Payload tc_Base_Types_Boolean_Payload;
  struct tc_Base_Types_Integer_Payload tc_Base_Types_Integer_Payload;
  struct tc_Base_Types_Integer_8_Payload tc_Base_Types_Integer_8_Payload;
  struct tc_Base_Types_Integer_16_Payload tc_Base_Types_Integer_16_Payload;
  struct tc_Base_Types_Integer_32_Payload tc_Base_Types_Integer_32_Payload;
  struct tc_Base_Types_Integer_64_Payload tc_Base_Types_Integer_64_Payload;
  struct tc_Base_Types_Unsigned_8_Payload tc_Base_Types_Unsigned_8_Payload;
  struct tc_Base_Types_Unsigned_16_Payload tc_Base_Types_Unsigned_16_Payload;
  struct tc_Base_Types_Unsigned_32_Payload tc_Base_Types_Unsigned_32_Payload;
  struct tc_Base_Types_Unsigned_64_Payload tc_Base_Types_Unsigned_64_Payload;
  struct tc_Base_Types_Float_Payload tc_Base_Types_Float_Payload;
  struct tc_Base_Types_Float_32_Payload tc_Base_Types_Float_32_Payload;
  struct tc_Base_Types_Float_64_Payload tc_Base_Types_Float_64_Payload;
  struct tc_Base_Types_Character_Payload tc_Base_Types_Character_Payload;
  struct tc_Base_Types_String_Payload tc_Base_Types_String_Payload;
};

#define DeclNewart_DataContent(x) union art_DataContent x = { 0 }

#ifdef __cplusplus
}
#endif

#endif