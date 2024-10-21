#include <all.h>

// tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api

B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__eq(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (art_Art_PortId__ne(this->tempChanged_Id, other->tempChanged_Id)) return F;
  if (art_Art_PortId__ne(this->fanAck_Id, other->fanAck_Id)) return F;
  if (art_Art_PortId__ne(this->setPoint_Id, other->setPoint_Id)) return F;
  if (art_Art_PortId__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__equiv(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (art_Art_PortId__inequiv(this->tempChanged_Id, other->tempChanged_Id)) return F;
  if (art_Art_PortId__inequiv(this->fanAck_Id, other->fanAck_Id)) return F;
  if (art_Art_PortId__inequiv(this->setPoint_Id, other->setPoint_Id)) return F;
  if (art_Art_PortId__inequiv(this->fanCmd_Id, other->fanCmd_Id)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__ne(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api other);
B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__inequiv(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api other);

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api", "string", 0);
  String_string_(SF result, string("TempControl_Operational_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->currentTemp_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->tempChanged_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->fanAck_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->setPoint_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->fanCmd_Id);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_cprint(tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("TempControl_Operational_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->tempChanged_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->fanAck_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->setPoint_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->fanCmd_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, art_Art_BridgeId id, art_Art_PortId currentTemp_Id, art_Art_PortId tempChanged_Id, art_Art_PortId fanAck_Id, art_Art_PortId setPoint_Id, art_Art_PortId fanCmd_Id) {
  DeclNewStackFrame(caller, "TempControl_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api", "apply", 0);
  this->id = id;
  this->currentTemp_Id = currentTemp_Id;
  this->tempChanged_Id = tempChanged_Id;
  this->fanAck_Id = fanAck_Id;
  this->setPoint_Id = setPoint_Id;
  this->fanCmd_Id = fanCmd_Id;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_extract_86_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_Temperature *_v_86_64) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!tc_TempControlMixedSeL4CAmKES_Temperature_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_86_64 = (tc_TempControlMixedSeL4CAmKES_Temperature) tc_TempControlMixedSeL4CAmKES_Temperature_Payload_value_(tc_TempControlMixedSeL4CAmKES_Temperature_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_extract_87_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, art_DataContent *_v_87_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_87_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_extract_90_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  return T;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_(STACK_FRAME Option_DEC797 result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api", "get_currentTemp", 0);

  sfUpdateLoc(85);
  Option_DEC797 value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_currentTemp_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_85_66 = F;
  if (!match_85_66) {
    tc_TempControlMixedSeL4CAmKES_Temperature v_86_64;
    match_85_66 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_extract_86_12_8E9F45(SF t_0, this, &v_86_64);
    if (match_85_66) {
      DeclNewSome_76E303(t_2);
      Some_76E303_apply(SF &t_2, (tc_TempControlMixedSeL4CAmKES_Temperature) v_86_64);
      value = (Option_DEC797) (&t_2);
    }
  }
  if (!match_85_66) {
    art_DataContent v_87_17;
    match_85_66 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_extract_87_12_8E9F45(SF t_0, this, &v_87_17);
    if (match_85_66) {

      sfUpdateLoc(88);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port currentTemp.  Expecting \'TempControlMixedSeL4CAmKES.Temperature_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_87_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_40E880(t_4);
      None_40E880_apply(SF &t_4);
      value = (Option_DEC797) (&t_4);
    }
  }
  if (!match_85_66) {
    match_85_66 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_extract_90_12_8E9F45(SF t_0, this);
    if (match_85_66) {
      DeclNewNone_40E880(t_5);
      None_40E880_apply(SF &t_5);
      value = (Option_DEC797) (&t_5);
    }
  }
  sfAssert(match_85_66, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_DEC797));
  return;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_extract_105_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!art_Empty__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_extract_106_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, art_DataContent *_v_106_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_106_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_extract_109_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  return T;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_(STACK_FRAME Option_C622DB result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api", "get_tempChanged", 0);

  sfUpdateLoc(104);
  Option_C622DB value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_tempChanged_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_104_37 = F;
  if (!match_104_37) {
    match_104_37 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_extract_105_12_8E9F45(SF t_0, this);
    if (match_104_37) {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      DeclNewSome_4782C6(t_2);
      Some_4782C6_apply(SF &t_2, (art_Empty) (&t_3));
      value = (Option_C622DB) (&t_2);
    }
  }
  if (!match_104_37) {
    art_DataContent v_106_17;
    match_104_37 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_extract_106_12_8E9F45(SF t_0, this, &v_106_17);
    if (match_104_37) {

      sfUpdateLoc(107);
      {
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected payload on port tempChanged.  Expecting \'Empty\' but received "));
        art_DataContent_string_(SF (String) &t_4, v_106_17);
        String_string_(SF (String) &t_4, string(""));
        art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_id_(this), (String) ((String) &t_4));
      }
      DeclNewNone_ED72E1(t_5);
      None_ED72E1_apply(SF &t_5);
      value = (Option_C622DB) (&t_5);
    }
  }
  if (!match_104_37) {
    match_104_37 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_extract_109_12_8E9F45(SF t_0, this);
    if (match_104_37) {
      DeclNewNone_ED72E1(t_6);
      None_ED72E1_apply(SF &t_6);
      value = (Option_C622DB) (&t_6);
    }
  }
  sfAssert(match_104_37, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_C622DB));
  return;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_extract_124_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_FanAck_Type *_v_124_59) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!tc_TempControlMixedSeL4CAmKES_FanAck_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_124_59 = tc_TempControlMixedSeL4CAmKES_FanAck_Payload_value_(tc_TempControlMixedSeL4CAmKES_FanAck_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_extract_125_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, art_DataContent *_v_125_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_125_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_extract_128_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  return T;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_(STACK_FRAME Option_36021E result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api", "get_fanAck", 0);

  sfUpdateLoc(123);
  Option_36021E value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_fanAck_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_123_66 = F;
  if (!match_123_66) {
    tc_TempControlMixedSeL4CAmKES_FanAck_Type v_124_59;
    match_123_66 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_extract_124_12_8E9F45(SF t_0, this, &v_124_59);
    if (match_123_66) {
      DeclNewSome_D85467(t_2);
      Some_D85467_apply(SF &t_2, v_124_59);
      value = (Option_36021E) (&t_2);
    }
  }
  if (!match_123_66) {
    art_DataContent v_125_17;
    match_123_66 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_extract_125_12_8E9F45(SF t_0, this, &v_125_17);
    if (match_123_66) {

      sfUpdateLoc(126);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port fanAck.  Expecting \'TempControlMixedSeL4CAmKES.FanAck_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_125_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_A70CEE(t_4);
      None_A70CEE_apply(SF &t_4);
      value = (Option_36021E) (&t_4);
    }
  }
  if (!match_123_66) {
    match_123_66 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_extract_128_12_8E9F45(SF t_0, this);
    if (match_123_66) {
      DeclNewNone_A70CEE(t_5);
      None_A70CEE_apply(SF &t_5);
      value = (Option_36021E) (&t_5);
    }
  }
  sfAssert(match_123_66, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_36021E));
  return;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_extract_143_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, tc_TempControlMixedSeL4CAmKES_SetPoint *_v_143_61) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_143_61 = (tc_TempControlMixedSeL4CAmKES_SetPoint) tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_value_(tc_TempControlMixedSeL4CAmKES_SetPoint_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_extract_144_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this, art_DataContent *_v_144_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_144_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_extract_147_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  return T;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_(STACK_FRAME Option_3BF471 result, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api this) {
  DeclNewStackFrame(caller, "TempControl_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_Operational_Api", "get_setPoint", 0);

  sfUpdateLoc(142);
  Option_3BF471 value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_setPoint_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_142_63 = F;
  if (!match_142_63) {
    tc_TempControlMixedSeL4CAmKES_SetPoint v_143_61;
    match_142_63 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_extract_143_12_8E9F45(SF t_0, this, &v_143_61);
    if (match_142_63) {
      DeclNewSome_B391E9(t_2);
      Some_B391E9_apply(SF &t_2, (tc_TempControlMixedSeL4CAmKES_SetPoint) v_143_61);
      value = (Option_3BF471) (&t_2);
    }
  }
  if (!match_142_63) {
    art_DataContent v_144_17;
    match_142_63 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_extract_144_12_8E9F45(SF t_0, this, &v_144_17);
    if (match_142_63) {

      sfUpdateLoc(145);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port setPoint.  Expecting \'TempControlMixedSeL4CAmKES.SetPoint_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_144_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_30CA2A(t_4);
      None_30CA2A_apply(SF &t_4);
      value = (Option_3BF471) (&t_4);
    }
  }
  if (!match_142_63) {
    match_142_63 = tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_extract_147_12_8E9F45(SF t_0, this);
    if (match_142_63) {
      DeclNewNone_30CA2A(t_5);
      None_30CA2A_apply(SF &t_5);
      value = (Option_3BF471) (&t_5);
    }
  }
  sfAssert(match_142_63, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_3BF471));
  return;
}