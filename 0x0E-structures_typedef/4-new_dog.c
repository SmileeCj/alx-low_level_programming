#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
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

	dog_t *p;

	p = (dog_t *) malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(strlen(name) + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(owner) + 1);
	if (p->owner == NULL)
	{
		free(p);
		return (NULL);
	}

	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);

	return (p);
}
