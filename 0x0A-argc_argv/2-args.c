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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
