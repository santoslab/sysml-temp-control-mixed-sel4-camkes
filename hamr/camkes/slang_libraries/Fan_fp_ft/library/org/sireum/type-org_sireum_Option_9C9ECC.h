#ifndef SIREUM_TYPE_H_org_sireum_Option_9C9ECC
#define SIREUM_TYPE_H_org_sireum_Option_9C9ECC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[tc.TempControlMixedSeL4CAmKES.Fan_Initialization_Api]

#include <type-org_sireum_None_F8CCDD.h>
#include <type-org_sireum_Some_4F31FE.h>

typedef union Option_9C9ECC *Option_9C9ECC;
union Option_9C9ECC {
  TYPE type;
  struct None_F8CCDD None_F8CCDD;
  struct Some_4F31FE Some_4F31FE;
};

#define DeclNewOption_9C9ECC(x) union Option_9C9ECC x = { 0 }

#ifdef __cplusplus
}
#endif

#endif