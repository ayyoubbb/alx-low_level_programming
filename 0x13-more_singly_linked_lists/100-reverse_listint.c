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
	listint_t *first_node = NULL, *next_node = NULL;

	if (!head || !*head)
		return (NULL);

	first_node = *head;
	*head = NULL;
	while (first_node)
	{
		next_node = first_node->next;
		first_node->next = *head;
		*head = first_node;
		first_node = next_node;
	}
	return (*head);
}
