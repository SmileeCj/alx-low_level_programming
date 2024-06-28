#ifndef DOG_H
#define DOG_H

/**
 * struct Dog - type Dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: define new type called Dog
 */

typedef struct Dog
{
	char *name;
	float age;
	char *owner;
} Dog;

#endif
