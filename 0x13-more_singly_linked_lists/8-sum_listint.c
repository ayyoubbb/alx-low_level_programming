#include "lists.h"

/**
 * sum_listint - returns the sum if all the data(n)
 * @head: a pointer to the header of listint
 *
 * Return: return the sum of listint
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
