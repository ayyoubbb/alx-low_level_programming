#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * @head: a pointer to a pointer of listint_t
 * Return: return the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	first_node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = first_node;
	return (i);
}
