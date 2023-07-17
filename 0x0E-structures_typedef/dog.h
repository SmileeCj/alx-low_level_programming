#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Description: Define a nstruct dog contain it's name , age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
