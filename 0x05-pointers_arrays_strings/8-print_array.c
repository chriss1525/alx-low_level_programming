#include "main.h"
/**
 * print_array - entry point
 * @a: array/string
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	while (i <= n)
	{
		_putchar(a[i]);
		i++;
	}
}
