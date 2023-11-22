#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position in a linked.
 * @head: A pointer to the head of the linked list
 * @index: The index of the node to be deleted
 * Return: If the deletion is successful, returns 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first_node, *second_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		first_node = *head;
		*head = (*head)->next;
		free(first_node);
		return (1);
	}
	first_node = *head;
	while (first_node)
	{
		if (i == index)
		{
			second_node->next = first_node->next;
			free(first_node);
			return (1);
		}
		i++;
		second_node = first_node;
		first_node = first_node->next;
	}
	return (-1);
}
