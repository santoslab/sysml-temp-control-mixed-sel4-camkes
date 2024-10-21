#ifndef SIREUM_TYPE_H_org_sireum_Option_38D338
#define SIREUM_TYPE_H_org_sireum_Option_38D338

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.Isolette_Data_Model.Monitor_Mode.Type]

#include <type-org_sireum_None_BE2C3F.h>
#include <type-org_sireum_Some_455777.h>

typedef union Option_38D338 *Option_38D338;
union Option_38D338 {
  TYPE type;
  struct None_BE2C3F None_BE2C3F;
  struct Some_455777 Some_455777;
};

#define DeclNewOption_38D338(x) union Option_38D338 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif