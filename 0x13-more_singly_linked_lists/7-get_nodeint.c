#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth of a listint_t
 * @head: a pointer of listint_t strcuture type.
 * @index: index of nth node
 *
 * Return: return the nth of nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *first_node = head;
	unsigned int i = 0;

	while (first_node != NULL && i < index)
	{
		first_node = first_node->next;
		i++;
	}
	return (first_node);
}
