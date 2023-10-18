#include "main.h"

/**
* *_strcat - concatenates two strings/
* * @dest: a pointer to a chracter 1.
* @src: a pointer to a charcter 2.
* Return: return the reslt of a charcter.
*/

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}

