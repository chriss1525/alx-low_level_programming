#include <stdio.h>
#include <stdlib.h>

/**
 * printFibonacci - entry point, prints the first fifty fibonnanci numbers
 *
 *main - entry to recurssion
 *
 *
 *@n: int
 *
 *
 * Return: 0 (success)
 */
#include <stdio.h>
void printFibonacci(int n)
{
	int a = 1;
	int b = 2;
	int c;

	if (n > 0)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
		printFibonacci(n - 1);

		int main(void)
		{
			int n;

			printf("50");
			scanf("%d", n);
			printf("Fibonacci Series: ");
			printf("%d %d ", 0, 1);
			printFibonacci(n - 2);

			return (0);
		}
	}
}
