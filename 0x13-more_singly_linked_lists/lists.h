#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * struct listint_s - singly linked list
 *   * @n: integer
 *    * @next: points to the next node
 *     *
 *      * Description: singly linked list node structure
 *       * 
 *        */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;

/* declared functions */
int _putchar(char c);
listint_t *find_list_loop(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);
size_t print_listint(const listint_t *h);

#endif
