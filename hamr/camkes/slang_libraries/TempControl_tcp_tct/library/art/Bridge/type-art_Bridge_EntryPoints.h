#ifndef SIREUM_TYPE_H_art_Bridge_EntryPoints
#define SIREUM_TYPE_H_art_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge.EntryPoints

#include <type-tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints.h>

typedef union art_Bridge_EntryPoints *art_Bridge_EntryPoints;
union art_Bridge_EntryPoints {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints tc_TempControlMixedSeL4CAmKES_TempControl_tcp_tct_Bridge_EntryPoints;
};

#define DeclNewart_Bridge_EntryPoints(x) union art_Bridge_EntryPoints x = { 0 }

#ifdef __cplusplus
}
#endif

#endif