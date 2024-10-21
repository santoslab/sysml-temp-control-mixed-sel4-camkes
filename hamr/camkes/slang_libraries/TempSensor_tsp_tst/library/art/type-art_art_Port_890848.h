#ifndef SIREUM_TYPE_H_art_art_Port_890848
#define SIREUM_TYPE_H_art_art_Port_890848

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[tc.TempControlMixedSeL4CAmKES.Temperature]
#include <type-art_Art_PortId.h>
#include <type-art_PortMode_Type.h>

typedef struct art_Port_890848 *art_Port_890848;
struct art_Port_890848 {
  TYPE type;
  struct StaticString name;
  art_Art_PortId id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_890848(x) struct art_Port_890848 x = { .type = Tart_Port_890848 }

#ifdef __cplusplus
}
#endif

#endif