#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: start of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head->next;
		n->prev = head;
		free(head);
		head = n;
	}
}
