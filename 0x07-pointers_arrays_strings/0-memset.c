#include "main.h"

/**
  * *_memset - fills memory with a constant byte.
  * @s: a pointer to an integer.
  * @b: a character.
  * @n: unsigned int.
  * Return: return character s;
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
