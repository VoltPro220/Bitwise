#pragma once

#ifndef BITWISE_H
#define BITWISE_H

#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))

#define devVal(value, d) (value >>= (d-1))
#define powVal(value, d) ((d == 0) ? (value = 1) : (d == 1) ? (value = value) : (value <<= (d-1)))

#define bit(bit) (1UL << (bit))
#endif // !BITWISE_H
