#ifndef MAVLINK_H_
#define MAVLINK_H_

#include <stdint.h>

/**
  * @brief Serializes a float (32 bits) to four octets (placed in uint16_ts, right aligned)
  *
  */
int16_t serialize_float(float f, uint16_t * bytes, int16_t offset);

float decode_float(uint16_t * bytes);


#endif // MAVLINK_H_
