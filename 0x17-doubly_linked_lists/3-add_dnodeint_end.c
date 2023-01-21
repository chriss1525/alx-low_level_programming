#include "lists.h"
/**
 * add_dnodeint_end - adds elements to the end of a linked list
 * @head: first node int list
 * @n: new integer in list
 * Return: address of new element (Success), NULL (failed)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *j = *head;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (j->next)
		{
			j = j->next;
		}
		j->next = new;
		new->prev = j;
	}
	return (new);
}
