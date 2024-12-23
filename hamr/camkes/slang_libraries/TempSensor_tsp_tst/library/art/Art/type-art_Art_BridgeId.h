#ifndef SIREUM_TYPE_H_art_Art_BridgeId
#define SIREUM_TYPE_H_art_Art_BridgeId

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef uint64_t art_Art_BridgeId;

#define art_Art_BridgeId_C(n) UINT64_C(n)

#define art_Art_BridgeId_Min art_Art_BridgeId_C(0)
#define art_Art_BridgeId_Max art_Art_BridgeId_C(2)

#define art_Art_BridgeId_F "%" PRIu64 ""

#ifdef __cplusplus
}
#endif

#endif