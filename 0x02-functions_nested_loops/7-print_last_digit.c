#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *
 * @n: int
 *
 *Return: value of the last digit
*/
int print_last_digit(int n)
{
	int r = (n % 10);

	if (n < 0)
	{
		_putchar('0' - r);
		_putchar ('0' - r);
	}
	else
	{
		_putchar(r + '0');
		return (r);
	}
}
