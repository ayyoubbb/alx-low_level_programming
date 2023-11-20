#include "lists.h"

/**
 * listint_len - return the number of elements in a linked listint_t
 * @h: a pointer to listint_t structure
 * Return: return the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
