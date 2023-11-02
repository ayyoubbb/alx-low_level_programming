#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked -  allocates memory using malloc
  *
  * @b: one parameter of unsigned int type.
  *
  * Return: a function that allocates memory using malloc
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
