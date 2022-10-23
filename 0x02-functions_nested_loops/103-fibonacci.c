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
	long int a = 1;
	long int b = 2;
	long int c;
	long int d = 2;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0)
		{
			d += c;
		}
	}
	printf("%ld\n", d);

	return (0);
}
