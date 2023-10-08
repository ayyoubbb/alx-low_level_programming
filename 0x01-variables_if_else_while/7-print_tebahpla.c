#include <stdio.h>

/**
 * main - Entry pointk
 *
 * Description: This program prints alphabets in revese
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a' ; --i)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
