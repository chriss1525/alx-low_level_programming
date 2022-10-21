#include<stdio.h>
#ifndef MAIN_H
#define MAIN_H
int _print(char c)
{
	putchar(c);
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c= 'a'; c <= 'z'; c++)
	{
		_print(c);
	}
	_print('\n');
}
#endif 
