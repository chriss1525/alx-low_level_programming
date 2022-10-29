#include "main.h"
/**
 *print_times_table - prints the 9 time s table
 *@n: int
 *Return: void
 */
void print_times_table(int n)
{
	int i, x, c;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (x = 1; x <= n; x++)
			{
				_putchar(',');
				_putchar(' ');

				c = i * x;

				if (c <= 99)
					_putchar(' ');
				if (c <= 9)
					_putchar(' ');

				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10)) % 10 + '0');
				}
				else if (c <= 99 && c >= 10)
				{
					_putchar((c / 10) + '0');
				}
				_putchar((c % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
