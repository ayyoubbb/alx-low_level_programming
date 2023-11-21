#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in place.
 * @head: A pointer to the head of the linked list.
 *
 *
 * Return: A pointer to the head of the reversed linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
