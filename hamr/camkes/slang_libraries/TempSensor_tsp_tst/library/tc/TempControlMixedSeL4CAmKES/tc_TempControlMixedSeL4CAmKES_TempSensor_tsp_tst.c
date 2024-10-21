#include <all.h>

B tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_initialized_ = F;

struct Random_Gen64Impl _tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_rand;
F32 _tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta;
struct tc_TempControlMixedSeL4CAmKES_Temperature _tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature;

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init(STACK_FRAME_ONLY) {
  if (tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_initialized_) return;
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_initialized_ = T;
  DeclNewStackFrame(caller, "TempSensor_tsp_tst.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst", "<init>", 0);
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init_rand(SF_LAST);
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init_delta(SF_LAST);
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init_lastTemperature(SF_LAST);
}

Random_Gen64Impl tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_rand(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init(CALLER_LAST);
  return (Random_Gen64Impl) &_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_rand;
}

F32 tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init(CALLER_LAST);
  return _tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta;
}

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta_a(STACK_FRAME F32 p_delta) {
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init(CALLER_LAST);
  _tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta = p_delta;
}

tc_TempControlMixedSeL4CAmKES_Temperature tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature(STACK_FRAME_ONLY) {
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init(CALLER_LAST);
  return (tc_TempControlMixedSeL4CAmKES_Temperature) &_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature;
}

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature_a(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature p_lastTemperature) {
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init(CALLER_LAST);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature, p_lastTemperature, sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_initialise(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api api) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst", "initialise", 0);

  sfUpdateLoc(33);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_0);
    tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_0, 72.0F, tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit);
    tc_TempControlMixedSeL4CAmKES_TempSensor_Initialization_Api_put_currentTemp_(SF api, (tc_TempControlMixedSeL4CAmKES_Temperature) (&t_0));
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_timeTriggered(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api api) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst", "timeTriggered", 0);

  sfUpdateLoc(41);
  tc_TempControlMixedSeL4CAmKES_Temperature temp;
  DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_0);
  tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_currentTempGet(SF (tc_TempControlMixedSeL4CAmKES_Temperature) &t_0);
  temp = (tc_TempControlMixedSeL4CAmKES_Temperature) ((tc_TempControlMixedSeL4CAmKES_Temperature) &t_0);

  sfUpdateLoc(46);
  {
    tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_put_currentTemp_(SF api, (tc_TempControlMixedSeL4CAmKES_Temperature) temp);
  }

  sfUpdateLoc(50);
  {
    tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api_put_tempChanged_(SF api);
  }
}

Unit tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_finalise(STACK_FRAME tc_TempControlMixedSeL4CAmKES_TempSensor_Operational_Api api) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst", "finalise", 0);
}

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_currentTempGet(STACK_FRAME tc_TempControlMixedSeL4CAmKES_Temperature result) {
  DeclNewStackFrame(caller, "TempSensor_tsp_tst.scala", "tc.TempControlMixedSeL4CAmKES.TempSensor_tsp_tst", "currentTempGet", 0);

  sfUpdateLoc(57);
  {
    F32 t_0;
    if (F32__gt(tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature(SF_LAST)), tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_SetPoint_high_(tc_TempControlMixedSeL4CAmKES_Defs_defaultSetPoint(SF_LAST))))) {
      t_0 = -4.0F;
    } else {
      F32 t_1;
      if (F32__lt(tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature(SF_LAST)), tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_SetPoint_low_(tc_TempControlMixedSeL4CAmKES_Defs_defaultSetPoint(SF_LAST))))) {
        t_1 = 4.0F;
      } else {
        t_1 = tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta(SF_LAST);
      }
      t_0 = t_1;
    }
    tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta_a(SF (F32) t_0);
  }

  sfUpdateLoc(62);
  F32 nextTemperature;
  {
    {
      F32 t_2;
      if (F32__gt(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta(SF_LAST), 0.0F)) {
        F32 t_3 = Random_Gen64Impl_nextF32Between_(SF tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_rand(SF_LAST), tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature(SF_LAST)), F32__add(tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature(SF_LAST)), tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta(SF_LAST)));
        t_2 = t_3;
      } else {
        F32 t_4 = Random_Gen64Impl_nextF32Between_(SF tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_rand(SF_LAST), F32__add(tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature(SF_LAST)), tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta(SF_LAST)), tc_TempControlMixedSeL4CAmKES_Temperature_degrees_(tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature(SF_LAST)));
        t_2 = t_4;
      }
      nextTemperature = t_2;
    }
  }

  sfUpdateLoc(71);
  {
    DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_5);
    tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_5, nextTemperature, tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit);
    tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature_a(SF (tc_TempControlMixedSeL4CAmKES_Temperature) (&t_5));
  }
  Type_assign(result, tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature(SF_LAST), sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
  return;
}

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init_rand(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  DeclNewRandom_Impl_Xoshiro256(t_1);
  Random_Impl_Xoshiro256_create(SF (Random_Impl_Xoshiro256) &t_1);
  DeclNewRandom_Gen64Impl(t_0);
  Random_Gen64Impl_apply(SF &t_0, (Random_Impl_Xoshiro256) ((Random_Impl_Xoshiro256) &t_1));
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_rand, (&t_0), sizeof(struct Random_Gen64Impl));
};

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init_delta(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_delta = 4.0F;
};

void tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_init_lastTemperature(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  DeclNewtc_TempControlMixedSeL4CAmKES_Temperature(t_2);
  tc_TempControlMixedSeL4CAmKES_Temperature_apply(SF &t_2, 72.0F, tc_TempControlMixedSeL4CAmKES_TempUnit_Type_Fahrenheit);
  Type_assign(&_tc_TempControlMixedSeL4CAmKES_TempSensor_tsp_tst_lastTemperature, (&t_2), sizeof(struct tc_TempControlMixedSeL4CAmKES_Temperature));
};