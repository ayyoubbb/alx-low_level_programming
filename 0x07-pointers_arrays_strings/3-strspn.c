#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: a pointer to an integer 1.
 * @accept: a pointer to an integer 2.
 * Return: return an unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0' && *a != *s)
		{
			a++;
		}
		if (*a == '\0')
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
