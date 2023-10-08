#include <stdio.h>

/**
* main - Entry pointk
*
* Description: This program prints alphabtes in lowercasee.
* it excludes q and e
* Return: Always 0 (Success)
*/

int main(void)
{
	char a;

	for (a = 'z'; a <= 'a'; ++a)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
