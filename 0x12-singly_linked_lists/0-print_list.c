#include "lists.h"
#include <limits.h>
/**
 * print_list - prints all the elements of a list
 * @h: a node
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
