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
		if ((*d).name == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", (*d).name);
		}

		printf("%f\n", (*d).age);

		if ((*d).owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", (*d).owner);
		}
	}
}
