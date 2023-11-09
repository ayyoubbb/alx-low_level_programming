#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  a function that prints numbers
 * @separator: an array of strings.
 * @n: a parameter of unsigned int
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
