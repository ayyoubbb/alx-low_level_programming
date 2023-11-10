#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings -  a function that prints strings
 * @separator: a pointer to a string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			 printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
