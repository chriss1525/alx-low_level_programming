#include "main.h"
/**
 * main - Entry point. prints _putchar
 *
 *
 * Return: 0 (success)
 */
int _putchar()
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i<=7; i++)
	{ 
		putchar(c[i]);
	}
	return (0);
}
