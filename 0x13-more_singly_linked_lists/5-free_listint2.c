#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: a pointer to pointer
 * Return: return(void)
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if (head == NULL)
	{
		return;
	}
	ptr1 = *head;
	while (ptr1 != NULL)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		free(ptr2);
	}
	*head = NULL;
}
