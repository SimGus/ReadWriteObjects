#include <stdlib.h>

#include "alloc.h"
#include "defines.h"

void del(void* pointer)
{
   if (pointer != NULL)
      free(pointer)
   else
      WARNING("Tried to free already freed pointer");
   pointer = NULL;
}
