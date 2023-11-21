#include "lists.h"

/**
 * find_listint_loop - Detects the starting node of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If a loop is found, returns a pointer        
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
