#ifndef SIREUM_TYPE_H_art_UPort
#define SIREUM_TYPE_H_art_UPort

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.UPort

#include <type-art_art_Port_70EB35.h>
#include <type-art_art_Port_AE5929.h>

typedef union art_UPort *art_UPort;
union art_UPort {
  TYPE type;
  struct art_Port_70EB35 art_Port_70EB35;
  struct art_Port_AE5929 art_Port_AE5929;
};

#define DeclNewart_UPort(x) union art_UPort x = { 0 }

#ifdef __cplusplus
}
#endif

#endif