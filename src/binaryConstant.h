#ifndef _BINARY_CONSTANT_H_
#define _BINARY_CONSTANT_H_

#include <stdbool.h>

#define BIN(binaryString)  binaryStringToInt(binaryString)

/*
 * Transforms a binary string (e.g. "101"=5) to its number representation (in $int)
 */
int binaryStringToInt(char const* binaryString);

/*
 * Checks that the string $string contains only '0' and '1'
 */
bool isStringBinary(char const* const binaryString);

#endif //_BINARY_CONSTANT_H_
