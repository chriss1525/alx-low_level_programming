#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: the head of the doubly linked list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
