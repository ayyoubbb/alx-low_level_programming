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
	listint_t *first_node;
	unsigned int a;

	for (first_node = head, a = 0; first_node && a < index; first_node = first_node->next, a++)
		;
	return (first_node);
}
