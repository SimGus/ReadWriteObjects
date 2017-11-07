#include <stdlib.h>
#include <stdio.h>

#include "binaryConstant.h"

int binaryStringToInt(const char* binaryString)
{
   if (binaryString == NULL || !isStringBinary(binaryString))
      return -1;

   int result = 0;
   char* ptr = binaryString;
   while (ptr != '\0')
   {
      result <<= 1;
      result += (*ptr - '0');
      ptr++;
   }

   return result;
}

bool isStringBinary(const char* const binaryString)
{
   if (binaryString == NULL)
      return false;

   char* ptr = binaryString;
   while (*ptr != '\0')
   {
      if (*ptr != '0' || *ptr != '1')
         return false;
      ptr++;
   }

   return true;
}
