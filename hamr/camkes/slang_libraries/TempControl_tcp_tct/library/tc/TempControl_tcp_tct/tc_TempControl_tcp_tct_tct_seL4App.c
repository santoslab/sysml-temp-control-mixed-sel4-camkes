#include <all.h>

B tc_TempControl_tcp_tct_tct_seL4App_initialized_ = F;

struct tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge _tc_TempControl_tcp_tct_tct_seL4App_tctBridge;
union art_Bridge_EntryPoints _tc_TempControl_tcp_tct_tct_seL4App_entryPoints;
union Option_8E9F45 _tc_TempControl_tcp_tct_tct_seL4App_noData;
art_Art_PortId _tc_TempControl_tcp_tct_tct_seL4App_currentTemp_id;
union Option_8E9F45 _tc_TempControl_tcp_tct_tct_seL4App_currentTemp_port;
art_Art_PortId _tc_TempControl_tcp_tct_tct_seL4App_tempChanged_id;
union Option_8E9F45 _tc_TempControl_tcp_tct_tct_seL4App_tempChanged_port;
art_Art_PortId _tc_TempControl_tcp_tct_tct_seL4App_fanAck_id;
union Option_8E9F45 _tc_TempControl_tcp_tct_tct_seL4App_fanAck_port;
art_Art_PortId _tc_TempControl_tcp_tct_tct_seL4App_setPoint_id;
union Option_8E9F45 _tc_TempControl_tcp_tct_tct_seL4App_setPoint_port;
art_Art_PortId _tc_TempControl_tcp_tct_tct_seL4App_fanCmd_id;
union Option_8E9F45 _tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port;

void tc_TempControl_tcp_tct_tct_seL4App_init(STACK_FRAME_ONLY) {
  if (tc_TempControl_tcp_tct_tct_seL4App_initialized_) return;
  tc_TempControl_tcp_tct_tct_seL4App_initialized_ = T;
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "<init>", 0);
  tc_TempControl_tcp_tct_tct_seL4App_init_tctBridge(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_entryPoints(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_noData(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_currentTemp_id(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_currentTemp_port(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_tempChanged_id(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_tempChanged_port(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_fanAck_id(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_fanAck_port(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_setPoint_id(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_setPoint_port(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_fanCmd_id(SF_LAST);
  tc_TempControl_tcp_tct_tct_seL4App_init_fanCmd_port(SF_LAST);
}

tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge tc_TempControl_tcp_tct_tct_seL4App_tctBridge(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return (tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge) &_tc_TempControl_tcp_tct_tct_seL4App_tctBridge;
}

art_Bridge_EntryPoints tc_TempControl_tcp_tct_tct_seL4App_entryPoints(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_tc_TempControl_tcp_tct_tct_seL4App_entryPoints;
}

Option_8E9F45 tc_TempControl_tcp_tct_tct_seL4App_noData(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempControl_tcp_tct_tct_seL4App_noData;
}

art_Art_PortId tc_TempControl_tcp_tct_tct_seL4App_currentTemp_id(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return _tc_TempControl_tcp_tct_tct_seL4App_currentTemp_id;
}

Option_8E9F45 tc_TempControl_tcp_tct_tct_seL4App_currentTemp_port(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempControl_tcp_tct_tct_seL4App_currentTemp_port;
}

void tc_TempControl_tcp_tct_tct_seL4App_currentTemp_port_a(STACK_FRAME Option_8E9F45 p_currentTemp_port) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_currentTemp_port, p_currentTemp_port, sizeof(union Option_8E9F45));
}

art_Art_PortId tc_TempControl_tcp_tct_tct_seL4App_tempChanged_id(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return _tc_TempControl_tcp_tct_tct_seL4App_tempChanged_id;
}

Option_8E9F45 tc_TempControl_tcp_tct_tct_seL4App_tempChanged_port(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempControl_tcp_tct_tct_seL4App_tempChanged_port;
}

void tc_TempControl_tcp_tct_tct_seL4App_tempChanged_port_a(STACK_FRAME Option_8E9F45 p_tempChanged_port) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_tempChanged_port, p_tempChanged_port, sizeof(union Option_8E9F45));
}

art_Art_PortId tc_TempControl_tcp_tct_tct_seL4App_fanAck_id(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return _tc_TempControl_tcp_tct_tct_seL4App_fanAck_id;
}

Option_8E9F45 tc_TempControl_tcp_tct_tct_seL4App_fanAck_port(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempControl_tcp_tct_tct_seL4App_fanAck_port;
}

void tc_TempControl_tcp_tct_tct_seL4App_fanAck_port_a(STACK_FRAME Option_8E9F45 p_fanAck_port) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_fanAck_port, p_fanAck_port, sizeof(union Option_8E9F45));
}

art_Art_PortId tc_TempControl_tcp_tct_tct_seL4App_setPoint_id(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return _tc_TempControl_tcp_tct_tct_seL4App_setPoint_id;
}

Option_8E9F45 tc_TempControl_tcp_tct_tct_seL4App_setPoint_port(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempControl_tcp_tct_tct_seL4App_setPoint_port;
}

void tc_TempControl_tcp_tct_tct_seL4App_setPoint_port_a(STACK_FRAME Option_8E9F45 p_setPoint_port) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_setPoint_port, p_setPoint_port, sizeof(union Option_8E9F45));
}

art_Art_PortId tc_TempControl_tcp_tct_tct_seL4App_fanCmd_id(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return _tc_TempControl_tcp_tct_tct_seL4App_fanCmd_id;
}

Option_8E9F45 tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port(STACK_FRAME_ONLY) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  return (Option_8E9F45) &_tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port;
}

void tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port_a(STACK_FRAME Option_8E9F45 p_fanCmd_port) {
  tc_TempControl_tcp_tct_tct_seL4App_init(CALLER_LAST);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port, p_fanCmd_port, sizeof(union Option_8E9F45));
}

Z tc_TempControl_tcp_tct_tct_seL4App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "main", 0);

  sfUpdateLoc(132);
  {
    tc_TempControl_tcp_tct_tct_seL4App_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(133);
  {
    tc_TempControl_tcp_tct_tct_seL4App_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(134);
  {
    tc_TempControl_tcp_tct_tct_seL4App_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(135);
  {
    tc_TempControl_tcp_tct_tct_seL4App_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(137);
  {
    tc_TempControl_tcp_tct_tct_seL4App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit tc_TempControl_tcp_tct_tct_seL4App_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "initialiseArchitecture", 0);
}

Unit tc_TempControl_tcp_tct_tct_seL4App_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "initialiseEntryPoint", 0);

  sfUpdateLoc(123);
  {
    art_Bridge_EntryPoints_initialise_(SF tc_TempControl_tcp_tct_tct_seL4App_entryPoints(SF_LAST));
  }
}

Unit tc_TempControl_tcp_tct_tct_seL4App_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "computeEntryPoint", 0);

  sfUpdateLoc(125);
  {
    art_Bridge_EntryPoints_compute_(SF tc_TempControl_tcp_tct_tct_seL4App_entryPoints(SF_LAST));
  }
}

Unit tc_TempControl_tcp_tct_tct_seL4App_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "finaliseEntryPoint", 0);

  sfUpdateLoc(127);
  {
    art_Bridge_EntryPoints_finalise_(SF tc_TempControl_tcp_tct_tct_seL4App_entryPoints(SF_LAST));
  }
}

Unit tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(151);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit tc_TempControl_tcp_tct_tct_seL4App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "touch", 0);

  sfUpdateLoc(143);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(144);
    {
      tc_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(147);
    DeclNewMBox2_43CC67(_mbox2Boolean_Payload);
    MBox2_43CC67 mbox2Boolean_Payload = (MBox2_43CC67) &_mbox2Boolean_Payload;
    {
      DeclNewtc_Base_Types_Boolean_Payload(t_2);
      tc_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_43CC67(t_1);
      MBox2_43CC67_apply(SF &t_1, art_Art_PortId_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_43CC67));
    }

    sfUpdateLoc(148);
    DeclNewMBox2_37E193(_mbox2OptionDataContent);
    MBox2_37E193 mbox2OptionDataContent = (MBox2_37E193) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_37E193(t_3);
      MBox2_37E193_apply(SF &t_3, art_Art_PortId_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_37E193));
    }

    sfUpdateLoc(153);
    {
      B t_6 = tc_Base_Types_Boolean_example(SF_LAST);
      DeclNewtc_Base_Types_Boolean_Payload(t_5);
      tc_Base_Types_Boolean_Payload_apply(SF &t_5, t_6);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(154);
    {
      Z t_8 = tc_Base_Types_Integer_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_Payload(t_7);
      tc_Base_Types_Integer_Payload_apply(SF &t_7, t_8);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(155);
    {
      S8 t_10 = tc_Base_Types_Integer_8_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_8_Payload(t_9);
      tc_Base_Types_Integer_8_Payload_apply(SF &t_9, t_10);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_9));
    }

    sfUpdateLoc(156);
    {
      S16 t_12 = tc_Base_Types_Integer_16_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_16_Payload(t_11);
      tc_Base_Types_Integer_16_Payload_apply(SF &t_11, t_12);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_11));
    }

    sfUpdateLoc(157);
    {
      S32 t_14 = tc_Base_Types_Integer_32_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_32_Payload(t_13);
      tc_Base_Types_Integer_32_Payload_apply(SF &t_13, t_14);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_13));
    }

    sfUpdateLoc(158);
    {
      S64 t_16 = tc_Base_Types_Integer_64_example(SF_LAST);
      DeclNewtc_Base_Types_Integer_64_Payload(t_15);
      tc_Base_Types_Integer_64_Payload_apply(SF &t_15, t_16);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_15));
    }

    sfUpdateLoc(159);
    {
      U8 t_18 = tc_Base_Types_Unsigned_8_example(SF_LAST);
      DeclNewtc_Base_Types_Unsigned_8_Payload(t_17);
      tc_Base_Types_Unsigned_8_Payload_apply(SF &t_17, t_18);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(160);
    {
      U16 t_20 = tc_Base_Types_Unsigned_16_example(SF_LAST);
      DeclNewtc_Base_Types_Unsigned_16_Payload(t_19);
      tc_Base_Types_Unsigned_16_Payload_apply(SF &t_19, t_20);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_19));
    }

    sfUpdateLoc(161);
    {
      U32 t_22 = tc_Base_Types_Unsigned_32_example(SF_LAST);
      DeclNewtc_Base_Types_Unsigned_32_Payload(t_21);
      tc_Base_Types_Unsigned_32_Payload_apply(SF &t_21, t_22);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_21));
    }

    sfUpdateLoc(162);
    {
      U64 t_24 = tc_Base_Types_Unsigned_64_example(SF_LAST);
      DeclNewtc_Base_Types_Unsigned_64_Payload(t_23);
      tc_Base_Types_Unsigned_64_Payload_apply(SF &t_23, t_24);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_23));
    }

    sfUpdateLoc(163);
    {
      R t_26 = tc_Base_Types_Float_example(SF_LAST);
      DeclNewtc_Base_Types_Float_Payload(t_25);
      tc_Base_Types_Float_Payload_apply(SF &t_25, t_26);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_25));
    }

    sfUpdateLoc(164);
    {
      F32 t_28 = tc_Base_Types_Float_32_example(SF_LAST);
      DeclNewtc_Base_Types_Float_32_Payload(t_27);
      tc_Base_Types_Float_32_Payload_apply(SF &t_27, t_28);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_27));
    }

    sfUpdateLoc(165);
    {
      F64 t_30 = tc_Base_Types_Float_64_example(SF_LAST);
      DeclNewtc_Base_Types_Float_64_Payload(t_29);
      tc_Base_Types_Float_64_Payload_apply(SF &t_29, t_30);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_29));
    }

    sfUpdateLoc(166);
    {
      C t_32 = tc_Base_Types_Character_example(SF_LAST);
      DeclNewtc_Base_Types_Character_Payload(t_31);
      tc_Base_Types_Character_Payload_apply(SF &t_31, t_32);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_31));
    }

    sfUpdateLoc(167);
    {
      DeclNewString(t_34);
      tc_Base_Types_String_example(SF (String) &t_34);
      DeclNewtc_Base_Types_String_Payload(t_33);
      tc_Base_Types_String_Payload_apply(SF &t_33, (String) ((String) &t_34));
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_33));
    }

    sfUpdateLoc(168);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_36);
      tc_TempControlMixedSeL4CAmKES_Temperature_example(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_36);
      DeclNewtc_TempControlMixedSeL4CAmKES_Temperature_Payload(t_35);
      tc_TempControlMixedSeL4CAmKES_Temperature_Payload_apply(SF &t_35, (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_36));
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_35));
    }

    sfUpdateLoc(169);
    {
      DeclNewOption_103926(t_38);
      tc_TempControlMixedSeL4CAmKES_TempUnit_Type_byOrdinal(SF (Option_103926) &t_38, Z_C(0));
      tc_TempControlMixedSeL4CAmKES_TempUnit_Type t_39 = Option_103926_get_(SF ((Option_103926) &t_38));
      DeclNewtc_TempControlMixedSeL4CAmKES_TempUnit_Payload(t_37);
      tc_TempControlMixedSeL4CAmKES_TempUnit_Payload_apply(SF &t_37, t_39);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_37));
    }

    sfUpdateLoc(170);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint(t_41);
      tc_TempControlMixedSeL4CAmKES_SetPoint_example(SF (tc_TempControlMixedSeL4CAmKES_SetPoint) &t_41);
      DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint_Payload(t_40);
      tc_TempControlMixedSeL4CAmKES_SetPoint_Payload_apply(SF &t_40, (tc_TempControlMixedSeL4CAmKES_SetPoint) ((tc_TempControlMixedSeL4CAmKES_SetPoint) &t_41));
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_40));
    }

    sfUpdateLoc(171);
    {
      DeclNewOption_5071ED(t_43);
      tc_TempControlMixedSeL4CAmKES_FanCmd_Type_byOrdinal(SF (Option_5071ED) &t_43, Z_C(0));
      tc_TempControlMixedSeL4CAmKES_FanCmd_Type t_44 = Option_5071ED_get_(SF ((Option_5071ED) &t_43));
      DeclNewtc_TempControlMixedSeL4CAmKES_FanCmd_Payload(t_42);
      tc_TempControlMixedSeL4CAmKES_FanCmd_Payload_apply(SF &t_42, t_44);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_42));
    }

    sfUpdateLoc(172);
    {
      DeclNewOption_36021E(t_46);
      tc_TempControlMixedSeL4CAmKES_FanAck_Type_byOrdinal(SF (Option_36021E) &t_46, Z_C(0));
      tc_TempControlMixedSeL4CAmKES_FanAck_Type t_47 = Option_36021E_get_(SF ((Option_36021E) &t_46));
      DeclNewtc_TempControlMixedSeL4CAmKES_FanAck_Payload(t_45);
      tc_TempControlMixedSeL4CAmKES_FanAck_Payload_apply(SF &t_45, t_47);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_45));
    }

    sfUpdateLoc(173);
    {
      DeclNewart_Empty(t_48);
      art_Empty_apply(SF &t_48);
      tc_TempControl_tcp_tct_tct_seL4App_touch_printDataContent(SF (art_DataContent) (&t_48));
    }

    sfUpdateLoc(175);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api(t_49);
      Option_098837_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &t_49, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api_logInfo_(SF ((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &t_49), (String) string(""));
    }

    sfUpdateLoc(176);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api(t_50);
      Option_098837_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &t_50, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api_logDebug_(SF ((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &t_50), (String) string(""));
    }

    sfUpdateLoc(177);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api(t_51);
      Option_098837_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &t_51, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api_logError_(SF ((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &t_51), (String) string(""));
    }

    sfUpdateLoc(178);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_52);
      Option_889345_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_52, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_logInfo_(SF ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_52), (String) string(""));
    }

    sfUpdateLoc(179);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_53);
      Option_889345_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_53, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_logDebug_(SF ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_53), (String) string(""));
    }

    sfUpdateLoc(180);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_54);
      Option_889345_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_54, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_logError_(SF ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_54), (String) string(""));
    }

    sfUpdateLoc(181);
    Option_DEC797 apiUsage_currentTemp;
    DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_55);
    Option_889345_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_55, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_DEC797(t_56);
    tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_(SF (Option_DEC797) &t_56, ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_55));
    apiUsage_currentTemp = (Option_DEC797) ((Option_DEC797) &t_56);

    sfUpdateLoc(182);
    Option_C622DB apiUsage_tempChanged;
    DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_57);
    Option_889345_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_57, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_C622DB(t_58);
    tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_tempChanged_(SF (Option_C622DB) &t_58, ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_57));
    apiUsage_tempChanged = (Option_C622DB) ((Option_C622DB) &t_58);

    sfUpdateLoc(183);
    Option_36021E apiUsage_fanAck;
    DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_59);
    Option_889345_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_59, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_36021E(t_60);
    tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_fanAck_(SF (Option_36021E) &t_60, ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_59));
    apiUsage_fanAck = (Option_36021E) ((Option_36021E) &t_60);

    sfUpdateLoc(184);
    Option_3BF471 apiUsage_setPoint;
    DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_61);
    Option_889345_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_61, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_3BF471(t_62);
    tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_setPoint_(SF (Option_3BF471) &t_62, ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_61));
    apiUsage_setPoint = (Option_3BF471) ((Option_3BF471) &t_62);

    sfUpdateLoc(185);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api(t_63);
      Option_098837_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &t_63, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api(SF_LAST));
      DeclNewOption_5071ED(t_64);
      tc_TempControlMixedSeL4CAmKES_FanCmd_Type_byOrdinal(SF (Option_5071ED) &t_64, Z_C(0));
      tc_TempControlMixedSeL4CAmKES_FanCmd_Type t_65 = Option_5071ED_get_(SF ((Option_5071ED) &t_64));
      tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api_put_fanCmd_(SF ((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &t_63), t_65);
    }

    sfUpdateLoc(186);
    {
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_66);
      Option_889345_get_(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_66, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_5071ED(t_67);
      tc_TempControlMixedSeL4CAmKES_FanCmd_Type_byOrdinal(SF (Option_5071ED) &t_67, Z_C(0));
      tc_TempControlMixedSeL4CAmKES_FanCmd_Type t_68 = Option_5071ED_get_(SF ((Option_5071ED) &t_67));
      tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_put_fanCmd_(SF ((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &t_66), t_68);
    }
  }
}

Unit tc_TempControl_tcp_tct_tct_seL4App_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(191);
  {
    String_cprint(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_name_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(192);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(193);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit tc_TempControl_tcp_tct_tct_seL4App_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(203);
  {
    String_cprint(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_name_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(204);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(205);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit tc_TempControl_tcp_tct_tct_seL4App_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(197);
  {
    String_cprint(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_name_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(198);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(199);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void tc_TempControl_tcp_tct_tct_seL4App_getValue(STACK_FRAME Option_8E9F45 result, art_Art_PortId portId) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "getValue", 0);

  sfUpdateLoc(77);
  B t_0;
  {
    t_0 = art_Art_PortId__eq(portId, tc_TempControl_tcp_tct_tct_seL4App_currentTemp_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, tc_TempControl_tcp_tct_tct_seL4App_currentTemp_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(79);
    B t_1;
    {
      t_1 = art_Art_PortId__eq(portId, tc_TempControl_tcp_tct_tct_seL4App_tempChanged_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, tc_TempControl_tcp_tct_tct_seL4App_tempChanged_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(81);
      B t_2;
      {
        t_2 = art_Art_PortId__eq(portId, tc_TempControl_tcp_tct_tct_seL4App_fanAck_id(SF_LAST));
      }
      if (t_2) {
        Type_assign(result, tc_TempControl_tcp_tct_tct_seL4App_fanAck_port(SF_LAST), sizeof(union Option_8E9F45));
        return;
      } else {

        sfUpdateLoc(83);
        B t_3;
        {
          t_3 = art_Art_PortId__eq(portId, tc_TempControl_tcp_tct_tct_seL4App_setPoint_id(SF_LAST));
        }
        if (t_3) {
          Type_assign(result, tc_TempControl_tcp_tct_tct_seL4App_setPoint_port(SF_LAST), sizeof(union Option_8E9F45));
          return;
        } else {

          sfUpdateLoc(86);
          {
            DeclNewString(t_4);
            String t_5 = (String) &t_4;
            DeclNewString(t_6);
            String_string_(SF (String) &t_6, string("Unexpected: tct.getValue called with: "));
            art_Art_PortId_string_(SF (String) &t_6, portId);
            String_string_(SF (String) &t_6, string(""));
            String_string_(SF t_5, ((String) &t_6));
            sfAbort(t_5->value);
            abort();
          }
        }
      }
    }
  }
}

Unit tc_TempControl_tcp_tct_tct_seL4App_putValue(STACK_FRAME art_Art_PortId portId, art_DataContent data) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "putValue", 0);

  sfUpdateLoc(103);
  B t_0;
  {
    t_0 = art_Art_PortId__eq(portId, tc_TempControl_tcp_tct_tct_seL4App_fanCmd_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(104);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(106);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: tct.putValue called with: "));
      art_Art_PortId_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

Unit tc_TempControl_tcp_tct_tct_seL4App_sendOutput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "sendOutput", 0);

  sfUpdateLoc(113);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(114);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port(SF_LAST));
      tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_seL4Nix_fanCmd_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(115);
    {
      tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port_a(SF (Option_8E9F45) tc_TempControl_tcp_tct_tct_seL4App_noData(SF_LAST));
    }
  }
}

void tc_TempControl_tcp_tct_tct_seL4App_dispatchStatus(STACK_FRAME art_DispatchStatus result, art_Art_BridgeId bridgeId) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "dispatchStatus", 0);

  sfUpdateLoc(63);
  DeclNewIS_D10119(_portIds);
  IS_D10119 portIds = (IS_D10119) &_portIds;
  {
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(portIds, (&t_0), sizeof(struct IS_D10119));
  }

  sfUpdateLoc(64);
  B t_1;
  {
    t_1 = (!tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_seL4Nix_tempChanged_IsEmpty(SF_LAST));
  }
  if (t_1) {

    sfUpdateLoc(65);
    {
      DeclNewIS_D10119(t_2);
      IS_D10119__append(SF (IS_D10119) &t_2, portIds, tc_TempControl_tcp_tct_tct_seL4App_tempChanged_id(SF_LAST));
      Type_assign(portIds, ((IS_D10119) &t_2), sizeof(struct IS_D10119));
    }
  }

  sfUpdateLoc(67);
  B t_3;
  {
    t_3 = (!tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_seL4Nix_fanAck_IsEmpty(SF_LAST));
  }
  if (t_3) {

    sfUpdateLoc(68);
    {
      DeclNewIS_D10119(t_4);
      IS_D10119__append(SF (IS_D10119) &t_4, portIds, tc_TempControl_tcp_tct_tct_seL4App_fanAck_id(SF_LAST));
      Type_assign(portIds, ((IS_D10119) &t_4), sizeof(struct IS_D10119));
    }
  }

  sfUpdateLoc(70);
  B t_5;
  {
    t_5 = (!tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_seL4Nix_setPoint_IsEmpty(SF_LAST));
  }
  if (t_5) {

    sfUpdateLoc(71);
    {
      DeclNewIS_D10119(t_6);
      IS_D10119__append(SF (IS_D10119) &t_6, portIds, tc_TempControl_tcp_tct_tct_seL4App_setPoint_id(SF_LAST));
      Type_assign(portIds, ((IS_D10119) &t_6), sizeof(struct IS_D10119));
    }
  }
  DeclNewart_EventTriggered(t_7);
  art_EventTriggered_apply(SF &t_7, (IS_D10119) portIds);
  Type_assign(result, (&t_7), sizeof(struct art_EventTriggered));
  return;
}

Unit tc_TempControl_tcp_tct_tct_seL4App_receiveInput(STACK_FRAME IS_D10119 eventPortIds, IS_D10119 dataPortIds) {
  DeclNewStackFrame(caller, "tct_seL4App.scala", "tc.TempControl_tcp_tct.tct_seL4App", "receiveInput", 0);

  sfUpdateLoc(93);
  {
    DeclNewOption_8E9F45(t_0);
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_seL4Nix_currentTemp_Receive(SF (Option_8E9F45) &t_0);
    tc_TempControl_tcp_tct_tct_seL4App_currentTemp_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(95);
  {
    DeclNewOption_8E9F45(t_1);
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_seL4Nix_tempChanged_Receive(SF (Option_8E9F45) &t_1);
    tc_TempControl_tcp_tct_tct_seL4App_tempChanged_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }

  sfUpdateLoc(97);
  {
    DeclNewOption_8E9F45(t_2);
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_seL4Nix_fanAck_Receive(SF (Option_8E9F45) &t_2);
    tc_TempControl_tcp_tct_tct_seL4App_fanAck_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_2));
  }

  sfUpdateLoc(99);
  {
    DeclNewOption_8E9F45(t_3);
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_seL4Nix_setPoint_Receive(SF (Option_8E9F45) &t_3);
    tc_TempControl_tcp_tct_tct_seL4App_setPoint_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_3));
  }
}

void tc_TempControl_tcp_tct_tct_seL4App_init_tctBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  {

    sfUpdateLoc(19);
    art_Port_890848 currentTemp;
    DeclNewart_Port_890848(t_0);
    art_Port_890848_apply(SF &t_0, art_Art_PortId_C(0), (String) string("TempControlSystem_Instance_tcp_tct_currentTemp"), art_PortMode_Type_DataIn);
    currentTemp = (art_Port_890848) (&t_0);

    sfUpdateLoc(20);
    art_Port_9CBF18 tempChanged;
    DeclNewart_Port_9CBF18(t_1);
    art_Port_9CBF18_apply(SF &t_1, art_Art_PortId_C(1), (String) string("TempControlSystem_Instance_tcp_tct_tempChanged"), art_PortMode_Type_EventIn);
    tempChanged = (art_Port_9CBF18) (&t_1);

    sfUpdateLoc(21);
    art_Port_AE5929 fanAck;
    DeclNewart_Port_AE5929(t_2);
    art_Port_AE5929_apply(SF &t_2, art_Art_PortId_C(2), (String) string("TempControlSystem_Instance_tcp_tct_fanAck"), art_PortMode_Type_EventIn);
    fanAck = (art_Port_AE5929) (&t_2);

    sfUpdateLoc(22);
    art_Port_846E11 setPoint;
    DeclNewart_Port_846E11(t_3);
    art_Port_846E11_apply(SF &t_3, art_Art_PortId_C(3), (String) string("TempControlSystem_Instance_tcp_tct_setPoint"), art_PortMode_Type_EventIn);
    setPoint = (art_Port_846E11) (&t_3);

    sfUpdateLoc(23);
    art_Port_70EB35 fanCmd;
    DeclNewart_Port_70EB35(t_4);
    art_Port_70EB35_apply(SF &t_4, art_Art_PortId_C(4), (String) string("TempControlSystem_Instance_tcp_tct_fanCmd"), art_PortMode_Type_EventOut);
    fanCmd = (art_Port_70EB35) (&t_4);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_6);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_6, Z_C(1000));
    DeclNewNone_CFD2B0(t_7);
    None_CFD2B0_apply(SF &t_7);
    DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge(t_5);
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_apply(SF &t_5, art_Art_BridgeId_C(0), (String) string("TempControlSystem_Instance_tcp_tct"), (art_DispatchPropertyProtocol) (&t_6), (Option_0247A1) (&t_7), (art_Port_890848) currentTemp, (art_Port_9CBF18) tempChanged, (art_Port_AE5929) fanAck, (art_Port_846E11) setPoint, (art_Port_70EB35) fanCmd);
    Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_tctBridge, (&t_5), sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge));
  }
};

void tc_TempControl_tcp_tct_tct_seL4App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_entryPoints, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_entryPoints_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  DeclNewNone_964667(t_8);
  None_964667_apply(SF &t_8);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_noData, (&t_8), sizeof(struct None_964667));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_currentTemp_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  _tc_TempControl_tcp_tct_tct_seL4App_currentTemp_id = art_Port_890848_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_currentTemp_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_currentTemp_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(44);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_currentTemp_port, tc_TempControl_tcp_tct_tct_seL4App_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_tempChanged_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(47);
  _tc_TempControl_tcp_tct_tct_seL4App_tempChanged_id = art_Port_9CBF18_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_tempChanged_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_tempChanged_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(48);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_tempChanged_port, tc_TempControl_tcp_tct_tct_seL4App_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_fanAck_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(51);
  _tc_TempControl_tcp_tct_tct_seL4App_fanAck_id = art_Port_AE5929_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanAck_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_fanAck_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(52);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_fanAck_port, tc_TempControl_tcp_tct_tct_seL4App_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_setPoint_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(55);
  _tc_TempControl_tcp_tct_tct_seL4App_setPoint_id = art_Port_846E11_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_setPoint_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_setPoint_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(56);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_setPoint_port, tc_TempControl_tcp_tct_tct_seL4App_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_fanCmd_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(59);
  _tc_TempControl_tcp_tct_tct_seL4App_fanCmd_id = art_Port_70EB35_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanCmd_(tc_TempControl_tcp_tct_tct_seL4App_tctBridge(SF_LAST)));
};

void tc_TempControl_tcp_tct_tct_seL4App_init_fanCmd_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(60);
  Type_assign(&_tc_TempControl_tcp_tct_tct_seL4App_fanCmd_port, tc_TempControl_tcp_tct_tct_seL4App_noData(SF_LAST), sizeof(union Option_8E9F45));
};