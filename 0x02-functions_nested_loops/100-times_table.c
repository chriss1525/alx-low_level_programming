#include "main.h"
/**
 *print_times_table - prints the 9 time s table
 *
 *@n: int
 *
 *Return: void
 */
void print_times_table(int n)
{
	int x;
	int i;
	int c;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (i = 0; i <= n; i++)
			{
				c = x * i;

				if (c == 0)
				{
					_putchar(c + '0');
				}
				else if (c < 10 && i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10 && c < 100)
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
				
				if (x * (i + 1) <= n && i != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (i != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
