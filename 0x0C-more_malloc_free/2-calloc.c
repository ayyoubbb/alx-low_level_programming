#include "main.h"
#include <stdlib.h>

/**
  * *_memset - fills memory with a constant byte.
  * @s: pointer to put the constant.
  * @b: a constant: max bytes to use.
  * @n: a parameter of unsigned integer
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*ptr++ = b;
	return (s);
}
/**
  * *_calloc - allocates memory for an array, using malloc
  * @nmemb: array length
  * @size: size of each element
  * Return: return a pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, size *  nmemb);

		return (m);
}
