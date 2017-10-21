#ifndef _bit_utils
#define _bit_utils

// Libraries
#include <stdint.h>
#include <stdio.h>

// Definitions
#include "define.h"

// Function declarations
void print8Bits(uint8_t bits);
void print32Bits(uint32_t bits);
uint32_t getBit(uint32_t bits, int bit);
uint32_t getBits(uint32_t bits, int start, int end);
void setBit(uint32_t *bits, int set, int bit);

#endif
