#include <stdint.h>
#include <stdio.h>
#include "mavlink.h"

void main()
{
    float pi = 3.2416;
    uint16_t bytes[2];
    serialize_float(pi, bytes, 0);
    printf("%f\r\n", pi);
    for (int i = 0; i < 2; i++)
    {
        printf("0x%04X ", bytes[i]);
    }
    printf("\r\n");

    float decoded_float = decode_float(bytes);
    printf("%f\r\n", decoded_float);

}
