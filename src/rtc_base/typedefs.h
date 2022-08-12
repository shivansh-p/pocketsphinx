/**
 * Define basic types in case there is no <stdint.h>
 */

#ifndef HAVE_STDINT_H
#include <sphinxbase/prim_type.h>
typedef int32		int32_t;
typedef int16		int16_t;
typedef int8		int8_t;
typedef uint32		uint32_t;
typedef uint16		uint16_t;
typedef uint8		uint8_t;
typedef int64		int64_t;
typedef uint64		uint64_t;
#endif
