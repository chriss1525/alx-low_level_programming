#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: the beginning of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *j;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		j = *head;
		*head = j->next;
		free(j);
	}
}
