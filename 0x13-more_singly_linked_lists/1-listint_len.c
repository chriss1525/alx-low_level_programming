#include "lists.h"
/**
 *listint_len - prints number of nodes
 *@h: node
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
