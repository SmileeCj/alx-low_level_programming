#include <stdio.h>
#include "dog.h"

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
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if ((*d).owner == NULL || ((*d).age) == 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", (*d).name);
		printf("%f\n", (*d).age);
		printf("%s\n", (*d).owner);
	}
}
