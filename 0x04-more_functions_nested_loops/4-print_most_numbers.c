#include "main.h"
/**
 * print_most_numbers - print numbers 0 to 9
 * not print 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		else
		{
		}
	}
	_putchar('\n');
}
