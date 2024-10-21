#include <all.h>

B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_initialized_ = F;

struct tc_TempControlMixedSeL4CAmKES_SetPoint _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint;
tc_TempControlMixedSeL4CAmKES_FanCmd_Type _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState;
struct tc_TempControlMixedSeL4CAmKES_Temperature _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp;
B _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError;

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(STACK_FRAME_ONLY) {
  if (tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_initialized_) return;
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_initialized_ = T;
  DeclNewStackFrame(caller, "TempControl_tcp_tct.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct", "<init>", 0);
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init_currentSetPoint(SF_LAST);
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init_currentFanState(SF_LAST);
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init_latestTemp(SF_LAST);
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init_fanError(SF_LAST);
}

tc_TempControlMixedSeL4CAmKES_SetPoint tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(CALLER_LAST);
  return (tc_TempControlMixedSeL4CAmKES_SetPoint) &_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint_a(STACK_FRAME tc_TempControlMixedSeL4CAmKES_SetPoint p_currentSetPoint) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(CALLER_LAST);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint, p_currentSetPoint, sizeof(struct tc_TempControlMixedSeL4CAmKES_SetPoint));
}

tc_TempControlMixedSeL4CAmKES_FanCmd_Type tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(CALLER_LAST);
  return _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState_a(STACK_FRAME tc_TempControlMixedSeL4CAmKES_FanCmd_Type p_currentFanState) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(CALLER_LAST);
  _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState = p_currentFanState;
}

tc_TempControlMixedSeL4CAmKES_Temperature tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(CALLER_LAST);
  return (tc_TempControlMixedSeL4CAmKES_Temperature) &_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp_a(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature p_latestTemp) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(CALLER_LAST);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp, p_latestTemp, sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
}

B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(CALLER_LAST);
  return _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError_a(STACK_FRAME B p_fanError) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init(CALLER_LAST);
  _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError = p_fanError;
}

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_initialise(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api api) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct", "initialise", 0);

  sfUpdateLoc(50);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_1);
    tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_1, 70.0F, tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit);
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_2);
    tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_2, 90.0F, tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit);
    DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint(t_0);
    tc_TempControlMixedSeL4CAmKES_SetPoint_apply(SF &t_0, (tc_TempControlMixedSeL4CAmKES_Temperature) (&t_1), (tc_TempControlMixedSeL4CAmKES_Temperature) (&t_2));
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint_a(SF (tc_TempControlMixedSeL4CAmKES_SetPoint) (&t_0));
  }

  sfUpdateLoc(53);
  {
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState_a(SF (tc_TempControlMixedSeL4CAmKES_FanCmd_Type) tc_TempControlMixedSeL4CAmKES_FanCmd_Type_Off);
  }

  sfUpdateLoc(54);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_3);
    tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_3, 72.0F, tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit);
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp_a(SF (tc_TempControlMixedSeL4CAmKES_Temperature) (&t_3));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_handle_tempChanged(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api api) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct", "handle_tempChanged", 0);

  sfUpdateLoc(141);
  {
    DeclNewOption_DEC797(t_0);
    tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_get_currentTemp_(SF (Option_DEC797) &t_0, api);
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_1);
    Option_DEC797_get_(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_1, ((Option_DEC797) &t_0));
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp_a(SF (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_1));
  }

  sfUpdateLoc(143);
  {
    DeclNewString(t_2);
    String_string_(SF (String) &t_2, string("Received :"));
    tc_TempControlMixedSeL4CAmKES_Temperature_string_(SF (String) &t_2, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp(SF_LAST));
    String_string_(SF (String) &t_2, string(""));
    tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_logInfo_(SF api, (String) ((String) &t_2));
  }

  sfUpdateLoc(146);
  {
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_perform_fan_control(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) api);
  }
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_handle_fanAck_extract_234_12(STACK_FRAME_SF tc_TempControlMixedSeL4CAmKES_FanAck_Type t_0) {
  if (!tc_TempControlMixedSeL4CAmKES_FanAck_Type__eq(t_0, tc_TempControlMixedSeL4CAmKES_FanAck_Type_Ok)) return F;
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_handle_fanAck_extract_238_12(STACK_FRAME_SF tc_TempControlMixedSeL4CAmKES_FanAck_Type t_0) {
  if (!tc_TempControlMixedSeL4CAmKES_FanAck_Type__eq(t_0, tc_TempControlMixedSeL4CAmKES_FanAck_Type_Error)) return F;
  return T;
}

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_handle_fanAck(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api api, tc_TempControlMixedSeL4CAmKES_FanAck_Type value) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct", "handle_fanAck", 0);

  sfUpdateLoc(233);
  tc_TempControlMixedSeL4CAmKES_FanAck_Type t_0 = value;
  B match_233_5 = F;
  if (!match_233_5) {
    match_233_5 = tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_handle_fanAck_extract_234_12(SF t_0);
    if (match_233_5) {

      sfUpdateLoc(236);
      {
        tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_logInfo_(SF api, (String) string("Fan actuation worked."));
      }

      sfUpdateLoc(237);
      {
        tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError_a(SF (B) F);
      }
    }
  }
  if (!match_233_5) {
    match_233_5 = tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_handle_fanAck_extract_238_12(SF t_0);
    if (match_233_5) {

      sfUpdateLoc(239);
      {
        tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_logError_(SF api, (String) string("Fan actuation failed!"));
      }

      sfUpdateLoc(240);
      {
        tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError_a(SF (B) T);
      }
    }
  }
  sfAssert(match_233_5, "Error when pattern matching.");

  sfUpdateLoc(242);
  {
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_perform_fan_control(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) api);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_handle_setPoint(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api api, tc_TempControlMixedSeL4CAmKES_SetPoint value) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct", "handle_setPoint", 0);

  sfUpdateLoc(327);
  {
    tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_logInfo_(SF api, (String) string("received setPoint"));
  }

  sfUpdateLoc(330);
  {
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint_a(SF (tc_TempControlMixedSeL4CAmKES_SetPoint) value);
  }

  sfUpdateLoc(333);
  {
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_perform_fan_control(SF (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) api);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_finalise(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api api) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct", "finalise", 0);
}

Unit tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_perform_fan_control(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api api) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct", "perform_fan_control", 0);

  sfUpdateLoc(378);
  B t_0;
  {
    t_0 = tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError(SF_LAST);
  }
  if (t_0) {

    sfUpdateLoc(379);
    {
      tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_put_fanCmd_(SF api, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState(SF_LAST));
    }
  } else {

    sfUpdateLoc(381);
    tc_TempControlMixedSeL4CAmKES_FanCmd_Type oldFanState;
    {
      oldFanState = tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState(SF_LAST);
    }

    sfUpdateLoc(382);
    B t_1;
    {
      t_1 = F32__lt(tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp(SF_LAST)), tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_SetPoint_low_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint(SF_LAST))));
    }
    if (t_1) {

      sfUpdateLoc(384);
      {
        tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState_a(SF (tc_TempControlMixedSeL4CAmKES_FanCmd_Type) tc_TempControlMixedSeL4CAmKES_FanCmd_Type_Off);
      }
    } else {

      sfUpdateLoc(385);
      B t_2;
      {
        t_2 = F32__gt(tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp(SF_LAST)), tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_SetPoint_high_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint(SF_LAST))));
      }
      if (t_2) {

        sfUpdateLoc(387);
        {
          tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState_a(SF (tc_TempControlMixedSeL4CAmKES_FanCmd_Type) tc_TempControlMixedSeL4CAmKES_FanCmd_Type_On);
        }
      }
    }

    sfUpdateLoc(394);
    B t_3;
    {
      t_3 = tc_TempControlMixedSeL4CAmKES_FanCmd_Type__ne(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState(SF_LAST), oldFanState);
    }
    if (t_3) {

      sfUpdateLoc(396);
      {
        tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_put_fanCmd_(SF api, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState(SF_LAST));
      }
    }
  }
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init_currentSetPoint(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  DeclNewtc_TempControlMixedSeL4CAmKES_SetPoint(t_0);
  tc_TempControlMixedSeL4CAmKES_SetPoint_example(SF (tc_TempControlMixedSeL4CAmKES_SetPoint) &t_0);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentSetPoint, ((tc_TempControlMixedSeL4CAmKES_SetPoint) &t_0), sizeof(struct tc_TempControlMixedSeL4CAmKES_SetPoint));
};

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init_currentFanState(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewOption_5071ED(t_1);
  tc_TempControlMixedSeL4CAmKES_FanCmd_Type_byOrdinal(SF (Option_5071ED) &t_1, Z_C(0));
  tc_TempControlMixedSeL4CAmKES_FanCmd_Type t_2 = Option_5071ED_get_(SF ((Option_5071ED) &t_1));
  _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_currentFanState = t_2;
};

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init_latestTemp(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_3);
  tc_TempControlMixedSeL4CAmKES_Temperature_example(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_3);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_latestTemp, ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_3), sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
};

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_init_fanError(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  B t_4 = tc_Base_Types_Boolean_example(SF_LAST);
  _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_fanError = t_4;
};