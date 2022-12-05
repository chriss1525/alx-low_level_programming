#include "lists.h"
/**
 * sum_listint - returns the sum of all data in a linked list
 * @head: fisrt node in linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
