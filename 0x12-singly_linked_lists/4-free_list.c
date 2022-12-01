#include "lists.h"
/**
 * free_list - frees a list
 * @head: node
 */

void free_list(list_t *head)
{
	list_t *str2;

	while (head)
	{
		str2 = head->next;
		free(head->str);
		free(head);
		head = str2;
	}
}
