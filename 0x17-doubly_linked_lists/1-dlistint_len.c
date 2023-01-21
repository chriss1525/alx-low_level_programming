#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: the head of the list
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
