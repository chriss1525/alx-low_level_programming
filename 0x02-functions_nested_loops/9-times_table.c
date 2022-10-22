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

	for (n = 0; n <= 10; n++)
	{
		_putchar('0');

	for (i = 1; i <= 9; i++)
	{
		_putchar(',');
		_putchar(' ');
	}
	c = n * i;
	
	if (c <= 9)
	{
		_putchar(' ');
	}
	else
	{
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}
