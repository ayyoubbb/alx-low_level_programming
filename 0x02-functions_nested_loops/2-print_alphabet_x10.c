#include "main.h"

/**
 * print_alphabet_x10 - Entry pointk
 *
 * Description : a function that prints the alphabet, in lowercas ten times
 *
 * No Return
 */

void print_alphabet_x10(void)
{
	char j = 0;

	while (j < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			++i;
		}
		_putchar('\n');
		++j;
	}
}
