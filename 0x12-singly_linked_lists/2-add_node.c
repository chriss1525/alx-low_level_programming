#include "lists.h"
/**
 * add_node - adds new element to the beginning of a list
 * @head: new node
 * @str: new string
 * Return: new address (success), Null (fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = (*head);
	(*head) = new;

	return (*head);
}
