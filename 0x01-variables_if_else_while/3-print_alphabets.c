#include <stdio.h>

/**
* main - Entry pointk
*
* Description: This program prints the alphabet in lowercase
* then it followed by uppcas*
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; ++b)
	{
	putchar(b);
	}
	putchar('\n');

	return (0);
}


