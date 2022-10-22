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
	int c = n * i;

	for (n = 0; n <= 10; n++)
	{
		_putchar('0');

	for (i = 1; i <= 9; i++)
	{
		_putchar(',');
		_putchar(' ');
	}
	if ((c % 9) == 9)
	{
		_putchar((c % 9) + '0');
	}
	else
	{
		_putchar(' ');
	}
	_putchar('\n');
	}
}
