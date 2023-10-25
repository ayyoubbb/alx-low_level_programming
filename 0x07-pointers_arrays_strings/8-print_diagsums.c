#include "main.h"

/**
 *  print_diagsums - the two diagonals of a square matrix of integers.
 * @a: a pointer to an integer 1.
 * @size: a pointer to an integer 2.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
