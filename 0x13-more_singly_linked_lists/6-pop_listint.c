#include "lists.h"
/**
 * pop_listint - deletes headnode
 * @head: first node in a linked list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *j;
	int i;

	if (*head == NULL)
		return (0);

	j = *head;

	i = j->n;

	*head = j->next;
	free(j);

	return (i);
}
