

#include "mavlink.h"

int16_t serialize_float(float f, uint16_t * bytes, int16_t offset)
{
    *(float*)&bytes[offset] = f;
    return 1;
}

float decode_float(uint16_t * bytes)
{
    return *(float*)bytes;
}

