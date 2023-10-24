#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: a pointer to an integer 1.
 * @accept: a pointer to an integer 2.
 * Return: return a null or a pointer.
 */

char *_strpbrk(char *s, char *accept)
{
	char *current_set = accept;

	while (*s != '\0')
	{
		while (*current_set != '\0')
		{
			if (*current_set == *s)
			{
				return (s);
			}
			current_set++;
		}
		s++;
		current_set = accept;
	}
	return (NULL);
}
