#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees memoray for struct dog
 * @d: a pointer to dog_t
 * Return: no return
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL || d->owner != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
