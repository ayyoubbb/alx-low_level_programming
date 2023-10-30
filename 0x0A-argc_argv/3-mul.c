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
	int num1, num2, result;

	if (argc != 0)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
