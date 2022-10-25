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
			_putchar(0 + '0');

			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');
				c = x * i;

				if ((c <= 9) && (c <= 99))
				{
					putchar(' ');
				}
				if (i == 0)
				{
					_putchar(c + '0');
				}
				else if (c <= 9)
				{
					_putchar(c + '0');
				}
				else if (c < 100)
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
