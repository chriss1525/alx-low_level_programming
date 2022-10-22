#include "main.h"
/**
 *print_to_98 - prints to 98
 *
 *@n: int
 *
 *Return: void
*/
void print_to_98(int n)
{
	int i = 98;

	if (i > n)
	{
		for (i; i - n >= 0; i--)
		{
			if (n <= 9)
			{
				if (n < 0 && n > -10)
				{
					_putchar('-');
					_putchar((n * -1) + '0');
				}
				else if (n <= -10)
				{
					_putchar('-');
					_putchar(((n * -1) / 10) + '0');
					_putchar(((n * -1) % 10) + '0');
				}
				else
				{
					_putchar(n + '0');
				}
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i; i - n <= 0; i++)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n % 100) / 10) + '0');
				_putchar(((n % 100) % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar(10);
}
