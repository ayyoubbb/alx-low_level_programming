#include "main.h"

/**
 * *_strchr -  a function that locates a character in a string.
 * @s: a pointer to a character.
 * @c: a character.
 * Return: Returns a pointer or null.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
