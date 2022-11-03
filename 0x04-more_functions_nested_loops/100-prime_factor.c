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
	long int c = 2;
	long int n = 612852475143;

	while (n >= 2)
	{
		if (n % c == 0)
		{
			i = c;
			n = n / c;
		}
		else
		{
			c++;
		}
	}
	printf("%ld\n", i);
	return (0);
}
