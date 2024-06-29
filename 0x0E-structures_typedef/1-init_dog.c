#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
* init_dog - initialize a struct
* @d: param1
* @name: param2
* @age: param3
* @owner:param4
*
* Description: initialize a variable of type struct
*
* Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
