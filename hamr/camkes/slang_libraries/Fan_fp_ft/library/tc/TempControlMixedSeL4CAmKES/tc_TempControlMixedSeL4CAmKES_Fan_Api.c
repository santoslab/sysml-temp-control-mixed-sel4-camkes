#include <all.h>

// tc.TempControlMixedSeL4CAmKES.Fan_Api

B tc_TempControlMixedSeL4CAmKES_Fan_Api__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Ttc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api: return T;
    case Ttc_TempControlMixedSeL4CAmKES_Fan_Operational_Api: return T;
    default: return F;
  }
}

tc_TempControlMixedSeL4CAmKES_Fan_Api tc_TempControlMixedSeL4CAmKES_Fan_Api__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Ttc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api: break;
    case Ttc_TempControlMixedSeL4CAmKES_Fan_Operational_Api: break;
    default:
      fprintf(stderr, "Invalid cast from %s to tc.TempControlMixedSeL4CAmKES.Fan_Api.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (tc_TempControlMixedSeL4CAmKES_Fan_Api) this;
}

void tc_TempControlMixedSeL4CAmKES_Fan_Api_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_Fan_Api this);

Unit tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_logInfo_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Api", "logInfo", 0);

  sfUpdateLoc(32);
  {
    art_Art_logInfo(SF tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_logDebug_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Api", "logDebug", 0);

  sfUpdateLoc(36);
  {
    art_Art_logDebug(SF tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_logError_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Api", "logError", 0);

  sfUpdateLoc(40);
  {
    art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_logInfo_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Api", "logInfo", 0);

  sfUpdateLoc(32);
  {
    art_Art_logInfo(SF tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_logDebug_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Api", "logDebug", 0);

  sfUpdateLoc(36);
  {
    art_Art_logDebug(SF tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_logError_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Api", "logError", 0);

  sfUpdateLoc(40);
  {
    art_Art_logError(SF tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_id_(this), (String) msg);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_put_fanAck_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api this, tc_TempControlMixedSeL4CAmKES_FanAck_Type value) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Api", "put_fanAck", 0);

  sfUpdateLoc(28);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_FanAck_Payload(t_0);
    tc_TempControlMixedSeL4CAmKES_FanAck_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_fanAck_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_put_fanAck_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api this, tc_TempControlMixedSeL4CAmKES_FanAck_Type value) {
  DeclNewStackFrame(caller, "Fan_Api.scala", "tc.TempControlMixedSeL4CAmKES.Fan_Api", "put_fanAck", 0);

  sfUpdateLoc(28);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_FanAck_Payload(t_0);
    tc_TempControlMixedSeL4CAmKES_FanAck_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_fanAck_Id_(this), (art_DataContent) (&t_0));
  }
}