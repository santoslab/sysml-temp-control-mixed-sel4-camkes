#ifndef SIREUM_TYPE_H_art_UPort
#define SIREUM_TYPE_H_art_UPort

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.UPort

#include <type-art_art_Port_890848.h>
#include <type-art_art_Port_9CBF18.h>
#include <type-art_art_Port_AE5929.h>
#include <type-art_art_Port_846E11.h>
#include <type-art_art_Port_70EB35.h>

typedef union art_UPort *art_UPort;
union art_UPort {
  TYPE type;
  struct art_Port_890848 art_Port_890848;
  struct art_Port_9CBF18 art_Port_9CBF18;
  struct art_Port_AE5929 art_Port_AE5929;
  struct art_Port_846E11 art_Port_846E11;
  struct art_Port_70EB35 art_Port_70EB35;
};

#define DeclNewart_UPort(x) union art_UPort x = { 0 }

#ifdef __cplusplus
}
#endif

#endif