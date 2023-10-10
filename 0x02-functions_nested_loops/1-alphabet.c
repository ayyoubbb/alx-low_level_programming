#include "main.h"

/**
* print_alphabet - Entry pointk
*
* Description : a function that prints the alphabet, in lowercase
*
* No Return
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
