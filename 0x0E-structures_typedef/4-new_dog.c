#include <stdio.h>
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
	dog_t d;
	dog_t *p;

	p = &d;

	p->name = name;
	p->age = age;
	p->owner = owner;

	if (p == NULL)
		return (NULL);

	return (p);
}
