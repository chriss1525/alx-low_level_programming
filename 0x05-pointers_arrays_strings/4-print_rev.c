#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
	int i, c, x;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	x = i;

	for (c = x - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
