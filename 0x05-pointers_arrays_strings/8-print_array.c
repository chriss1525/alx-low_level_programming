#include "main.h"
/**
 * print_array - entry point
 * @a: array/string
 * @n: number of elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	while (i == n - 1)
	{
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
