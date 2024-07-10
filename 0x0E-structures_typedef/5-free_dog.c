#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
* free_dog - free a struct
* @d: param1
*
* Description: free struct
*
* Return: nothing
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
	d = NULL;
}
