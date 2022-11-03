#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 */
void print_triangle(int size)
{
		int i;
		int j;

		if (size > 0)
		{
			for (i = 1; i <= size; i++)
			{
				for (j = i; j < size; j++)
				{
					_putchar(' ');
				}

				for (j = 1; j <= i; j++)
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
