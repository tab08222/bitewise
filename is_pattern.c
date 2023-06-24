#include <stdint.h>
#include <stdbool.h>
bool is_pattern(uint16_t x)
{
    const uint16_t n = -x;
    return (n ^ x) < x;
}
