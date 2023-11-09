#include "variadic_functions.h"


/**
  * sum_them_all - returns stum of integers
  * @n: one paramter of unsigned int
  * Return: return int
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);
	return (total);
}
