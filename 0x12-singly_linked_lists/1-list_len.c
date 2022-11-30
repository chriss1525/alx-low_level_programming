#include "lists.h"
/**
 * list_len - counts all elements in a list_t list
 * @h: element/node
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
