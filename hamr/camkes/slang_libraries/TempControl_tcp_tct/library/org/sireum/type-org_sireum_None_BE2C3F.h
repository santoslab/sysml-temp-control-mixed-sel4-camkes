#ifndef SIREUM_TYPE_H_org_sireum_None_BE2C3F
#define SIREUM_TYPE_H_org_sireum_None_BE2C3F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[tc.Isolette_Data_Model.Monitor_Mode.Type]

typedef struct None_BE2C3F *None_BE2C3F;
struct None_BE2C3F {
  TYPE type;
};

#define DeclNewNone_BE2C3F(x) struct None_BE2C3F x = { .type = TNone_BE2C3F }

#ifdef __cplusplus
}
#endif

#endif