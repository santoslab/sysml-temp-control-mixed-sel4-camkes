#ifndef SIREUM_TYPE_H_art_art_Port_70EB35
#define SIREUM_TYPE_H_art_art_Port_70EB35

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[tc.TempControlMixedSeL4CAmKES.FanCmd.Type]
#include <type-art_Art_PortId.h>
#include <type-art_PortMode_Type.h>

typedef struct art_Port_70EB35 *art_Port_70EB35;
struct art_Port_70EB35 {
  TYPE type;
  struct StaticString name;
  art_Art_PortId id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_70EB35(x) struct art_Port_70EB35 x = { .type = Tart_Port_70EB35 }

#ifdef __cplusplus
}
#endif

#endif