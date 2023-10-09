#include <stdio.h>

/**
* main - Entry pointk
*
* Description: This program prints decimal number of base 10
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9 ; ++i)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
