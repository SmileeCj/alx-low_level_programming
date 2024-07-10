#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create new dog
* @name: param1
* @age: param2
* @owner: param3
*
* Description: create new dog
*
* Return: pointer to a dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t new;
	dog_t *p;

	p = &new;

	if (p == NULL)
		return (NULL);


	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
