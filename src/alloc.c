#include <stdlib.h>

#include "defines.h"
#include "alloc.h"

void del(void* pointer)
{
   if (pointer != NULL)
      free(pointer)
   pointer = NULL;
}
