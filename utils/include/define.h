#ifndef _define
#define _define

// Functions
#define STRING_SWITCH(string, compare, enumeration)\
  if (strcmp(string, compare) == 0) return enumeration

// Bits and bytes
#define BITS_PER_WORD 32
#define BITS_PER_BYTE 8
#define BYTES_PER_WORD 4

// Registers
#define REGISTER_COUNT 17
#define GP_REGISTER 12
#define PC_REGISTER 15
#define CPSR_REGISTER 16

// Memory
#define MEMORY_CAPACITY 65536

// Instructions
#define LINE_CHARACTERS 511
#define INSTRUCTIONS_CAPACITY 16384
#define OPERAND_CAPACITY 5

// Binary format
#define N_BIT 31
#define Z_BIT 30
#define C_BIT 29
#define V_BIT 28

// Miscellaneous
#define ADDRESS_SIZE 10
#define DECIMAL_BASE 10
#define FF 255
#define PIPELINE_OFFSET 2

#endif
