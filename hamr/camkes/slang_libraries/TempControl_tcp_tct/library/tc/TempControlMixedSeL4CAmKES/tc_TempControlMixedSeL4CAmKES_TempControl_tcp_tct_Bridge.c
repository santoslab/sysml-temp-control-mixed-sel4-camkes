#include <all.h>

B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_initialized_ = F;

union Option_098837 _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api;
union Option_889345 _tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api;

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init(STACK_FRAME_ONLY) {
  if (tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_initialized_) return;
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "TempControl_tcp_tct_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge", "<init>", 0);
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init_c_initialization_api(SF_LAST);
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init_c_operational_api(SF_LAST);
}

Option_098837 tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init(CALLER_LAST);
  return (Option_098837) &_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api_a(STACK_FRAME Option_098837 p_c_initialization_api) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init(CALLER_LAST);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_098837));
}

Option_889345 tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init(CALLER_LAST);
  return (Option_889345) &_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api;
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api_a(STACK_FRAME Option_889345 p_c_operational_api) {
  tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init(CALLER_LAST);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_889345));
}

// tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge

B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge__eq(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge this, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge other) {
  if (art_Art_BridgeId__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_0247A1__ne((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (art_Port_890848__ne((art_Port_890848) &this->currentTemp, (art_Port_890848) &other->currentTemp)) return F;
  if (art_Port_9CBF18__ne((art_Port_9CBF18) &this->tempChanged, (art_Port_9CBF18) &other->tempChanged)) return F;
  if (art_Port_AE5929__ne((art_Port_AE5929) &this->fanAck, (art_Port_AE5929) &other->fanAck)) return F;
  if (art_Port_846E11__ne((art_Port_846E11) &this->setPoint, (art_Port_846E11) &other->setPoint)) return F;
  if (art_Port_70EB35__ne((art_Port_70EB35) &this->fanCmd, (art_Port_70EB35) &other->fanCmd)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge__equiv(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge this, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge other) {
  if (art_Bridge_Ports__inequiv((art_Bridge_Ports) &this->ports, (art_Bridge_Ports) &other->ports)) return F;
  if (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api__inequiv((tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &this->initialization_api, (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) &other->initialization_api)) return F;
  if (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api__inequiv((tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &this->operational_api, (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) &other->operational_api)) return F;
  if (art_Bridge_EntryPoints__inequiv((art_Bridge_EntryPoints) &this->entryPoints, (art_Bridge_EntryPoints) &other->entryPoints)) return F;
  if (art_Art_BridgeId__inequiv(this->id, other->id)) return F;
  if (String__inequiv((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__inequiv((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_0247A1__inequiv((Option_0247A1) &this->dispatchTriggers, (Option_0247A1) &other->dispatchTriggers)) return F;
  if (art_Port_890848__inequiv((art_Port_890848) &this->currentTemp, (art_Port_890848) &other->currentTemp)) return F;
  if (art_Port_9CBF18__inequiv((art_Port_9CBF18) &this->tempChanged, (art_Port_9CBF18) &other->tempChanged)) return F;
  if (art_Port_AE5929__inequiv((art_Port_AE5929) &this->fanAck, (art_Port_AE5929) &other->fanAck)) return F;
  if (art_Port_846E11__inequiv((art_Port_846E11) &this->setPoint, (art_Port_846E11) &other->setPoint)) return F;
  if (art_Port_70EB35__inequiv((art_Port_70EB35) &this->fanCmd, (art_Port_70EB35) &other->fanCmd)) return F;
  return T;
}

B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge__ne(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge this, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge other);
B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge__inequiv(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge this, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge other);

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_string_(STACK_FRAME String result, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge this) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge", "string", 0);
  String_string_(SF result, string("TempControl_tcp_tct_Bridge("));
  String sep = string(", ");
  art_Art_BridgeId_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_0247A1_string_(SF result, (Option_0247A1) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_890848_string_(SF result, (art_Port_890848) &this->currentTemp);
  String_string_(SF result, sep);
  art_Port_9CBF18_string_(SF result, (art_Port_9CBF18) &this->tempChanged);
  String_string_(SF result, sep);
  art_Port_AE5929_string_(SF result, (art_Port_AE5929) &this->fanAck);
  String_string_(SF result, sep);
  art_Port_846E11_string_(SF result, (art_Port_846E11) &this->setPoint);
  String_string_(SF result, sep);
  art_Port_70EB35_string_(SF result, (art_Port_70EB35) &this->fanCmd);
  String_string_(SF result, string(")"));
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_cprint(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  void *sf = NULL;
  String_cprint(string("TempControl_tcp_tct_Bridge("), isOut);
  String sep = string(", ");
  art_Art_BridgeId_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_0247A1_cprint((Option_0247A1) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_890848_cprint((art_Port_890848) &this->currentTemp, isOut);
  String_cprint(sep, isOut);
  art_Port_9CBF18_cprint((art_Port_9CBF18) &this->tempChanged, isOut);
  String_cprint(sep, isOut);
  art_Port_AE5929_cprint((art_Port_AE5929) &this->fanAck, isOut);
  String_cprint(sep, isOut);
  art_Port_846E11_cprint((art_Port_846E11) &this->setPoint, isOut);
  String_cprint(sep, isOut);
  art_Port_70EB35_cprint((art_Port_70EB35) &this->fanCmd, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge__is(STACK_FRAME void* this);
tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge__as(STACK_FRAME void *this);

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_apply(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge this, art_Art_BridgeId id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_0247A1 dispatchTriggers, art_Port_890848 currentTemp, art_Port_9CBF18 tempChanged, art_Port_AE5929 fanAck, art_Port_846E11 setPoint, art_Port_70EB35 fanCmd) {
  DeclNewStackFrame(caller, "TempControl_tcp_tct_Bridge.scala", "tc.TempControlMixedSeL4CAmKES.TempControl_tcp_tct_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_0247A1));
  Type_assign(&this->currentTemp, currentTemp, sizeof(struct art_Port_890848));
  Type_assign(&this->tempChanged, tempChanged, sizeof(struct art_Port_9CBF18));
  Type_assign(&this->fanAck, fanAck, sizeof(struct art_Port_AE5929));
  Type_assign(&this->setPoint, setPoint, sizeof(struct art_Port_846E11));
  Type_assign(&this->fanCmd, fanCmd, sizeof(struct art_Port_70EB35));
  {
    sfUpdateLoc(25);
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 1;
    IS_820232_up(&t_1, 0, (art_UPort) tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_currentTemp_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(3 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 3;
    IS_820232_up(&t_3, 0, (art_UPort) tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_tempChanged_(this));
    IS_820232_up(&t_3, 1, (art_UPort) tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanAck_(this));
    IS_820232_up(&t_3, 2, (art_UPort) tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_setPoint_(this));
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 1;
    IS_820232_up(&t_4, 0, (art_UPort) tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanCmd_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(37);
    {

      sfUpdateLoc(38);
      tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api api;
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api(t_5);
      tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api_apply(SF &t_5, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_id_(this), art_Port_890848_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_currentTemp_(this)), art_Port_9CBF18_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_tempChanged_(this)), art_Port_AE5929_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanAck_(this)), art_Port_846E11_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_setPoint_(this)), art_Port_70EB35_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanCmd_(this)));
      api = (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) (&t_5);

      sfUpdateLoc(46);
      {
        DeclNewSome_6EABEC(t_6);
        Some_6EABEC_apply(SF &t_6, (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) api);
        tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api_a(SF (Option_098837) (&t_6));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(50);
    {

      sfUpdateLoc(51);
      tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api api;
      DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api(t_7);
      tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api_apply(SF &t_7, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_id_(this), art_Port_890848_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_currentTemp_(this)), art_Port_9CBF18_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_tempChanged_(this)), art_Port_AE5929_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanAck_(this)), art_Port_846E11_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_setPoint_(this)), art_Port_70EB35_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanCmd_(this)));
      api = (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) (&t_7);

      sfUpdateLoc(59);
      {
        DeclNewSome_BE25AD(t_8);
        Some_BE25AD_apply(SF &t_8, (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) api);
        tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api_a(SF (Option_889345) (&t_8));
      }
      Type_assign(&this->operational_api, api, sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(64);
    DeclNewtc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints(t_9);
    tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints_apply(SF &t_9, tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_id_(this), art_Port_890848_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_currentTemp_(this)), art_Port_9CBF18_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_tempChanged_(this)), art_Port_AE5929_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanAck_(this)), art_Port_846E11_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_setPoint_(this)), art_Port_70EB35_id_(tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_fanCmd_(this)), (Option_0247A1) tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_dispatchTriggers_(this), (tc_TempControlMixedSeL4CAmKES_TempControl_Initialization_Api) tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_initialization_api_(this), (tc_TempControlMixedSeL4CAmKES_TempControl_Operational_Api) tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_9), sizeof(struct tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints));
  }
}

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(81);
  DeclNewNone_BB3A66(t_0);
  None_BB3A66_apply(SF &t_0);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_initialization_api, (&t_0), sizeof(struct None_BB3A66));
};

void tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(82);
  DeclNewNone_E88024(t_1);
  None_E88024_apply(SF &t_1);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_c_operational_api, (&t_1), sizeof(struct None_E88024));
};