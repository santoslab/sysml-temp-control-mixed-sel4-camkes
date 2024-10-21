#include <all.h>

// tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api

B tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__eq(tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (art_Art_PortId__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (art_Art_PortId__ne(this->fanAck_Id, other->fanAck_Id)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__equiv(tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api other) {
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (art_Art_PortId__inequiv(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (art_Art_PortId__inequiv(this->fanAck_Id, other->fanAck_Id)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__ne(tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api other);
B tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__inequiv(tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api other);

void tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api", "string", 0);
  String_string_(SF result, string("Fan_Operational_Api("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->fanCmd_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->fanAck_Id);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_cprint(tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("Fan_Operational_Api("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->fanCmd_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->fanAck_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, art_Art_BridgeId id, art_Art_PortId fanCmd_Id, art_Art_PortId fanAck_Id) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api", "apply", 0);
  this->id = id;
  this->fanCmd_Id = fanCmd_Id;
  this->fanAck_Id = fanAck_Id;
}

inline B tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_get_fanCmd_extract_64_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, tc_TempControlMixedSeL4CAmKES_FanCmd_Type *_v_64_59) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!tc_TempControlMixedSeL4CAmKES_FanCmd_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_64_59 = tc_TempControlMixedSeL4CAmKES_FanCmd_Payload_value_(tc_TempControlMixedSeL4CAmKES_FanCmd_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_get_fanCmd_extract_65_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, art_DataContent *_v_65_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_65_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_get_fanCmd_extract_68_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this) {
  return T;
}

void tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_get_fanCmd_(STACK_FRAME Option_5071ED result, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Operational_Api", "get_fanCmd", 0);

  sfUpdateLoc(63);
  Option_5071ED value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_fanCmd_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_63_66 = F;
  if (!match_63_66) {
    tc_TempControlMixedSeL4CAmKES_FanCmd_Type v_64_59;
    match_63_66 = tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_get_fanCmd_extract_64_12_8E9F45(SF t_0, this, &v_64_59);
    if (match_63_66) {
      DeclNewSome_2EFA7D(t_2);
      Some_2EFA7D_apply(SF &t_2, v_64_59);
      value = (Option_5071ED) (&t_2);
    }
  }
  if (!match_63_66) {
    art_DataContent v_65_17;
    match_63_66 = tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_get_fanCmd_extract_65_12_8E9F45(SF t_0, this, &v_65_17);
    if (match_63_66) {

      sfUpdateLoc(66);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port fanCmd.  Expecting \'TempControlMixedSeL4CAmKES.FanCmd_Payload\' but received "));
        art_DataContent_string_(SF (String) &t_3, v_65_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_ACDB63(t_4);
      None_ACDB63_apply(SF &t_4);
      value = (Option_5071ED) (&t_4);
    }
  }
  if (!match_63_66) {
    match_63_66 = tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_get_fanCmd_extract_68_12_8E9F45(SF t_0, this);
    if (match_63_66) {
      DeclNewNone_ACDB63(t_5);
      None_ACDB63_apply(SF &t_5);
      value = (Option_5071ED) (&t_5);
    }
  }
  sfAssert(match_63_66, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_5071ED));
  return;
}