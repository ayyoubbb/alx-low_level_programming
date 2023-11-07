#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * @d: a pointer of a structure
 * @name: a parameter of character
 * @age: a parameter of float
 * @owner: a parameter of character 2.
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
