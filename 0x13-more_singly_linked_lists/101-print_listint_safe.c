#include "lists.h"

/**
 * _p - Reallocates memory for an array of pointers to a linked list.
 * @list: A pointer to an array of pointers to a linked list.
 * @size: The current size of the array.
 * @new: A pointer to the new listint_t element to be added 
 * Return: A pointer to the reallocated array with the new element.
 */ 


const listint_t **_p(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **listint;  
	size_t a;

	listint = malloc(size * sizeof(listint_t *));
	if (listint == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		listint[a] = list[a];
	listint[a] = new;
	free(list);
	return (listint);
}


/**
 * print_listint_safe - Prints a linked list safely to avoid infinite loops.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t a, res = 0;
	const listint_t **node = NULL;

	while (head != NULL)
	{
		for (a = 0; a < res; a++)
		{
			if (head == node[a])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(node);
				return (res);
			}
		}
		res++;
		node = _p(node, res, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(node);
	return (res);
}
