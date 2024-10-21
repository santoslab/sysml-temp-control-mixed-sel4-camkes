#ifndef SIREUM_TYPE_H_org_sireum_None_BE24EA
#define SIREUM_TYPE_H_org_sireum_None_BE24EA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[tc.Isolette_Data_Model.On_Off.Type]

typedef struct None_BE24EA *None_BE24EA;
struct None_BE24EA {
  TYPE type;
};

#define DeclNewNone_BE24EA(x) struct None_BE24EA x = { .type = TNone_BE24EA }

#ifdef __cplusplus
}
#endif

#endif