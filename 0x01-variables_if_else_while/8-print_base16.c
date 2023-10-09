#include <stdio.h>

/**
* main - Entry pointk
*
* Description: This program prints decimal number of base 16
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char i;

	for (i = 0; i < 16; ++i)
	if (i < 10)
	{
		putchar(i + '0');
	} else
	{
		putchar(i - 10 + 'a');
	}
	putchar('\n');

	return (0);
}
