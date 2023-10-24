#include "main.h"

/**
 *_strstr - a function that locates a substring.
 * @haystack: a character to a pointer 1.
 * @needle:  a character to a pointer 2.
 * Return: a pointer or a null.
 */

char *_strstr(char *haystack, char *needle)
{
	char *start_haystack = haystack;
	char *start_needle = needle;

	while (*haystack != '\0')
	{
		start_haystack = haystack;
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (start_haystack);
		}
		needle = start_needle;
		haystack = start_haystack + 1;
	}
	return (NULL);
}
