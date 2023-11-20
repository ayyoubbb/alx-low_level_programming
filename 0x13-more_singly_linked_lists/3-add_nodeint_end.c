#include "lists.h"

/**
 * *add_nodeint_end - add nodes at the end of a list
 * @head: a pointer to a pointer to listint_t
 * @n: a const variable
 * Return: return the number of nodes
 */ 

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first_node = malloc(sizeof(listint_t));
	listint_t *second_node;

	if (!head || !first_node)
	{
		return (NULL);
	}
	first_node->next = NULL;
	first_node->n = n;
	if (!*head)
		*head = first_node;
	else
	{
		second_node = *head;
		while (second_node->next)
			second_node = second_node->next;
		second_node->next = first_node;
	}
	return (first_node);
}
