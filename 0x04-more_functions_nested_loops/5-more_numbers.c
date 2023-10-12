#include "main.h"

/**
 * more_numbers - prints from 0 to 14, ten times.
 *
 * Return: Always (Success)
 */

void more_numbers(void)
{
	int row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)
			{
				_putchar((count / 10) + '0');
			}
			_putchar((count % 10) + '0');
		}
		_putchar('\n');
	}
}
