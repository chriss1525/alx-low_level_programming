#include "main.h"
/**
 *print_times_table - prints the 9 time s table
 *@n: int
 *Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		for (int x = 0; x <= n; x++)
		{
			for (int i = 0; i <= n; i++)
			{
				int c = x * i;

				if (i == 0)
				{
					_putchar(c + '0');
				}
				else if (c <= 9)
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
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
