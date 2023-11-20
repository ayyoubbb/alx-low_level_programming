#include "lists.h"

/**
 * prine_listint - prints all elements of a listint_t list
 * @h: a pointer of type listint_t
 * Return: return size of the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
