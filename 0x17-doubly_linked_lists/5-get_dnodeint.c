#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: start of linked list
 * @index: the index of each node
 * Return: nth node of a linked list (Success), NULL (fail)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (head);
}
