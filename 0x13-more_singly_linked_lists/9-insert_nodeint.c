#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 *
 * @n: The value to be assigned to the data of the new node.
 * Return: If the insertion is successful, returns a pointer.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *second_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !second_node)
	{
		return (NULL);
	}
	second_node->n = n;
	second_node->next = NULL;
	if (!idx)
	{
		second_node->next = *head;
		*head = second_node;
		return (second_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			second_node->next =  node->next;
			node->next = second_node;
			return (second_node);
		}
		i++;
		node = node->next;
	}
	free(second_node);
	return (NULL);
}
