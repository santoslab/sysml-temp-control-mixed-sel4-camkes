#ifndef SIREUM_TYPE_H_art_Art_PortId
#define SIREUM_TYPE_H_art_Art_PortId

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef uint64_t art_Art_PortId;

#define art_Art_PortId_C(n) UINT64_C(n)

#define art_Art_PortId_Min art_Art_PortId_C(0)
#define art_Art_PortId_Max art_Art_PortId_C(8)

#define art_Art_PortId_F "%" PRIu64 ""

#ifdef __cplusplus
}
#endif

#endif