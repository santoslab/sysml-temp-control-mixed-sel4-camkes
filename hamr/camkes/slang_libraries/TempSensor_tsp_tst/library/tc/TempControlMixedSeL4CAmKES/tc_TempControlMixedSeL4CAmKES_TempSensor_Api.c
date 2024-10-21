#include <all.h>

// tc.TempControlMixedSeL4CAmKES.TempSensor_Api

B tc_TempControlMixedSeL4CAmKES_TempSensor_Api__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Ttc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api: return T;
    case Ttc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api: return T;
    default: return F;
  }
}

tc_TempControlMixedSeL4CAmKES_TempSensor_Api tc_TempControlMixedSeL4CAmKES_TempSensor_Api__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Ttc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api: break;
    case Ttc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api: break;
    default:
      fprintf(stderr, "Invalid cast from %s to tc.TempControlMixedSeL4CAmKES.TempSensor_Api.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (tc_TempControlMixedSeL4CAmKES_TempSensor_Api) this;
}

void tc_TempControlMixedSeL4CAmKES_TempSensor_Api_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_TempSensor_Api this);

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_logInfo_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "logInfo", 0);

  sfUpdateLoc(64);
  {
    art_Art_logInfo(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_logDebug_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "logDebug", 0);

  sfUpdateLoc(68);
  {
    art_Art_logDebug(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_logError_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "logError", 0);

  sfUpdateLoc(72);
  {
    art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_logInfo_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "logInfo", 0);

  sfUpdateLoc(64);
  {
    art_Art_logInfo(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_logDebug_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "logDebug", 0);

  sfUpdateLoc(68);
  {
    art_Art_logDebug(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_logError_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "logError", 0);

  sfUpdateLoc(72);
  {
    art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_put_currentTemp_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this, tc_TempControlMixedSeL4CAmKES_Temperature value) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "put_currentTemp", 0);

  sfUpdateLoc(43);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature_Payload(t_0);
    tc_TempControlMixedSeL4CAmKES_Temperature_Payload_apply(SF &t_0, (tc_TempControlMixedSeL4CAmKES_Temperature) value);
    art_Art_putValue(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_currentTemp_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_put_currentTemp_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api this, tc_TempControlMixedSeL4CAmKES_Temperature value) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "put_currentTemp", 0);

  sfUpdateLoc(43);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature_Payload(t_0);
    tc_TempControlMixedSeL4CAmKES_Temperature_Payload_apply(SF &t_0, (tc_TempControlMixedSeL4CAmKES_Temperature) value);
    art_Art_putValue(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_currentTemp_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_put_tempChanged_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api this) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "put_tempChanged", 0);

  sfUpdateLoc(60);
  {
    DeclNewart_Empty(t_0);
    art_Empty_apply(SF &t_0);
    art_Art_putValue(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_tempChanged_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_put_tempChanged_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api this) {
  DeclNewStackFrame(caller, "TempSensor_Api.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_Api", "put_tempChanged", 0);

  sfUpdateLoc(60);
  {
    DeclNewart_Empty(t_0);
    art_Empty_apply(SF &t_0);
    art_Art_putValue(SF tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_tempChanged_Id_(this), (art_DataContent) (&t_0));
  }
}