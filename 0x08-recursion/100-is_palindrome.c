#include "main.h"
#include <string.h>

/**
 * is_palindrome -a function that returns 0 or 1
 * @s: an integer to a parameter.
 * Return: return either one or zero.
 */

int is_palindrome(char *s)
{
	int length = 0;
	char *start = s;
	int i, j;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s = start;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
