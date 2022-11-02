#include "main.h"
/**
 * print_square - prints squares using #
 *
 * @size: int. The size of the square
 *
 * Return: 0 (success)
 */
void print_square(int size)
{
	int i;
	int c;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
