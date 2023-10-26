#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: an integer to a character.
 */

void _print_rev_recursion(char *s)
{
	char *reverse = s + 1;

	if (*s != '\0')
	{
		_print_rev_recursion(reverse);
		_putchar(*s);
	}
}
