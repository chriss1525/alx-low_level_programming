#include <stdio.h>
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
	long int c = a + b;
	long int d = 2;

	while (c < 4000000)
	{
		if ((c % 2) == 0)
		{
			d += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", d);
	return (0);
}
