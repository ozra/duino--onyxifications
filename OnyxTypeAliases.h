#ifndef UTILS_TYPES
#define UTILS_TYPES

#include <stdint.h>


// *TODO*  add a namespace to this - open it where wanted - so it doesn't
// pollute lib-users code if they hate this still (very likely)


// // // // // // // // // // // //
/*/ Weak type aliases only for now */


// // // // // // // // // // // //
// # BASIC TYPES #

using Void = void;
using Bool = bool;
using Char = char;
using CStr = char*;
using Byte = uint8_t;

using U8 =  uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;

using I8 =  int8_t;
using I16 = int16_t;
using I32 = int32_t;

using F32 = float;
/* using F64 = _unavailable_; */

// using 8, 32>    Q8 = FixPoint<8,;
// using 16, 32>  Q16 = FixPoint<16,;
// using 15, 32>   Q1F15 = FixPoint<1,;

// // // // // // // // // // // //
// TIME RELATED TYPES

using TimeStamp      = U32;
using TimeSpan       = U32;
using TimeInterval   = U32;
using TimeDuration   = U32;
using Duration       = U32;


// // // // // // // // // // // //
// # WIRO / DUINO SPECIFICS #

enum struct PinState : U8 {
   LOW = 0,
   HIGH = 1,
   UNKNOWN = 2,
};

using PinNumber = U8;


// // // // // // // // // // // //
// # CONSTANTS #

constexpr U8*     nil = 0;


#endif
