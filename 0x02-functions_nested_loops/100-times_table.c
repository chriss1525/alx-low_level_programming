#include "main.h"
/**
 *print_times_table - prints the 9 time s table
 *@n: int
 *Return: void
 */
void print_times_table(int n)
{
	int x, i, c;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (i = 0; i <= n; i++)
			{
				c = x * i;

				if (x == 0)
				{
					_putchar(c + '0');
				}

				if (c <= 9 && i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar((c % 10) + '0');
					_putchar(((c / 10) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
