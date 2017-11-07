#ifndef _RWOBJECT_H_
#define _RWOBJECT_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "defines.h"

typedef struct
{
   char flags;
} RWPermissions;

typedef struct
{
   char* nametag;
   void* value_ptr;
   RWPermissions permissions;
} RWAttribute;

typedef struct
{
   RWAttribute* attributes;
} ReadWriteObject;
typedef ReadWriteObject RWObject;



/*
 * Builds and returns an initialized $ReadWriteObject with $nbAttributes attributes
 * ~ constructor
 */
RWObject* new_RWObject(int nbAttributes);
RWObject* new_ReadWriteObject(int nbAttributes);

/*
 * Frees $object
 */

/*
 * Set up attributes of $object
 */

#endif //_RWOBJECT_H_
