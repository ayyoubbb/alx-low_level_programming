#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a list.
 *  @head: a pointer to a pinter to list
 *  @n: a const int
 *  Return: return a pointer to a listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);

	node->next = NULL;
	node->n = n;
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
