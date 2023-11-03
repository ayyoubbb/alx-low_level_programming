#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: a pointer to a character 1.
 * @s2: a pointer to a character 2.
 * @n: an unsigned integer.
 *
 * Return: returns a pointer to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, i1_length, i2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	for (i1_length = 0; s1[i1_length] != '\0'; i1_length++)

		for (i2_length = 0; s2[i2_length] != '\0'; i2_length++)

			ptr = malloc(i1_length + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}


	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];


	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		ptr[a] = s2[b];
		a++;
	}


	ptr[a] = '\0';
	return (ptr);
}
