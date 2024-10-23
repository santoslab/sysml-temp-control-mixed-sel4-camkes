#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>
#include <type-art_DataContent.h>
#include <type-art_Empty.h>
#include <type-org_sireum_IS_948B60.h>
#include <type-org_sireum_None.h>
#include <type-org_sireum_None_86BF24.h>
#include <type-org_sireum_None_A70CEE.h>
#include <type-org_sireum_None_ACDB63.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_103926.h>
#include <type-org_sireum_Option_36021E.h>
#include <type-org_sireum_Option_5071ED.h>
#include <type-org_sireum_S16.h>
#include <type-org_sireum_S32.h>
#include <type-org_sireum_S64.h>
#include <type-org_sireum_S8.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_0C4CF8.h>
#include <type-org_sireum_Some_2EFA7D.h>
#include <type-org_sireum_Some_D85467.h>
#include <type-org_sireum_U16.h>
#include <type-org_sireum_U32.h>
#include <type-org_sireum_U64.h>
#include <type-org_sireum_U8.h>
#include <type-tc_Base_Types.h>
#include <type-tc_Base_Types_Boolean_Payload.h>
#include <type-tc_Base_Types_Character_Payload.h>
#include <type-tc_Base_Types_Float_32_Payload.h>
#include <type-tc_Base_Types_Float_64_Payload.h>
#include <type-tc_Base_Types_Float_Payload.h>
#include <type-tc_Base_Types_Integer_16_Payload.h>
#include <type-tc_Base_Types_Integer_32_Payload.h>
#include <type-tc_Base_Types_Integer_64_Payload.h>
#include <type-tc_Base_Types_Integer_8_Payload.h>
#include <type-tc_Base_Types_Integer_Payload.h>
#include <type-tc_Base_Types_String_Payload.h>
#include <type-tc_Base_Types_Unsigned_16_Payload.h>
#include <type-tc_Base_Types_Unsigned_32_Payload.h>
#include <type-tc_Base_Types_Unsigned_64_Payload.h>
#include <type-tc_Base_Types_Unsigned_8_Payload.h>
#include <type-tc_SlangTypeLibrary_SlangTypeLibrary.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanAck_Type.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanAck_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanCmd_Type.h>
#include <type-tc_TempControlMixedSeL4CAmKES_FanCmd_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_SetPoint.h>
#include <type-tc_TempControlMixedSeL4CAmKES_SetPoint_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempUnit_Type.h>
#include <type-tc_TempControlMixedSeL4CAmKES_TempUnit_Payload.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature.h>
#include <type-tc_TempControlMixedSeL4CAmKES_Temperature_Payload.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert=1/(pred);(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique=1/(pred);}
#endif

size_t sizeOf(Type t);
void Type_assign(void *dest, void *src, size_t destSize);

#ifdef __cplusplus
}
#endif

#endif