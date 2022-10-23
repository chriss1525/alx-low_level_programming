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
	long int d = 0;
	long int e = 2;

	while (d < 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0)
		{
			e += c;
		}
		d++;
	}
	printf("%ld\n", e);

	return (0);
}
