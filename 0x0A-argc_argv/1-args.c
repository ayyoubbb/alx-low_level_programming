#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name.
  *
  * @argc: The number of command-line arguments.
  * @argv: An array of pointers to the command-line arguments.
  *
  * Return: return 0 (success)
  */

int main(int argc,  char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
