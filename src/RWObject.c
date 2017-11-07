#include <stdlib.h>

#include "RWObject.h"

RWObject* new_RWObject(int nbAttributes)
{
   return new_ReadWriteObject(nbAttributes);
}
RWObject* new_ReadWriteObject(int nbAttributes)
{
   if (nbAttributes < 0)
   {
      ERROR("Tried to instanciate a new ReadWriteObject with a negative number of attributes.");
      return NULL;
   }

   RWObject* object = malloc(sizeof(ReadWriteObject));
   object->attributes = malloc(nbAttributes*sizeof(RWAttribute));

   return object;
}
