#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array.
 *
 * @size: one parameter of unsigned int type.
 * @c: second parameter of type char.
 *
 * Return: NULL if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
