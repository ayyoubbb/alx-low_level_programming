#include  "main.h"

/**
 * print_triangle - prints a triangle
 * @size : it takes an integer
 *
 * Return : No return
 */

void print_triangle(int size)
{
	int row, sep, space;

	for (row = 0; row < size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}
		for (sep = 0; sep < row; sep++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
