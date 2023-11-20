#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: a pointer to a pointer
 * Return: return(void)
 */

void free_listint(listint_t *head)
{
	listint_t *first_node;

	while (head != NULL)
	{
		first_node = head;
		head = head->next;
		free(first_node);
	}
}
