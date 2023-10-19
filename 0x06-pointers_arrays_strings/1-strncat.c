#include "main.h"

/**
 *  *_strncat - concatenates two strings.
 * @n: an integer parameter.
 * @dest : a pointer to an integer.
 * @src : a pointer to an integer 2
 * Return: return a pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
