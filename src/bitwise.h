#pragma once

#ifndef BITWISE_H
#define BITWISE_H

#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitOn(value, bit) ((value) |= (1UL << (bit)))
#define bitOff(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))
#define bit(bit) (1UL << (bit))


#endif // !BITWISE_H
