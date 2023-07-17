#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for dog
 * @d: struct dog to free
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->owner)
		{
			free(d->owner);
		}
		if (d->name)
		{
			free(d->name);
		}
		free(d);
	}
}
