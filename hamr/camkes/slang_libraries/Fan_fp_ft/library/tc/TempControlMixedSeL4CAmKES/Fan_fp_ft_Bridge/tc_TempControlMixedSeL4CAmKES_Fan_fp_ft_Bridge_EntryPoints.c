#include <all.h>

// tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.EntryPoints

B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints__eq(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints other) {
  if (art_Art_BridgeId__ne(this->Fan_fp_ft_BridgeId, other->Fan_fp_ft_BridgeId)) return F;
  if (art_Art_PortId__ne(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (art_Art_PortId__ne(this->fanAck_Id, other->fanAck_Id)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api__ne((tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &this->initialization_api, (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &other->initialization_api)) return F;
  if (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__ne((tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &this->operational_api, (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &other->operational_api)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints__equiv(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints other) {
  if (IS_D10119__inequiv((IS_D10119) &this->dataInPortIds, (IS_D10119) &other->dataInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventInPortIds, (IS_D10119) &other->eventInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->dataOutPortIds, (IS_D10119) &other->dataOutPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventOutPortIds, (IS_D10119) &other->eventOutPortIds)) return F;
  if (art_Art_BridgeId__inequiv(this->Fan_fp_ft_BridgeId, other->Fan_fp_ft_BridgeId)) return F;
  if (art_Art_PortId__inequiv(this->fanCmd_Id, other->fanCmd_Id)) return F;
  if (art_Art_PortId__inequiv(this->fanAck_Id, other->fanAck_Id)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api__inequiv((tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &this->initialization_api, (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &other->initialization_api)) return F;
  if (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api__inequiv((tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &this->operational_api, (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &other->operational_api)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints__ne(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints other);
B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints__inequiv(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints other);

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Fan_fp_ft_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->Fan_fp_ft_BridgeId);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->fanCmd_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->fanAck_Id);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_cprint(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->Fan_fp_ft_BridgeId, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->fanCmd_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->fanAck_Id, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api_cprint((tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api_cprint((tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, art_Art_BridgeId Fan_fp_ft_BridgeId, art_Art_PortId fanCmd_Id, art_Art_PortId fanAck_Id, Option_0247A1 dispatchTriggers, tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api initialization_api, tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "Fan_fp_ft_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.EntryPoints", "apply", 0);
  this->Fan_fp_ft_BridgeId = Fan_fp_ft_BridgeId;
  this->fanCmd_Id = fanCmd_Id;
  this->fanAck_Id = fanAck_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api));
  {
    sfUpdateLoc(78);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(80);
    STATIC_ASSERT(1 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_1);
    t_1.size = (int8_t) 1;
    IS_D10119_up(&t_1, 0, (art_Art_PortId) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_fanCmd_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(82);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(84);
    STATIC_ASSERT(1 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_3);
    t_3.size = (int8_t) 1;
    IS_D10119_up(&t_3, 0, (art_Art_PortId) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_fanAck_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_D10119));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_initialise_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Fan_fp_ft_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(88);
  {
    tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_initialise(SF (tc_TempControlMixedSeL4CAmKES_Fan_Initialization_Api) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(89);
  {
    art_Art_sendOutput(SF (IS_D10119) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

void tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_filter_(STACK_FRAME IS_D10119 result, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, IS_D10119 receivedEvents, IS_D10119 triggers) {
  DeclNewStackFrame(caller, "Fan_fp_ft_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.EntryPoints.compute", "filter", 0);

  sfUpdateLoc(95);
  DeclNewIS_D10119(_r);
  IS_D10119 r = (IS_D10119) &_r;
  {
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(r, (&t_0), sizeof(struct IS_D10119));
  }

  sfUpdateLoc(96);
  ops_ISZOps_3974F3 opsTriggers;
  DeclNewops_ISZOps_3974F3(t_1);
  ops_ISZOps_3974F3_apply(SF &t_1, (IS_D10119) triggers);
  opsTriggers = (ops_ISZOps_3974F3) (&t_1);

  sfUpdateLoc(97);
  {
    IS_D10119 t_5 = receivedEvents;
    int8_t t_6 = (receivedEvents)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      art_Art_PortId e = t_5->value[t_7];

      sfUpdateLoc(98);
      B t_2;
      {
        B t_3 = ops_ISZOps_3974F3_contains_(SF opsTriggers, e);
        t_2 = t_3;
      }
      if (t_2) {

        sfUpdateLoc(99);
        {
          DeclNewIS_D10119(t_4);
          IS_D10119__append(SF (IS_D10119) &t_4, r, e);
          Type_assign(r, ((IS_D10119) &t_4), sizeof(struct IS_D10119));
        }
      }
    }
  }
  Type_assign(result, r, sizeof(struct IS_D10119));
  return;
}

inline B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_compute_extract_106_11(STACK_FRAME_SF art_DispatchStatus t_0, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, IS_D10119 *_receivedEvents) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_receivedEvents = (IS_D10119) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

inline B tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_compute_extract_117_15_8E9F45(STACK_FRAME_SF Option_8E9F45 t_7, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_FanCmd_Type *_value) {
  if (!Some_D29615__is(SF t_7)) return F;
  if (!tc_TempControlMixedSeL4CAmKES_FanCmd_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_7)))) return F;
  *_value = tc_TempControlMixedSeL4CAmKES_FanCmd_Payload_value_(tc_TempControlMixedSeL4CAmKES_FanCmd_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_7))));
  return T;
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_compute_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Fan_fp_ft_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(106);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_Fan_fp_ft_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_D10119 receivedEvents;
  sfAssert(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_compute_extract_106_11(SF t_0, this, &receivedEvents), "Error during var pattern matching.");

  sfUpdateLoc(109);
  IS_D10119 dispatchableEventPorts;
  B t_2 = Option_0247A1_isEmpty_(SF tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_dispatchTriggers_(this));
  DeclNewIS_D10119(t_3);
  if (t_2) {
    Type_assign(&t_3, receivedEvents, sizeof(struct IS_D10119));
  } else {
    DeclNewIS_D10119(t_4);
    Option_0247A1_get_(SF (IS_D10119) &t_4, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_dispatchTriggers_(this));
    DeclNewIS_D10119(t_5);
    tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_filter_(SF (IS_D10119) &t_5, this, (IS_D10119) receivedEvents, (IS_D10119) ((IS_D10119) &t_4));
    Type_assign(&t_3, ((IS_D10119) &t_5), sizeof(struct IS_D10119));
  }
  dispatchableEventPorts = (IS_D10119) &t_3;

  sfUpdateLoc(113);
  {
    art_Art_receiveInput(SF (IS_D10119) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_eventInPortIds_(this), (IS_D10119) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(115);
  {
    IS_D10119 t_9 = dispatchableEventPorts;
    int8_t t_10 = (dispatchableEventPorts)->size;
    for (int8_t t_11 = 0; t_11 < t_10; t_11++) {
      art_Art_PortId portId = t_9->value[t_11];

      sfUpdateLoc(116);
      B t_6;
      {
        t_6 = art_Art_PortId__eq(portId, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_fanCmd_Id_(this));
      }
      if (t_6) {

        sfUpdateLoc(117);
        Option_8E9F45 t_7;
        DeclNewOption_8E9F45(t_8);
        art_Art_getValue(SF (Option_8E9F45) &t_8, tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_fanCmd_Id_(this));
        t_7 = (Option_8E9F45) ((Option_8E9F45) &t_8);
        tc_TempControlMixedSeL4CAmKES_FanCmd_Type value;
        sfAssert(tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_compute_extract_117_15_8E9F45(SF t_7, this, &value), "Error during var pattern matching.");

        sfUpdateLoc(120);
        {
          tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_handle_fanCmd(SF (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_operational_api_(this), value);
        }
      }
    }
  }

  sfUpdateLoc(124);
  {
    art_Art_sendOutput(SF (IS_D10119) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_finalise_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Fan_fp_ft_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.Fan_fp_ft_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(129);
  {
    tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_finalise(SF (tc_TempControlMixedSeL4CAmKES_Fan_Operational_Api) tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge_EntryPoints_operational_api_(this));
  }
}