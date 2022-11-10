#include "main.h"
#include "string.h"
/**
 * puts_half - prints half a string
 * @str: passed string
 * Return: void
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
