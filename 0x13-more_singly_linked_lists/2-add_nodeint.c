#include "lists.h"
/**
 * add_nodeint - adds new element to the beginning of a list
 * @head: new node
 * @n: new integer
 * Return: new address (success), Null (fail)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
