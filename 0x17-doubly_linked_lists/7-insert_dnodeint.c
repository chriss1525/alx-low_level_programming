#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: head node
 * @idx: indenx where node is added
 * @n: integer in node
 * Return:address of new node (success), Null (fail)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	unsigned int i = 0;

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!new)
		return (NULL);

	if (*h == NULL && idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
	}

	else
	{
		temp = *h;

		while (temp && i < idx)
		{
			temp = temp->next;
			i++;
		}

		temp->prev->next = new;
		new->prev = temp->prev;
		temp->prev = new;
		new->next = temp;
	}
	return (NULL);
}
