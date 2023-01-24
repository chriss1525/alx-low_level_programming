#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data in a linked list
 * @head: first item in linked list
 * Return: sum of all data in linked list (success) 0 (list is empty)
*/

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
