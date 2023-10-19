#include "main.h"

/**
 *  *_strncat - concatenates two strings.
 * @dest : a pointer to an integer.
 * @src : a pointer to an integer 2.
 */

char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest);
}
