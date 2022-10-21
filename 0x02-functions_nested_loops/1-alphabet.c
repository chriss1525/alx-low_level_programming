#include "main.h"
#include<stdio.h>
/**
 * print_alphabet- Entry point. Prints the alphabet in lowercase
 * followed by a new line
 * 
 * 
 *
 * Return: always 0 (success)
 */
int _putchar(char c)
{
	putchar(c);
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
