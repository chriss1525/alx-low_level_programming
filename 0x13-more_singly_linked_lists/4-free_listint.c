#include "lists.h"
/**
 * free_listint - frees a list
 * @head: the beginning of a list
 */
void free_listint(listint_t *head)
{
	listint_t *j;

	while (head)
	{
		j = head->next;
		free(head);
		head = j;
	}
}
