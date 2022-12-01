#include "lists.h"
/**
 * add_node_end - adds an element at the end of a linked list
 * @head: starting node
 * @str: new string
 * Return: new address (succes), Null (fail)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *str2 = *head;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (str2->next)
	{
		str2 = str2->next;
	}
	str2->next = new;

	return (new);
}
