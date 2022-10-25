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
	long n = 98;
	long a = 1;
	long b = 2;
	long c;
	long d = 0;

	printf("%ld, %ld", a, b);

	while (d < n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %ld", c);
		d++;
	}
	printf("\n");

	return (0);
}
