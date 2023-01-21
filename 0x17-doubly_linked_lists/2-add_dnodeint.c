#include "lists.h"
/**
 * add_dnodeint - add node to the begining of a list
 * @head: first element in list
 * @n: new item in list
 * Return: new address (Success), NULL (Fail)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = (*head);
	if (head != NULL)
	{
		new->prev = (*head);
		(*head) = new;
	}

	return (*head);
}
