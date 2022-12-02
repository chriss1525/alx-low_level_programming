#include "lists.h"
/**
 * add_nodeint_end - adds new element to linked list
 * @head: first element in list
 * @n: new integer
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *j = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (j->next)
	{
		j = j->next;
	}
	j->next = new;

	return (new);
}
