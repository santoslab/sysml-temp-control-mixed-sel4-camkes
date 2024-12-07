if(APPLE)
  cmake_minimum_required(VERSION 3.27)
  if($ENV{CC} MATCHES "^.*ccomp$")
    execute_process(COMMAND uname -m
      OUTPUT_VARIABLE CMAKE_C_COMPILER_TARGET
      OUTPUT_STRIP_TRAILING_WHITESPACE)
  endif()
else()
  cmake_minimum_required(VERSION 3.5.1)
endif(APPLE)

project(TempSensor_tsp_tst)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)
if($ENV{CC} MATCHES "^.*ccomp$")
  add_compile_options(-flongdouble)
endif()

function(to_hex DEC HEX)
  while(DEC GREATER 0)
    math(EXPR _val "${DEC} % 16")
    math(EXPR DEC "${DEC} / 16")
    if(_val EQUAL 10)
      set(_val "A")
    elseif(_val EQUAL 11)
      set(_val "B")
    elseif(_val EQUAL 12)
      set(_val "C")
    elseif(_val EQUAL 13)
      set(_val "D")
    elseif(_val EQUAL 14)
      set(_val "E")
    elseif(_val EQUAL 15)
      set(_val "F")
    endif()
    set(_res "${_val}${_res}")
  endwhile()
  set(${HEX} "0x${_res}" PARENT_SCOPE)
endfunction()

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  to_hex("16777216" stack_size)
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
  if($ENV{CC} MATCHES "^.*ccomp$")
    SET(CMAKE_C_ARCHIVE_CREATE   "<CMAKE_AR> Scr <TARGET> <LINK_FLAGS> <OBJECTS>")
    SET(CMAKE_CXX_ARCHIVE_CREATE "<CMAKE_AR> Scr <TARGET> <LINK_FLAGS> <OBJECTS>")
    SET(CMAKE_C_ARCHIVE_FINISH   "<CMAKE_RANLIB> -no_warning_for_no_symbols -c <TARGET>")
    SET(CMAKE_CXX_ARCHIVE_FINISH "<CMAKE_RANLIB> -no_warning_for_no_symbols -c <TARGET>")
  else()
    add_compile_options(-Dinline=static)
  endif()
  add_compile_options("$<$<CONFIG:Release>:-Os>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    to_hex("16777216" stack_size)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
    add_compile_options(-fstack-usage -O2)
  elseif(NOT $ENV{CC} MATCHES "^.*ccomp$")
    add_compile_options(-fstack-usage -Dinline=static)
    add_compile_options("$<$<CONFIG:Release>:-Os>")
  endif()
endif()

option(BOUND_CHECK
  "Build the program with sequence bound checking."
  OFF)

if(BOUND_CHECK)
  add_definitions(-DSIREUM_BOUND_CHECK)
endif(BOUND_CHECK)

option(RANGE_CHECK
  "Build the program with range checking."
  OFF)

if(RANGE_CHECK)
  add_definitions(-DSIREUM_RANGE_CHECK)
endif(RANGE_CHECK)

option(NO_PRINT
  "Build the program without console output."
  OFF)

if(NO_PRINT)
  add_definitions(-DSIREUM_NO_PRINT)
endif(NO_PRINT)

option(WITH_LOC
  "Build the program with Slang location info."
  OFF)

if(WITH_LOC)
  add_definitions(-DSIREUM_LOC)
endif(WITH_LOC)


add_library(TempSensor_tsp_tst STATIC
        runtime/type.h
        runtime/stackframe.c
        runtime/misc.c
        runtime/type.c
        runtime/stackframe.h
        runtime/lib.h
        runtime/misc.h
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/art/type-art_Art.h
        library/art/art_Art.h
        library/art/art_Art.c
        library/art/Art/type-art_Art_BridgeId.h
        library/art/Art/art_Art_BridgeId.h
        library/art/Art/art_Art_BridgeId.c
        library/art/Art/type-art_Art_PortId.h
        library/art/Art/art_Art_PortId.h
        library/art/Art/art_Art_PortId.c
        library/art/type-art_Bridge.h
        library/art/art_Bridge.h
        library/art/art_Bridge.c
        library/art/Bridge/type-art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.c
        library/art/Bridge/type-art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/PortMode/type-art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/art/type-art_art_Port_890848.h
        library/art/art_art_Port_890848.h
        library/art/art_art_Port_890848.c
        library/art/type-art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_IS_D10119.h
        library/org/sireum/org_sireum_IS_D10119.h
        library/org/sireum/org_sireum_IS_D10119.c
        library/org/sireum/type-org_sireum_MBox2_37E193.h
        library/org/sireum/org_sireum_MBox2_37E193.h
        library/org/sireum/org_sireum_MBox2_37E193.c
        library/org/sireum/type-org_sireum_MBox2_43CC67.h
        library/org/sireum/org_sireum_MBox2_43CC67.h
        library/org/sireum/org_sireum_MBox2_43CC67.c
        library/org/sireum/type-org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.c
        library/org/sireum/type-org_sireum_None_79FC20.h
        library/org/sireum/org_sireum_None_79FC20.h
        library/org/sireum/org_sireum_None_79FC20.c
        library/org/sireum/type-org_sireum_None_86BF24.h
        library/org/sireum/org_sireum_None_86BF24.h
        library/org/sireum/org_sireum_None_86BF24.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_None_A70CEE.h
        library/org/sireum/org_sireum_None_A70CEE.h
        library/org/sireum/org_sireum_None_A70CEE.c
        library/org/sireum/type-org_sireum_None_ACDB63.h
        library/org/sireum/org_sireum_None_ACDB63.h
        library/org/sireum/org_sireum_None_ACDB63.c
        library/org/sireum/type-org_sireum_None_B66650.h
        library/org/sireum/org_sireum_None_B66650.h
        library/org/sireum/org_sireum_None_B66650.c
        library/org/sireum/type-org_sireum_None_CFD2B0.h
        library/org/sireum/org_sireum_None_CFD2B0.h
        library/org/sireum/org_sireum_None_CFD2B0.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_0247A1.h
        library/org/sireum/org_sireum_Option_0247A1.h
        library/org/sireum/org_sireum_Option_0247A1.c
        library/org/sireum/type-org_sireum_Option_103926.h
        library/org/sireum/org_sireum_Option_103926.h
        library/org/sireum/org_sireum_Option_103926.c
        library/org/sireum/type-org_sireum_Option_262EA2.h
        library/org/sireum/org_sireum_Option_262EA2.h
        library/org/sireum/org_sireum_Option_262EA2.c
        library/org/sireum/type-org_sireum_Option_36021E.h
        library/org/sireum/org_sireum_Option_36021E.h
        library/org/sireum/org_sireum_Option_36021E.c
        library/org/sireum/type-org_sireum_Option_5071ED.h
        library/org/sireum/org_sireum_Option_5071ED.h
        library/org/sireum/org_sireum_Option_5071ED.c
        library/org/sireum/type-org_sireum_Option_50DC68.h
        library/org/sireum/org_sireum_Option_50DC68.h
        library/org/sireum/org_sireum_Option_50DC68.c
        library/org/sireum/type-org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Random.h
        library/org/sireum/org_sireum_Random.h
        library/org/sireum/org_sireum_Random.c
        library/org/sireum/Random/type-org_sireum_Random_Gen.h
        library/org/sireum/Random/org_sireum_Random_Gen.h
        library/org/sireum/Random/org_sireum_Random_Gen.c
        library/org/sireum/Random/type-org_sireum_Random_Gen64.h
        library/org/sireum/Random/org_sireum_Random_Gen64.h
        library/org/sireum/Random/org_sireum_Random_Gen64.c
        library/org/sireum/Random/type-org_sireum_Random_Gen64Impl.h
        library/org/sireum/Random/org_sireum_Random_Gen64Impl.h
        library/org/sireum/Random/org_sireum_Random_Gen64Impl.c
        library/org/sireum/Random/Impl/type-org_sireum_Random_Impl_SplitMix64.h
        library/org/sireum/Random/Impl/org_sireum_Random_Impl_SplitMix64.h
        library/org/sireum/Random/Impl/org_sireum_Random_Impl_SplitMix64.c
        library/org/sireum/Random/Impl/type-org_sireum_Random_Impl_Xoshiro256.h
        library/org/sireum/Random/Impl/org_sireum_Random_Impl_Xoshiro256.h
        library/org/sireum/Random/Impl/org_sireum_Random_Impl_Xoshiro256.c
        library/org/sireum/type-org_sireum_S16.h
        library/org/sireum/org_sireum_S16.h
        library/org/sireum/org_sireum_S16.c
        library/org/sireum/type-org_sireum_S32.h
        library/org/sireum/org_sireum_S32.h
        library/org/sireum/org_sireum_S32.c
        library/org/sireum/type-org_sireum_S64.h
        library/org/sireum/org_sireum_S64.h
        library/org/sireum/org_sireum_S64.c
        library/org/sireum/type-org_sireum_S8.h
        library/org/sireum/org_sireum_S8.h
        library/org/sireum/org_sireum_S8.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_0C4CF8.h
        library/org/sireum/org_sireum_Some_0C4CF8.h
        library/org/sireum/org_sireum_Some_0C4CF8.c
        library/org/sireum/type-org_sireum_Some_2EFA7D.h
        library/org/sireum/org_sireum_Some_2EFA7D.h
        library/org/sireum/org_sireum_Some_2EFA7D.c
        library/org/sireum/type-org_sireum_Some_B14D88.h
        library/org/sireum/org_sireum_Some_B14D88.h
        library/org/sireum/org_sireum_Some_B14D88.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Some_D85467.h
        library/org/sireum/org_sireum_Some_D85467.h
        library/org/sireum/org_sireum_Some_D85467.c
        library/org/sireum/type-org_sireum_Some_FBE41D.h
        library/org/sireum/org_sireum_Some_FBE41D.h
        library/org/sireum/org_sireum_Some_FBE41D.c
        library/org/sireum/type-org_sireum_U16.h
        library/org/sireum/org_sireum_U16.h
        library/org/sireum/org_sireum_U16.c
        library/org/sireum/type-org_sireum_U32.h
        library/org/sireum/org_sireum_U32.h
        library/org/sireum/org_sireum_U32.c
        library/org/sireum/type-org_sireum_U64.h
        library/org/sireum/org_sireum_U64.h
        library/org/sireum/org_sireum_U64.c
        library/org/sireum/type-org_sireum_U8.h
        library/org/sireum/org_sireum_U8.h
        library/org/sireum/org_sireum_U8.c
        library/org/sireum/conversions/type-org_sireum_conversions_U32.h
        library/org/sireum/conversions/org_sireum_conversions_U32.h
        library/org/sireum/conversions/org_sireum_conversions_U32.c
        library/org/sireum/extension/type-org_sireum_extension_Time.h
        library/org/sireum/extension/org_sireum_extension_Time.h
        library/tc/type-tc_Base_Types.h
        library/tc/tc_Base_Types.h
        library/tc/tc_Base_Types.c
        library/tc/Base_Types/type-tc_Base_Types_Boolean_Payload.h
        library/tc/Base_Types/tc_Base_Types_Boolean_Payload.h
        library/tc/Base_Types/tc_Base_Types_Boolean_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Character_Payload.h
        library/tc/Base_Types/tc_Base_Types_Character_Payload.h
        library/tc/Base_Types/tc_Base_Types_Character_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Float_32_Payload.h
        library/tc/Base_Types/tc_Base_Types_Float_32_Payload.h
        library/tc/Base_Types/tc_Base_Types_Float_32_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Float_64_Payload.h
        library/tc/Base_Types/tc_Base_Types_Float_64_Payload.h
        library/tc/Base_Types/tc_Base_Types_Float_64_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Float_Payload.h
        library/tc/Base_Types/tc_Base_Types_Float_Payload.h
        library/tc/Base_Types/tc_Base_Types_Float_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Integer_16_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_16_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_16_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Integer_32_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_32_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_32_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Integer_64_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_64_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_64_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Integer_8_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_8_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_8_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Integer_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_Payload.h
        library/tc/Base_Types/tc_Base_Types_Integer_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_String_Payload.h
        library/tc/Base_Types/tc_Base_Types_String_Payload.h
        library/tc/Base_Types/tc_Base_Types_String_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Unsigned_16_Payload.h
        library/tc/Base_Types/tc_Base_Types_Unsigned_16_Payload.h
        library/tc/Base_Types/tc_Base_Types_Unsigned_16_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Unsigned_32_Payload.h
        library/tc/Base_Types/tc_Base_Types_Unsigned_32_Payload.h
        library/tc/Base_Types/tc_Base_Types_Unsigned_32_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Unsigned_64_Payload.h
        library/tc/Base_Types/tc_Base_Types_Unsigned_64_Payload.h
        library/tc/Base_Types/tc_Base_Types_Unsigned_64_Payload.c
        library/tc/Base_Types/type-tc_Base_Types_Unsigned_8_Payload.h
        library/tc/Base_Types/tc_Base_Types_Unsigned_8_Payload.h
        library/tc/Base_Types/tc_Base_Types_Unsigned_8_Payload.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_Defs.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_Defs.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_Defs.c
        library/tc/TempControlMixedSeL4CAmKES/FanAck/type-tc_TempControlMixedSeL4CAmKES_FanAck_Type.h
        library/tc/TempControlMixedSeL4CAmKES/FanAck/tc_TempControlMixedSeL4CAmKES_FanAck_Type.h
        library/tc/TempControlMixedSeL4CAmKES/FanAck/tc_TempControlMixedSeL4CAmKES_FanAck_Type.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_FanAck_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_FanAck_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_FanAck_Payload.c
        library/tc/TempControlMixedSeL4CAmKES/FanCmd/type-tc_TempControlMixedSeL4CAmKES_FanCmd_Type.h
        library/tc/TempControlMixedSeL4CAmKES/FanCmd/tc_TempControlMixedSeL4CAmKES_FanCmd_Type.h
        library/tc/TempControlMixedSeL4CAmKES/FanCmd/tc_TempControlMixedSeL4CAmKES_FanCmd_Type.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_FanCmd_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_FanCmd_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_FanCmd_Payload.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_SetPoint.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_SetPoint.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_SetPoint.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_SetPoint_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_SetPoint_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_SetPoint_Payload.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_TempSensor_Api.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_Api.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_Api.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge.c
        library/tc/TempControlMixedSeL4CAmKES/TempSensor_tsp_tst_Bridge/type-tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints.h
        library/tc/TempControlMixedSeL4CAmKES/TempSensor_tsp_tst_Bridge/tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints.h
        library/tc/TempControlMixedSeL4CAmKES/TempSensor_tsp_tst_Bridge/tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_seL4Nix.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_seL4Nix.h
        library/tc/TempControlMixedSeL4CAmKES/TempUnit/type-tc_TempControlMixedSeL4CAmKES_TempUnit_Type.h
        library/tc/TempControlMixedSeL4CAmKES/TempUnit/tc_TempControlMixedSeL4CAmKES_TempUnit_Type.h
        library/tc/TempControlMixedSeL4CAmKES/TempUnit/tc_TempControlMixedSeL4CAmKES_TempUnit_Type.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_TempUnit_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempUnit_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_TempUnit_Payload.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_Temperature.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_Temperature.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_Temperature.c
        library/tc/TempControlMixedSeL4CAmKES/type-tc_TempControlMixedSeL4CAmKES_Temperature_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_Temperature_Payload.h
        library/tc/TempControlMixedSeL4CAmKES/tc_TempControlMixedSeL4CAmKES_Temperature_Payload.c
        library/tc/TempSensor_tsp_tst/type-tc_TempSensor_tsp_tst_tst_seL4App.h
        library/tc/TempSensor_tsp_tst/tc_TempSensor_tsp_tst_tst_seL4App.h
        library/tc/TempSensor_tsp_tst/tc_TempSensor_tsp_tst_tst_seL4App.c
        library/tc/type-tc_TranspilerToucher.h
        library/tc/tc_TranspilerToucher.h
        library/tc/tc_TranspilerToucher.c
        ext/ext.c
        ext/ext.h
        ext/TempSensor_tsp_tst_adapter.h
        ext/TempSensor_tsp_tst_adapter.c)

target_include_directories(TempSensor_tsp_tst
        PUBLIC PUBLIC app-tst_seL4App
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/art/PortMode
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC library/org/sireum/Random
        PUBLIC PUBLIC library/org/sireum/Random/Impl
        PUBLIC PUBLIC library/org/sireum/conversions
        PUBLIC PUBLIC library/org/sireum/extension
        PUBLIC PUBLIC library/tc
        PUBLIC PUBLIC library/tc/Base_Types
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES/FanAck
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES/FanCmd
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES/TempSensor_tsp_tst_Bridge
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES/TempUnit
        PUBLIC PUBLIC library/tc/TempSensor_tsp_tst
        PUBLIC PUBLIC ext)


add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(TempSensor_tsp_tst
                        muslc)
endif()