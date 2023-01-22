#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: start of linked list
 * @index: the index of each node
 * Return: nth node of a linked list (Success), NULL (fail)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *j;

	j = head;
	while (j != NULL)
	{
		if (n == index)
		{
			return (j);
			j = j->next;
			n++;
		}
	}
	return (NULL);
}
