#include "main.h"
/**
 * print number - entry point. prints integer
 *
 * Return: 0 (success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(n + -1);
	}
	else if (n < 10)
	{
		_putchar(n);
	}
	else if (n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar((n % 100) + '0');
		_putchar((n % 10) + '0');
	}
}
