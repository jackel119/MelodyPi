// Self Header
#include "bit_utils.h"

// Prints 8 bits
void print8Bits(uint8_t bits) {
  uint32_t mask = 1 << (BITS_PER_BYTE - 1);
  for (int bit = 0; bit < BITS_PER_BYTE; bit++) {
    printf("%u", (bits & mask) != 0);
    bits <<= 1;
  }
}

// Prints 32 bits with 8 bits each separated by spaces
void print32Bits(uint32_t bits) {
  for (int byte = BYTES_PER_WORD - 1; byte >= 0; byte--) {
    print8Bits(bits >> byte * BITS_PER_BYTE);
    printf("%c", ' ');
  }
}

// Gets bit at bit location
uint32_t getBit(uint32_t bits, int bit) {
  return (bits >>= bit) & 1;
}

// Gets bits from start to end
uint32_t getBits(uint32_t bits, int start, int end) {
  if (end == BITS_PER_WORD - 1) {
    return bits >> start;
  }
  bits &= (1 << (end + 1)) - 1;
  bits >>= start;
  return bits;
}

// Sets bit to set/clear at bit location
void setBit(uint32_t *bits, int set, int bit) {
  if (set == 0) {
    *bits &= ~(1 << bit);
  } else {
    *bits |= 1 << bit;
  }
}
