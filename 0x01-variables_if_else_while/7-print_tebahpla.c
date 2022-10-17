#include <stdio.h>

/**
 * main - entry point
 *
 * prints lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
	
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
