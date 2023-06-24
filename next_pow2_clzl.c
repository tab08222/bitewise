#include <stdint.h>
static inline uint64_t pow2(uint8_t e) { return ((uint64_t)1) << e; }
uint64_t next_pow2(uint64_t x)
{
    return pow2(64- __builtin_clzl(x) );
}
