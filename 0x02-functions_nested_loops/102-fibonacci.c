#include <stdio.h>
#include <stdlib.h>

/**
 * printFibonacci - entry point, prints the first fifty fibonnanci numbers
 *
 *main - entry point
 *
 *
 *@n: int
 *
 *
 * Return: 0 (success)
 */
void main(void)
{
	long int n = 50;
	long int a = 1;
	long int b = 2;
	long int c;
	long int d = 0;

	printf("%ld, %ld, ", a, b);

	while (d < n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld, ", c);
		d++;
	}
	printf("\n");
}