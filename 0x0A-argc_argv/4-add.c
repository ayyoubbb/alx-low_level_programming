#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - an entry point.
  *
  * Description: the program adds two positve numbers.
  * If no number is passed to the program, print 0, followed by a new line
  * If one of the number contains symbols that are not digits, print Error
  *
  * @argc: the number of command-line arguments.
  * @argv: an array of pointers to the command lines.
  *
  * Return: return 0 (succees)
  */

int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
