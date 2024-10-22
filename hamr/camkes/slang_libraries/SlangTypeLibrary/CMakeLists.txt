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

project(SlangTypeLibrary)

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


add_library(SlangTypeLibrary STATIC
        runtime/misc.c
        runtime/stackframe.h
        runtime/misc.h
        runtime/type.c
        runtime/type.h
        runtime/lib.h
        runtime/stackframe.c
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_037804.h
        library/org/sireum/org_sireum_None_037804.h
        library/org/sireum/org_sireum_None_037804.c
        library/org/sireum/type-org_sireum_None_121724.h
        library/org/sireum/org_sireum_None_121724.h
        library/org/sireum/org_sireum_None_121724.c
        library/org/sireum/type-org_sireum_None_1AEC2C.h
        library/org/sireum/org_sireum_None_1AEC2C.h
        library/org/sireum/org_sireum_None_1AEC2C.c
        library/org/sireum/type-org_sireum_None_3C78E7.h
        library/org/sireum/org_sireum_None_3C78E7.h
        library/org/sireum/org_sireum_None_3C78E7.c
        library/org/sireum/type-org_sireum_None_4E7E94.h
        library/org/sireum/org_sireum_None_4E7E94.h
        library/org/sireum/org_sireum_None_4E7E94.c
        library/org/sireum/type-org_sireum_None_86BF24.h
        library/org/sireum/org_sireum_None_86BF24.h
        library/org/sireum/org_sireum_None_86BF24.c
        library/org/sireum/type-org_sireum_None_A23E58.h
        library/org/sireum/org_sireum_None_A23E58.h
        library/org/sireum/org_sireum_None_A23E58.c
        library/org/sireum/type-org_sireum_None_A45A41.h
        library/org/sireum/org_sireum_None_A45A41.h
        library/org/sireum/org_sireum_None_A45A41.c
        library/org/sireum/type-org_sireum_None_A70CEE.h
        library/org/sireum/org_sireum_None_A70CEE.h
        library/org/sireum/org_sireum_None_A70CEE.c
        library/org/sireum/type-org_sireum_None_ACDB63.h
        library/org/sireum/org_sireum_None_ACDB63.h
        library/org/sireum/org_sireum_None_ACDB63.c
        library/org/sireum/type-org_sireum_None_B4A4FA.h
        library/org/sireum/org_sireum_None_B4A4FA.h
        library/org/sireum/org_sireum_None_B4A4FA.c
        library/org/sireum/type-org_sireum_None_BE24EA.h
        library/org/sireum/org_sireum_None_BE24EA.h
        library/org/sireum/org_sireum_None_BE24EA.c
        library/org/sireum/type-org_sireum_None_BE2C3F.h
        library/org/sireum/org_sireum_None_BE2C3F.h
        library/org/sireum/org_sireum_None_BE2C3F.c
        library/org/sireum/type-org_sireum_None_D4B208.h
        library/org/sireum/org_sireum_None_D4B208.h
        library/org/sireum/org_sireum_None_D4B208.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_103926.h
        library/org/sireum/org_sireum_Option_103926.h
        library/org/sireum/org_sireum_Option_103926.c
        library/org/sireum/type-org_sireum_Option_121E48.h
        library/org/sireum/org_sireum_Option_121E48.h
        library/org/sireum/org_sireum_Option_121E48.c
        library/org/sireum/type-org_sireum_Option_36021E.h
        library/org/sireum/org_sireum_Option_36021E.h
        library/org/sireum/org_sireum_Option_36021E.c
        library/org/sireum/type-org_sireum_Option_38D338.h
        library/org/sireum/org_sireum_Option_38D338.h
        library/org/sireum/org_sireum_Option_38D338.c
        library/org/sireum/type-org_sireum_Option_5071ED.h
        library/org/sireum/org_sireum_Option_5071ED.h
        library/org/sireum/org_sireum_Option_5071ED.c
        library/org/sireum/type-org_sireum_Option_570179.h
        library/org/sireum/org_sireum_Option_570179.h
        library/org/sireum/org_sireum_Option_570179.c
        library/org/sireum/type-org_sireum_Option_5F90D6.h
        library/org/sireum/org_sireum_Option_5F90D6.h
        library/org/sireum/org_sireum_Option_5F90D6.c
        library/org/sireum/type-org_sireum_Option_62C8EC.h
        library/org/sireum/org_sireum_Option_62C8EC.h
        library/org/sireum/org_sireum_Option_62C8EC.c
        library/org/sireum/type-org_sireum_Option_8499F5.h
        library/org/sireum/org_sireum_Option_8499F5.h
        library/org/sireum/org_sireum_Option_8499F5.c
        library/org/sireum/type-org_sireum_Option_978FB8.h
        library/org/sireum/org_sireum_Option_978FB8.h
        library/org/sireum/org_sireum_Option_978FB8.c
        library/org/sireum/type-org_sireum_Option_A2275D.h
        library/org/sireum/org_sireum_Option_A2275D.h
        library/org/sireum/org_sireum_Option_A2275D.c
        library/org/sireum/type-org_sireum_Option_AAF24B.h
        library/org/sireum/org_sireum_Option_AAF24B.h
        library/org/sireum/org_sireum_Option_AAF24B.c
        library/org/sireum/type-org_sireum_Option_C6954F.h
        library/org/sireum/org_sireum_Option_C6954F.h
        library/org/sireum/org_sireum_Option_C6954F.c
        library/org/sireum/type-org_sireum_Option_C9A4D6.h
        library/org/sireum/org_sireum_Option_C9A4D6.h
        library/org/sireum/org_sireum_Option_C9A4D6.c
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
        library/org/sireum/type-org_sireum_Some_0E3FBA.h
        library/org/sireum/org_sireum_Some_0E3FBA.h
        library/org/sireum/org_sireum_Some_0E3FBA.c
        library/org/sireum/type-org_sireum_Some_140719.h
        library/org/sireum/org_sireum_Some_140719.h
        library/org/sireum/org_sireum_Some_140719.c
        library/org/sireum/type-org_sireum_Some_21C1E5.h
        library/org/sireum/org_sireum_Some_21C1E5.h
        library/org/sireum/org_sireum_Some_21C1E5.c
        library/org/sireum/type-org_sireum_Some_270A8B.h
        library/org/sireum/org_sireum_Some_270A8B.h
        library/org/sireum/org_sireum_Some_270A8B.c
        library/org/sireum/type-org_sireum_Some_2EFA7D.h
        library/org/sireum/org_sireum_Some_2EFA7D.h
        library/org/sireum/org_sireum_Some_2EFA7D.c
        library/org/sireum/type-org_sireum_Some_455777.h
        library/org/sireum/org_sireum_Some_455777.h
        library/org/sireum/org_sireum_Some_455777.c
        library/org/sireum/type-org_sireum_Some_56FCC9.h
        library/org/sireum/org_sireum_Some_56FCC9.h
        library/org/sireum/org_sireum_Some_56FCC9.c
        library/org/sireum/type-org_sireum_Some_776961.h
        library/org/sireum/org_sireum_Some_776961.h
        library/org/sireum/org_sireum_Some_776961.c
        library/org/sireum/type-org_sireum_Some_C0DBA9.h
        library/org/sireum/org_sireum_Some_C0DBA9.h
        library/org/sireum/org_sireum_Some_C0DBA9.c
        library/org/sireum/type-org_sireum_Some_C3173C.h
        library/org/sireum/org_sireum_Some_C3173C.h
        library/org/sireum/org_sireum_Some_C3173C.c
        library/org/sireum/type-org_sireum_Some_C790DA.h
        library/org/sireum/org_sireum_Some_C790DA.h
        library/org/sireum/org_sireum_Some_C790DA.c
        library/org/sireum/type-org_sireum_Some_D85467.h
        library/org/sireum/org_sireum_Some_D85467.h
        library/org/sireum/org_sireum_Some_D85467.c
        library/org/sireum/type-org_sireum_Some_F1808D.h
        library/org/sireum/org_sireum_Some_F1808D.h
        library/org/sireum/org_sireum_Some_F1808D.c
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
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_Failure_Flag.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Failure_Flag.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Failure_Flag.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_Failure_Flag_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Failure_Flag_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Failure_Flag_Payload.c
        library/tc/Isolette_Data_Model/Monitor_Mode/type-tc_Isolette_Data_Model_Monitor_Mode_Type.h
        library/tc/Isolette_Data_Model/Monitor_Mode/tc_Isolette_Data_Model_Monitor_Mode_Type.h
        library/tc/Isolette_Data_Model/Monitor_Mode/tc_Isolette_Data_Model_Monitor_Mode_Type.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_Monitor_Mode_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Monitor_Mode_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Monitor_Mode_Payload.c
        library/tc/Isolette_Data_Model/On_Off/type-tc_Isolette_Data_Model_On_Off_Type.h
        library/tc/Isolette_Data_Model/On_Off/tc_Isolette_Data_Model_On_Off_Type.h
        library/tc/Isolette_Data_Model/On_Off/tc_Isolette_Data_Model_On_Off_Type.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_On_Off_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_On_Off_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_On_Off_Payload.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_PhysicalTemp.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_PhysicalTemp.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_PhysicalTemp.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_PhysicalTemp_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_PhysicalTemp_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_PhysicalTemp_Payload.c
        library/tc/Isolette_Data_Model/Regulator_Mode/type-tc_Isolette_Data_Model_Regulator_Mode_Type.h
        library/tc/Isolette_Data_Model/Regulator_Mode/tc_Isolette_Data_Model_Regulator_Mode_Type.h
        library/tc/Isolette_Data_Model/Regulator_Mode/tc_Isolette_Data_Model_Regulator_Mode_Type.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_Regulator_Mode_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Regulator_Mode_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Regulator_Mode_Payload.c
        library/tc/Isolette_Data_Model/Status/type-tc_Isolette_Data_Model_Status_Type.h
        library/tc/Isolette_Data_Model/Status/tc_Isolette_Data_Model_Status_Type.h
        library/tc/Isolette_Data_Model/Status/tc_Isolette_Data_Model_Status_Type.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_Status_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Status_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Status_Payload.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_Temp.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Temp.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Temp.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_TempWstatus.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_TempWstatus.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_TempWstatus.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_TempWstatus_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_TempWstatus_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_TempWstatus_Payload.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_Temp_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Temp_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_Temp_Payload.c
        library/tc/Isolette_Data_Model/ValueStatus/type-tc_Isolette_Data_Model_ValueStatus_Type.h
        library/tc/Isolette_Data_Model/ValueStatus/tc_Isolette_Data_Model_ValueStatus_Type.h
        library/tc/Isolette_Data_Model/ValueStatus/tc_Isolette_Data_Model_ValueStatus_Type.c
        library/tc/Isolette_Data_Model/type-tc_Isolette_Data_Model_ValueStatus_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_ValueStatus_Payload.h
        library/tc/Isolette_Data_Model/tc_Isolette_Data_Model_ValueStatus_Payload.c
        library/tc/Isolette_Environment/type-tc_Isolette_Environment_Air_Interaction.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Air_Interaction.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Air_Interaction.c
        library/tc/Isolette_Environment/type-tc_Isolette_Environment_Air_Interaction_Payload.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Air_Interaction_Payload.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Air_Interaction_Payload.c
        library/tc/Isolette_Environment/type-tc_Isolette_Environment_Heat.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Heat.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Heat.c
        library/tc/Isolette_Environment/type-tc_Isolette_Environment_Heat_Payload.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Heat_Payload.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Heat_Payload.c
        library/tc/Isolette_Environment/type-tc_Isolette_Environment_Interface_Interaction.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Interface_Interaction.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Interface_Interaction.c
        library/tc/Isolette_Environment/type-tc_Isolette_Environment_Interface_Interaction_Payload.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Interface_Interaction_Payload.h
        library/tc/Isolette_Environment/tc_Isolette_Environment_Interface_Interaction_Payload.c
        library/tc/SlangTypeLibrary/type-tc_SlangTypeLibrary_SlangTypeLibrary.h
        library/tc/SlangTypeLibrary/tc_SlangTypeLibrary_SlangTypeLibrary.h
        library/tc/SlangTypeLibrary/tc_SlangTypeLibrary_SlangTypeLibrary.c
        library/tc/TempControlMixed/FanAck/type-tc_TempControlMixed_FanAck_Type.h
        library/tc/TempControlMixed/FanAck/tc_TempControlMixed_FanAck_Type.h
        library/tc/TempControlMixed/FanAck/tc_TempControlMixed_FanAck_Type.c
        library/tc/TempControlMixed/type-tc_TempControlMixed_FanAck_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_FanAck_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_FanAck_Payload.c
        library/tc/TempControlMixed/FanCmd/type-tc_TempControlMixed_FanCmd_Type.h
        library/tc/TempControlMixed/FanCmd/tc_TempControlMixed_FanCmd_Type.h
        library/tc/TempControlMixed/FanCmd/tc_TempControlMixed_FanCmd_Type.c
        library/tc/TempControlMixed/type-tc_TempControlMixed_FanCmd_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_FanCmd_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_FanCmd_Payload.c
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
        library/tc/TempControlMixed/type-tc_TempControlMixed_SetPoint.h
        library/tc/TempControlMixed/tc_TempControlMixed_SetPoint.h
        library/tc/TempControlMixed/tc_TempControlMixed_SetPoint.c
        library/tc/TempControlMixed/type-tc_TempControlMixed_SetPoint_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_SetPoint_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_SetPoint_Payload.c
        library/tc/TempControlMixed/TempUnit/type-tc_TempControlMixed_TempUnit_Type.h
        library/tc/TempControlMixed/TempUnit/tc_TempControlMixed_TempUnit_Type.h
        library/tc/TempControlMixed/TempUnit/tc_TempControlMixed_TempUnit_Type.c
        library/tc/TempControlMixed/type-tc_TempControlMixed_TempUnit_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_TempUnit_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_TempUnit_Payload.c
        library/tc/TempControlMixed/type-tc_TempControlMixed_Temperature.h
        library/tc/TempControlMixed/tc_TempControlMixed_Temperature.h
        library/tc/TempControlMixed/tc_TempControlMixed_Temperature.c
        library/tc/TempControlMixed/type-tc_TempControlMixed_Temperature_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_Temperature_Payload.h
        library/tc/TempControlMixed/tc_TempControlMixed_Temperature_Payload.c
        library/tc/TempControlPeriodic/FanAck/type-tc_TempControlPeriodic_FanAck_Type.h
        library/tc/TempControlPeriodic/FanAck/tc_TempControlPeriodic_FanAck_Type.h
        library/tc/TempControlPeriodic/FanAck/tc_TempControlPeriodic_FanAck_Type.c
        library/tc/TempControlPeriodic/type-tc_TempControlPeriodic_FanAck_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_FanAck_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_FanAck_Payload.c
        library/tc/TempControlPeriodic/FanCmd/type-tc_TempControlPeriodic_FanCmd_Type.h
        library/tc/TempControlPeriodic/FanCmd/tc_TempControlPeriodic_FanCmd_Type.h
        library/tc/TempControlPeriodic/FanCmd/tc_TempControlPeriodic_FanCmd_Type.c
        library/tc/TempControlPeriodic/type-tc_TempControlPeriodic_FanCmd_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_FanCmd_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_FanCmd_Payload.c
        library/tc/TempControlPeriodic/type-tc_TempControlPeriodic_SetPoint.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_SetPoint.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_SetPoint.c
        library/tc/TempControlPeriodic/type-tc_TempControlPeriodic_SetPoint_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_SetPoint_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_SetPoint_Payload.c
        library/tc/TempControlPeriodic/TempUnit/type-tc_TempControlPeriodic_TempUnit_Type.h
        library/tc/TempControlPeriodic/TempUnit/tc_TempControlPeriodic_TempUnit_Type.h
        library/tc/TempControlPeriodic/TempUnit/tc_TempControlPeriodic_TempUnit_Type.c
        library/tc/TempControlPeriodic/type-tc_TempControlPeriodic_TempUnit_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_TempUnit_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_TempUnit_Payload.c
        library/tc/TempControlPeriodic/type-tc_TempControlPeriodic_Temperature.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_Temperature.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_Temperature.c
        library/tc/TempControlPeriodic/type-tc_TempControlPeriodic_Temperature_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_Temperature_Payload.h
        library/tc/TempControlPeriodic/tc_TempControlPeriodic_Temperature_Payload.c)

target_include_directories(SlangTypeLibrary
        PUBLIC PUBLIC app-SlangTypeLibrary
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC library/tc
        PUBLIC PUBLIC library/tc/Base_Types
        PUBLIC PUBLIC library/tc/Isolette_Data_Model
        PUBLIC PUBLIC library/tc/Isolette_Data_Model/Monitor_Mode
        PUBLIC PUBLIC library/tc/Isolette_Data_Model/On_Off
        PUBLIC PUBLIC library/tc/Isolette_Data_Model/Regulator_Mode
        PUBLIC PUBLIC library/tc/Isolette_Data_Model/Status
        PUBLIC PUBLIC library/tc/Isolette_Data_Model/ValueStatus
        PUBLIC PUBLIC library/tc/Isolette_Environment
        PUBLIC PUBLIC library/tc/SlangTypeLibrary
        PUBLIC PUBLIC library/tc/TempControlMixed/FanAck
        PUBLIC PUBLIC library/tc/TempControlMixed
        PUBLIC PUBLIC library/tc/TempControlMixed/FanCmd
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES/FanAck
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES/FanCmd
        PUBLIC PUBLIC library/tc/TempControlMixedSeL4CAmKES/TempUnit
        PUBLIC PUBLIC library/tc/TempControlMixed/TempUnit
        PUBLIC PUBLIC library/tc/TempControlPeriodic/FanAck
        PUBLIC PUBLIC library/tc/TempControlPeriodic
        PUBLIC PUBLIC library/tc/TempControlPeriodic/FanCmd
        PUBLIC PUBLIC library/tc/TempControlPeriodic/TempUnit)


add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SlangTypeLibrary
                        muslc)
endif()