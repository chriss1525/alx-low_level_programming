#include <stdio.h>
#include <math.h>
/**
 * main - entry point. prints prime factor of 612852475143
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int i;
	long int c = -1;
	long int n = 612852475143;

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			c = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		c = n;

		printf("%ld\n", c);
	}

	return (0);
}