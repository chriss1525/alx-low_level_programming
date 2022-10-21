#include "main.h"
/**
 * main - Entry point. prints _putchar
 *
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n')
	return (0);
}
