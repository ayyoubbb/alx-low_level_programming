#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a : a pointer to an integer 1.
 * @b : a ointer to an integer 2.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
