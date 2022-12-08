#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a specific node at an index
 * @head: list of integers
 * @index: deleted index
 * Return: 1 (success) -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *new;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}
	while (i < (index - 1))
	{
		if ((temp->next) == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}
