#include "lists.h"
/**
 *insert_nodeint_at_index - inserts new node at specific index
 *@head: linked list
 *@idx: specified index
 *@n: value of node
 *Return: new address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	temp = *head;

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	if (!new || !head)
	{
		return (NULL);
		free(new);
	}

	while (i < idx)
	{
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
		}
		temp = temp->next;
		i++;
		if (temp == NULL)
		{
			return (NULL);
			free(new);
		}
	}
	return (new);
	free(new);
}
