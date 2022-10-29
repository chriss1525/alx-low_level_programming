#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *
 *
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long n = 98;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	unsigned long d = 0;

	printf("%lu, %lu", a, b);

	while (d < n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
		d++;
	}
	printf("\n");

	return (0);
}
