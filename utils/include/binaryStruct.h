#ifndef _binaryStruct
#define _binaryStruct

// Data Processing Binary Format
typedef struct DataProcessingBinaryFormat {
  // Bit 27 26 are 0
  uint32_t cond;     // Bit 31 30 29 28
  uint32_t i;        // Bit 25
  uint32_t opCode;   // Bit 24 23 22 21
  uint32_t s;        // Bit 20
  uint32_t rn;       // Bit 19 18 17 16
  uint32_t rd;       // Bit 15 14 13 12
  uint32_t operand2; // Bit 11 10 09 08 07 06 05 04 03 02 01 00
} DataProcessingBinaryFormat;

// Multiply Binary Format
typedef struct MultiplyBinaryFormat {
  // Bit 27 26 25 24 23 22 are 0
  uint32_t cond;   // Bit 31 30 29 28
  uint32_t a;      // Bit 21
  uint32_t s;      // Bit 20
  uint32_t rd;     // Bit 19 18 17 16
  uint32_t rn;     // Bit 15 14 13 12
  uint32_t rs;     // Bit 11 10 09 08
  uint32_t ignore; // Bit 07 06 05 04
  uint32_t rm;     // Bit 03 02 01 00
} MultiplyBinaryFormat;

// Single Data Transfer Binary Format
typedef struct SingleDataTransferBinaryFormat {
  // Bit 22 21 are 0
  uint32_t cond;   // Bit 31 30 29 28
  uint32_t ignore; // Bit 27 26
  uint32_t i;      // Bit 25
  uint32_t p;      // Bit 24
  uint32_t u;      // Bit 23
  uint32_t l;      // Bit 20
  uint32_t rn;     // Bit 19 18 17 16
  uint32_t rd;     // Bit 15 14 13 12
  uint32_t offset; // Bit 11 10 09 08 07 06 05 04 03 02 01 00
} SingleDataTransferBinaryFormat;

// Branch Binary Format
typedef struct BranchBinaryFormat {
  uint32_t cond;   // Bit 31 30 29 28
  uint32_t ignore; // Bit 27 26 25 24
  int32_t offset;  // Bit 23 22 21 20 19 18 17 16 15 14
                   //     13 12 11 10 09 08 07 06 05 04
                   //     03 02 01 00
} BranchBinaryFormat;

// Special Binary Format
typedef struct SpecialBinaryFormat {
  // Bit 27 26 are 0
  uint32_t cond;     // Bit 31 30 29 28
  uint32_t i;        // Bit 25
  uint32_t opCode;   // Bit 24 23 22 21
  uint32_t s;        // Bit 20
  uint32_t rn;       // Bit 19 18 17 16
  uint32_t rd;       // Bit 15 14 13 12
  uint32_t value;    // Bit 11 10 09 08 07
  uint32_t type;     // Bit 06 05
  uint32_t ignore;   // Bit 04
  uint32_t operand2; // Bit 03 02 01 00
} SpecialBinaryFormat;

// Opcode enumeration
enum Opcode {
  AND = 0,  // Binary 0000 in decimal
  EOR = 1,  // Binary 0001 in decimal
  SUB = 2,  // Binary 0010 in decimal
  RSB = 3,  // Binary 0011 in decimal
  ADD = 4,  // Binary 0100 in decimal
  TST = 8,  // Binary 1000 in decimal
  TEQ = 9,  // Binary 1001 in decimal
  CMP = 10, // Binary 1010 in decimal
  ORR = 12, // Binary 1100 in decimal
  MOV = 13  // Binary 1101 in decimal
} Opcode;

// Cond enumeration
enum Cond {
  EQ = 0,  // Binary 0000 in decimal
  NE = 1,  // Binary 0001 in decimal
  GE = 10, // Binary 1010 in decimal
  LT = 11, // Binary 1011 in decimal
  GT = 12, // Binary 1100 in decimal
  LE = 13, // Binary 1101 in decimal
  AL = 14  // Binary 1110 in decimal
} Cond;

// Shift type enumeration
enum ShiftType {
  LSL = 0, // Binary 00 in decimal
  LSR = 1, // Binary 01 in decimal
  ASR = 2, // Binary 10 in decimal
  ROR = 3  // Binary 11 in decimal
} ShiftType;

#endif
