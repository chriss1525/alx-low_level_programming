#include "main.h"
/**
 *jack_bauer - prints every minute of the day by Jack bauer
 *
 *
 *Return: void
*/
void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hour + '0');
			_putchar(min + '0');
		}
		_putchar(':');
		_putchar(hour + '0');
		_putchar(min + '0');
	}
}
