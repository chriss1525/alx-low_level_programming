#include "main.h"
/**
 * more_numbers - prints 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; 1 <= 14; i++)
		{
			if (i < 10)
			{
			_putchar (i + '0');
			}
			else
			{
				_putchar ((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
