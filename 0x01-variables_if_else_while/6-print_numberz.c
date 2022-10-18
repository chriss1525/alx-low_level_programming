#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * print
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
