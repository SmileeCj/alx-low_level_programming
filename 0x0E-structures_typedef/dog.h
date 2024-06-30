#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: define new type called dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
