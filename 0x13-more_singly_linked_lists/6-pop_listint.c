#include "lists.h"
/**
 * pop_listint - deletes headnode and returns the head node's data
 * @head: first node in a linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *j;
	int i;

	if (head == NULL)
		return (0);

	while (*head != NULL)
	{
		j = *head;
		i = j->n;
		*head = j->next;
		free(j);
	}
	return(i);
}