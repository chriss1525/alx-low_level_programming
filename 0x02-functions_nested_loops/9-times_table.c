#include "main.h"
/**
 *times_table - prints the 9 time s table
 *
 *
 *
 *Return: value of the last digit
*/
void times_table(void)
{
	int n;
	int i;
	int c;

	for (n = 0; n <= 9; n++)
	{
		for (i = 1; i <= 9; i++)
		{
			c = n * i;

			if (c <= 9)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (c != 81)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}