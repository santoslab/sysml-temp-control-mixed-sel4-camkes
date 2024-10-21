#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge tc_TempControlMixedSeL4CAmKES_Fan_fp_ft_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif