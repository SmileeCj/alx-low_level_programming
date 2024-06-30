#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* print_dog - print struct
* @d: param1
*
* Description: print struct members
*
* Return: nothing
*/


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
			printf("%s\n", d->name);
			printf("%f\n", d->age);
			printf("%s\n", d->owner);
	}
}
