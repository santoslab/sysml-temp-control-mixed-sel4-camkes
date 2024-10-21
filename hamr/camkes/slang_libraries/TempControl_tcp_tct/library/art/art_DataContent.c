#include <all.h>

// art.DataContent

B art_DataContent__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Ttc_TempControlPeriodic_FanCmd_Payload: return T;
    case Ttc_Base_Types_Boolean_Payload: return T;
    case Ttc_Base_Types_Integer_Payload: return T;
    case Ttc_Base_Types_Integer_8_Payload: return T;
    case Ttc_Base_Types_Integer_16_Payload: return T;
    case Ttc_Base_Types_Integer_32_Payload: return T;
    case Ttc_Base_Types_Integer_64_Payload: return T;
    case Ttc_Base_Types_Unsigned_8_Payload: return T;
    case Ttc_Base_Types_Unsigned_16_Payload: return T;
    case Ttc_Base_Types_Unsigned_32_Payload: return T;
    case Ttc_Base_Types_Unsigned_64_Payload: return T;
    case Ttc_Base_Types_Float_Payload: return T;
    case Ttc_Base_Types_Float_32_Payload: return T;
    case Ttc_Base_Types_Float_64_Payload: return T;
    case Ttc_Base_Types_Character_Payload: return T;
    case Ttc_Base_Types_String_Payload: return T;
    case Ttc_TempControlPeriodic_Temperature_Payload: return T;
    case Ttc_Isolette_Data_Model_Temp_Payload: return T;
    case Ttc_Isolette_Data_Model_Status_Payload: return T;
    case Ttc_Isolette_Data_Model_Failure_Flag_Payload: return T;
    case Ttc_TempControlPeriodic_FanAck_Payload: return T;
    case Ttc_TempControlPeriodic_SetPoint_Payload: return T;
    case Ttc_Isolette_Data_Model_ValueStatus_Payload: return T;
    case Ttc_Isolette_Data_Model_On_Off_Payload: return T;
    case Ttc_TempControlMixed_TempUnit_Payload: return T;
    case Tart_Empty: return T;
    case Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload: return T;
    case Ttc_Isolette_Environment_Heat_Payload: return T;
    case Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload: return T;
    case Ttc_Isolette_Data_Model_PhysicalTemp_Payload: return T;
    case Ttc_Isolette_Data_Model_Monitor_Mode_Payload: return T;
    case Ttc_Isolette_Environment_Air_Interaction_Payload: return T;
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload: return T;
    case Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload: return T;
    case Ttc_TempControlMixed_Temperature_Payload: return T;
    case Ttc_Isolette_Data_Model_Regulator_Mode_Payload: return T;
    case Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload: return T;
    case Ttc_TempControlPeriodic_TempUnit_Payload: return T;
    case Ttc_TempControlMixed_FanCmd_Payload: return T;
    case Ttc_Isolette_Environment_Interface_Interaction_Payload: return T;
    case Ttc_TempControlMixed_SetPoint_Payload: return T;
    case Ttc_Isolette_Data_Model_TempWstatus_Payload: return T;
    case Ttc_TempControlMixed_FanAck_Payload: return T;
    default: return F;
  }
}

art_DataContent art_DataContent__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Ttc_TempControlPeriodic_FanCmd_Payload: break;
    case Ttc_Base_Types_Boolean_Payload: break;
    case Ttc_Base_Types_Integer_Payload: break;
    case Ttc_Base_Types_Integer_8_Payload: break;
    case Ttc_Base_Types_Integer_16_Payload: break;
    case Ttc_Base_Types_Integer_32_Payload: break;
    case Ttc_Base_Types_Integer_64_Payload: break;
    case Ttc_Base_Types_Unsigned_8_Payload: break;
    case Ttc_Base_Types_Unsigned_16_Payload: break;
    case Ttc_Base_Types_Unsigned_32_Payload: break;
    case Ttc_Base_Types_Unsigned_64_Payload: break;
    case Ttc_Base_Types_Float_Payload: break;
    case Ttc_Base_Types_Float_32_Payload: break;
    case Ttc_Base_Types_Float_64_Payload: break;
    case Ttc_Base_Types_Character_Payload: break;
    case Ttc_Base_Types_String_Payload: break;
    case Ttc_TempControlPeriodic_Temperature_Payload: break;
    case Ttc_Isolette_Data_Model_Temp_Payload: break;
    case Ttc_Isolette_Data_Model_Status_Payload: break;
    case Ttc_Isolette_Data_Model_Failure_Flag_Payload: break;
    case Ttc_TempControlPeriodic_FanAck_Payload: break;
    case Ttc_TempControlPeriodic_SetPoint_Payload: break;
    case Ttc_Isolette_Data_Model_ValueStatus_Payload: break;
    case Ttc_Isolette_Data_Model_On_Off_Payload: break;
    case Ttc_TempControlMixed_TempUnit_Payload: break;
    case Tart_Empty: break;
    case Ttc_TempControlMixedSeL4CAmKES_TempUnit_Payload: break;
    case Ttc_Isolette_Environment_Heat_Payload: break;
    case Ttc_TempControlMixedSeL4CAmKES_FanCmd_Payload: break;
    case Ttc_Isolette_Data_Model_PhysicalTemp_Payload: break;
    case Ttc_Isolette_Data_Model_Monitor_Mode_Payload: break;
    case Ttc_Isolette_Environment_Air_Interaction_Payload: break;
    case Ttc_TempControlMixedSeL4CAmKES_SetPoint_Payload: break;
    case Ttc_TempControlMixedSeL4CAmKES_Temperature_Payload: break;
    case Ttc_TempControlMixed_Temperature_Payload: break;
    case Ttc_Isolette_Data_Model_Regulator_Mode_Payload: break;
    case Ttc_TempControlMixedSeL4CAmKES_FanAck_Payload: break;
    case Ttc_TempControlPeriodic_TempUnit_Payload: break;
    case Ttc_TempControlMixed_FanCmd_Payload: break;
    case Ttc_Isolette_Environment_Interface_Interaction_Payload: break;
    case Ttc_TempControlMixed_SetPoint_Payload: break;
    case Ttc_Isolette_Data_Model_TempWstatus_Payload: break;
    case Ttc_TempControlMixed_FanAck_Payload: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DataContent.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_DataContent) this;
}

void art_DataContent_string_(STACK_FRAME String result, art_DataContent this);