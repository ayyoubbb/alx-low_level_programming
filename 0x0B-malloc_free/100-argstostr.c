#include "main.h"
#include <stdlib.h>

/**
   * argstostr - Concatenate command-line arguments into a single string
    * @ac: Number of arguments
     * @av: Array of arguments
      * Return: Pointer to concatenated string
       */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	len += ac;
	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
