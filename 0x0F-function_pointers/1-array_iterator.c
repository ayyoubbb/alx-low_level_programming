#include "function_pointers.h"

/**
 * array_iterator - maps an array through a function pointer
 * @array: a parameter integer.
 * @size: the array size.
 * @action: a pointer function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
