#include "main.h"

/**
* *_strchr - locates a character in a string.
* @s: a pointer to integer.
* @c: a charater.
* Return: return null or a pointer.
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
