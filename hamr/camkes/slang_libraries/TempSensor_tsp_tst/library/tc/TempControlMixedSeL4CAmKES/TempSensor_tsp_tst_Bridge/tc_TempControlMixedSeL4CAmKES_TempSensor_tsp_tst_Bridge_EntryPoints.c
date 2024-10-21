#include <all.h>

// tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints

B tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints__eq(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints other) {
  if (art_Art_BridgeId__ne(this->TempSensor_tsp_tst_BridgeId, other->TempSensor_tsp_tst_BridgeId)) return F;
  if (art_Art_PortId__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (art_Art_PortId__ne(this->tempChanged_Id, other->tempChanged_Id)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__ne((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &this->initialization_api, (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &other->initialization_api)) return F;
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api__ne((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &this->operational_api, (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &other->operational_api)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints__equiv(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints other) {
  if (IS_D10119__inequiv((IS_D10119) &this->dataInPortIds, (IS_D10119) &other->dataInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventInPortIds, (IS_D10119) &other->eventInPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->dataOutPortIds, (IS_D10119) &other->dataOutPortIds)) return F;
  if (IS_D10119__inequiv((IS_D10119) &this->eventOutPortIds, (IS_D10119) &other->eventOutPortIds)) return F;
  if (art_Art_BridgeId__inequiv(this->TempSensor_tsp_tst_BridgeId, other->TempSensor_tsp_tst_BridgeId)) return F;
  if (art_Art_PortId__inequiv(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (art_Art_PortId__inequiv(this->tempChanged_Id, other->tempChanged_Id)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api__inequiv((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &this->initialization_api, (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &other->initialization_api)) return F;
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api__inequiv((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &this->operational_api, (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &other->operational_api)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints__ne(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints other);
B tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints__inequiv(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints other);

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->TempSensor_tsp_tst_BridgeId);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->currentTemp_Id);
  String_string_(SF result, sep);
  art_Art_PortId_string_(SF result, this->tempChanged_Id);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_string_(SF result, (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_cprint(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->TempSensor_tsp_tst_BridgeId, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  art_Art_PortId_cprint(this->tempChanged_Id, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_cprint((tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_cprint((tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this, art_Art_BridgeId TempSensor_tsp_tst_BridgeId, art_Art_PortId currentTemp_Id, art_Art_PortId tempChanged_Id, Option_0247A1 dispatchTriggers, tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api initialization_api, tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints", "apply", 0);
  this->TempSensor_tsp_tst_BridgeId = TempSensor_tsp_tst_BridgeId;
  this->currentTemp_Id = currentTemp_Id;
  this->tempChanged_Id = tempChanged_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api));
  {
    sfUpdateLoc(78);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(80);
    STATIC_ASSERT(0 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_1);
    t_1.size = (int8_t) 0;
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(82);
    STATIC_ASSERT(1 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_2);
    t_2.size = (int8_t) 1;
    IS_D10119_up(&t_2, 0, (art_Art_PortId) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_currentTemp_Id_(this));
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_D10119));
  }
  {
    sfUpdateLoc(84);
    STATIC_ASSERT(1 <= MaxIS_D10119, "Insufficient maximum for IS[Z, art.Art.PortId] elements.");
    DeclNewIS_D10119(t_3);
    t_3.size = (int8_t) 1;
    IS_D10119_up(&t_3, 0, (art_Art_PortId) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_tempChanged_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_D10119));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_initialise_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(88);
  {
    tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_initialise(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(89);
  {
    art_Art_sendOutput(SF (IS_D10119) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_compute_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(93);
  {
    art_Art_receiveInput(SF (IS_D10119) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_eventInPortIds_(this), (IS_D10119) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(96);
  {
    tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_timeTriggered(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(98);
  {
    art_Art_sendOutput(SF (IS_D10119) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_eventOutPortIds_(this), (IS_D10119) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_finalise_(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(103);
  {
    tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_finalise(SF (tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api) tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_Bridge_EntryPoints_operational_api_(this));
  }
}