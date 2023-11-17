#include <stdio.h>

void at_first(void)__attribute__((constructor));

/**
 *  * at_firest - prints a statement before the main function is executed.
 *   * Return: return(void)
 *    */

void at_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
